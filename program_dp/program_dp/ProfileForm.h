#pragma once

#include "masterForm.h"
#include "adminForm.h"


namespace programdp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Сводка для ProfileForm
	/// </summary>
	public ref class ProfileForm : public System::Windows::Forms::Form
	{
	public:
		ProfileForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~ProfileForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ tbposition;
	protected:

	protected:
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ tbadress;
	private: System::Windows::Forms::TextBox^ tbnumberphone;
	private: System::Windows::Forms::TextBox^ tbipn;
	private: System::Windows::Forms::TextBox^ tbsurname;
	private: System::Windows::Forms::TextBox^ tbname;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ProfileForm::typeid));
			this->tbposition = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->tbadress = (gcnew System::Windows::Forms::TextBox());
			this->tbnumberphone = (gcnew System::Windows::Forms::TextBox());
			this->tbipn = (gcnew System::Windows::Forms::TextBox());
			this->tbsurname = (gcnew System::Windows::Forms::TextBox());
			this->tbname = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// tbposition
			// 
			this->tbposition->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tbposition->Location = System::Drawing::Point(194, 294);
			this->tbposition->Name = L"tbposition";
			this->tbposition->Size = System::Drawing::Size(166, 26);
			this->tbposition->TabIndex = 66;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CalendarFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->dateTimePicker1->Location = System::Drawing::Point(194, 139);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(166, 26);
			this->dateTimePicker1->TabIndex = 65;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(30, 294);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(73, 20);
			this->label8->TabIndex = 62;
			this->label8->Text = L"Посада";
			// 
			// tbadress
			// 
			this->tbadress->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tbadress->Location = System::Drawing::Point(194, 252);
			this->tbadress->Name = L"tbadress";
			this->tbadress->Size = System::Drawing::Size(166, 26);
			this->tbadress->TabIndex = 60;
			// 
			// tbnumberphone
			// 
			this->tbnumberphone->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tbnumberphone->Location = System::Drawing::Point(194, 213);
			this->tbnumberphone->Name = L"tbnumberphone";
			this->tbnumberphone->Size = System::Drawing::Size(166, 26);
			this->tbnumberphone->TabIndex = 59;
			// 
			// tbipn
			// 
			this->tbipn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tbipn->Location = System::Drawing::Point(194, 173);
			this->tbipn->Name = L"tbipn";
			this->tbipn->Size = System::Drawing::Size(166, 26);
			this->tbipn->TabIndex = 58;
			// 
			// tbsurname
			// 
			this->tbsurname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tbsurname->Location = System::Drawing::Point(194, 102);
			this->tbsurname->Name = L"tbsurname";
			this->tbsurname->Size = System::Drawing::Size(166, 26);
			this->tbsurname->TabIndex = 57;
			// 
			// tbname
			// 
			this->tbname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tbname->Location = System::Drawing::Point(194, 69);
			this->tbname->Name = L"tbname";
			this->tbname->Size = System::Drawing::Size(166, 26);
			this->tbname->TabIndex = 56;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(29, 252);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(72, 20);
			this->label6->TabIndex = 55;
			this->label6->Text = L"Адреса";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(29, 216);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(156, 20);
			this->label5->TabIndex = 54;
			this->label5->Text = L"Номер телофона";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(29, 176);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(41, 20);
			this->label4->TabIndex = 53;
			this->label4->Text = L"ІПН";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(29, 139);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(161, 20);
			this->label3->TabIndex = 52;
			this->label3->Text = L"Дата народження";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(29, 105);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(89, 20);
			this->label2->TabIndex = 51;
			this->label2->Text = L"Прізвище";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(29, 72);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(41, 20);
			this->label1->TabIndex = 50;
			this->label1->Text = L"Ім\'я";
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->linkLabel1->Location = System::Drawing::Point(190, 347);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(176, 20);
			this->linkLabel1->TabIndex = 67;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Змінити Логін/Пароль";
			// 
			// pictureBox2
			// 
			this->pictureBox2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(-4, 358);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(52, 52);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 68;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &ProfileForm::pictureBox2_Click);
			// 
			// ProfileForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(149)));
			this->ClientSize = System::Drawing::Size(384, 403);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->tbposition);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->tbadress);
			this->Controls->Add(this->tbnumberphone);
			this->Controls->Add(this->tbipn);
			this->Controls->Add(this->tbsurname);
			this->Controls->Add(this->tbname);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"ProfileForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ProfileForm";
			this->Load += gcnew System::EventHandler(this, &ProfileForm::ProfileForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	int role = roleStorage::roleuser;
	int userid = roleStorage::usersid;
	private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (role == 1)
		{
			masterForm^ masterform = gcnew masterForm;
			masterform->Show();
			this->Close();
		}
		else if (role == 2)
		{
			adminForm^ adminform = gcnew adminForm;
			adminform->Show();
			this->Close();
		}
	}
private: System::Void ProfileForm_Load(System::Object^ sender, System::EventArgs^ e) {
	try {
		// Рядок підключення до бази даних
		String^ connString = "Data Source=DESKTOP-4P29GTL\\SQLEXPRESS;Initial Catalog=authent;Integrated Security=True";

		// SQL-запит для отримання даних користувача з таблиці Users
		String^ sqlQuery = "SELECT FirstName, LastName, DateBirth, IPN, NumberPH, Adress, Position FROM Users WHERE IdUser = @IdUser;";

		// Створення об'єкта підключення
		SqlConnection^ sqlConn = gcnew SqlConnection(connString);

		// Відкриття підключення
		sqlConn->Open();

		// Створення об'єкта команди SQL з параметрами
		SqlCommand^ command = gcnew SqlCommand(sqlQuery, sqlConn);
		command->Parameters->AddWithValue("@IdUser", userid);

		// Виконання SQL-запиту та отримання даних
		SqlDataReader^ reader = command->ExecuteReader();

		// Якщо є дані, заповнюємо поля на формі
		if (reader->Read()) {
			tbname->Text = reader["FirstName"]->ToString();
			tbsurname->Text = reader["LastName"]->ToString();
			dateTimePicker1->Value = Convert::ToDateTime(reader["DateBirth"]);
			tbipn->Text = reader["IPN"]->ToString();
			tbnumberphone->Text = reader["NumberPH"]->ToString();
			tbadress->Text = reader["Adress"]->ToString();
			tbposition->Text = reader["Position"]->ToString();
		}

		// Закриття підключення
		sqlConn->Close();
	}
	catch (Exception^ ex) {
		// Обробка помилок
		MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

}
};
}
