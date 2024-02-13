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
	// Отримуємо дані з полів введення
	String^ loginuser = this->tblogin->Text;
	String^ passworduser = this->tbpassword->Text;

	// Перевіряємо, чи заповнені обидва поля
	if (loginuser->Length == 0 || passworduser->Length == 0)
	{
		MessageBox::Show("Будь ласка, введіть логін та пароль", "Помилка",
			MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	try
	{
		// Рядок підключення до бази даних
		String^ connString = "Data Source=DESKTOP-4P29GTL\\SQLEXPRESS;Initial Catalog=authent;Integrated Security=True";

		// Створення об'єкта підключення
		SqlConnection^ sqlConn = gcnew SqlConnection(connString);

		// Відкриття підключення
		sqlConn->Open();

		// SQL запит для перевірки логіна та пароля
		String^ sqlQuery = "SELECT * FROM Users WHERE UserLogin=@login AND UserPassword=@pwd;";

		// Створення команди SQL з параметрами
		SqlCommand^ command = gcnew SqlCommand(sqlQuery, sqlConn);
		command->Parameters->AddWithValue("@login", loginuser);
		command->Parameters->AddWithValue("@pwd", passworduser);

		// Виконання запиту та отримання результатів
		SqlDataReader^ reader = command->ExecuteReader();

		// Перевірка, чи є користувач з введеним логіном та паролем
		if (reader->Read())
		{
			roleStorage::roleuser = Convert::ToInt32(reader["Role"]);
			// Отримання ролі користувача
			int role = Convert::ToInt32(reader["Role"]);
			roleStorage::usersid = Convert::ToInt32(reader["IdUser"]);

			// Вибір відповідної форми в залежності від ролі
			if (role == 1)
			{
				masterForm^ masterform = gcnew masterForm;
				masterform->Show();
				loginForm::Hide();
				MessageBox::Show("Ви увійшли як користувач", "Успішний вхід",
					MessageBoxButtons::OK, MessageBoxIcon::Information);

			}
			else if (role == 2)
			{
				adminForm^ adminform = gcnew adminForm;
				adminform->Show();
				loginForm::Hide();
				MessageBox::Show("Ви увійшли як АДМІН", "Успішний вхід",
					MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			else
			{
				MessageBox::Show("Непідтримувана роль користувача", "Помилка",
					MessageBoxButtons::OK, MessageBoxIcon::Error);
			}

		}
		else
		{
			MessageBox::Show("Неправильний логін або пароль", "Помилка",
				MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

		// Закриття підключення
		sqlConn->Close();
	}
	catch (Exception^ ex)
	{
		MessageBox::Show("Помилка підключення до бази даних", "Помилка",
			MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

}






