#include "loginForm.h"
#include "userinformation.h"




using namespace System;
using namespace System::Windows::Forms;
using namespace programdp;
using namespace System::Data::SqlClient;

[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	programdp::loginForm Form;
	Application::Run(% Form);
}

System::Void loginForm::btlogin_Click(System::Object^ sender, System::EventArgs^ e) {
	// �������� ��� � ���� ��������
	String^ loginuser = this->tblogin->Text;
	String^ passworduser = this->tbpassword->Text;

	// ����������, �� �������� ������ ����
	if (loginuser->Length == 0 || passworduser->Length == 0)
	{
		MessageBox::Show("���� �����, ������ ���� �� ������", "�������",
			MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	try
	{
		// ����� ���������� �� ���� �����
		String^ connString = "Data Source=DESKTOP-4P29GTL\\SQLEXPRESS;Initial Catalog=authent;Integrated Security=True";

		// ��������� ��'���� ����������
		SqlConnection^ sqlConn = gcnew SqlConnection(connString);

		// ³������� ����������
		sqlConn->Open();

		// SQL ����� ��� �������� ����� �� ������
		String^ sqlQuery = "SELECT * FROM Users WHERE UserLogin=@login AND UserPassword=@pwd;";

		// ��������� ������� SQL � �����������
		SqlCommand^ command = gcnew SqlCommand(sqlQuery, sqlConn);
		command->Parameters->AddWithValue("@login", loginuser);
		command->Parameters->AddWithValue("@pwd", passworduser);

		// ��������� ������ �� ��������� ����������
		SqlDataReader^ reader = command->ExecuteReader();

		// ��������, �� � ���������� � �������� ������ �� �������
		if (reader->Read())
		{
			roleStorage::roleuser = Convert::ToInt32(reader["Role"]);
			// ��������� ��� �����������
			int role = Convert::ToInt32(reader["Role"]);
			roleStorage::usersid = Convert::ToInt32(reader["IdUser"]);

			// ���� �������� ����� � ��������� �� ���
			if (role == 1)
			{
				masterForm^ masterform = gcnew masterForm;
				masterform->Show();
				loginForm::Hide();
				MessageBox::Show("�� ������ �� ����������", "������� ����",
					MessageBoxButtons::OK, MessageBoxIcon::Information);

			}
			else if (role == 2)
			{
				adminForm^ adminform = gcnew adminForm;
				adminform->Show();
				loginForm::Hide();
				MessageBox::Show("�� ������ �� ��̲�", "������� ����",
					MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			else
			{
				MessageBox::Show("������������� ���� �����������", "�������",
					MessageBoxButtons::OK, MessageBoxIcon::Error);
			}

		}
		else
		{
			MessageBox::Show("������������ ���� ��� ������", "�������",
				MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

		// �������� ����������
		sqlConn->Close();
	}
	catch (Exception^ ex)
	{
		MessageBox::Show("������� ���������� �� ���� �����", "�������",
			MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

}






