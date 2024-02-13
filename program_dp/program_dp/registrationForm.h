#pragma once

#include "userinfoForm.h"
#include <string>


namespace programdp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Сводка для registrationForm
	/// </summary>
	public ref class registrationForm : public System::Windows::Forms::Form
	{
	public:
		registrationForm(void)
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
		~registrationForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btregistration;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ tbname;
	private: System::Windows::Forms::TextBox^ tbsurname;

	private: System::Windows::Forms::TextBox^ tbipn;
	private: System::Windows::Forms::TextBox^ tbnumberphone;
	private: System::Windows::Forms::TextBox^ tbadress;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::RadioButton^ rbwoman;
	private: System::Windows::Forms::RadioButton^ rbmen;
	private: System::Windows::Forms::ComboBox^ cbstatus;
	private: System::Windows::Forms::RadioButton^ rbno;
	private: System::Windows::Forms::RadioButton^ rbyes;
	private: System::Windows::Forms::RichTextBox^ richTextBoxcoment;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;


	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(registrationForm::typeid));
			this->btregistration = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tbname = (gcnew System::Windows::Forms::TextBox());
			this->tbsurname = (gcnew System::Windows::Forms::TextBox());
			this->tbipn = (gcnew System::Windows::Forms::TextBox());
			this->tbnumberphone = (gcnew System::Windows::Forms::TextBox());
			this->tbadress = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->rbwoman = (gcnew System::Windows::Forms::RadioButton());
			this->rbmen = (gcnew System::Windows::Forms::RadioButton());
			this->cbstatus = (gcnew System::Windows::Forms::ComboBox());
			this->rbno = (gcnew System::Windows::Forms::RadioButton());
			this->rbyes = (gcnew System::Windows::Forms::RadioButton());
			this->richTextBoxcoment = (gcnew System::Windows::Forms::RichTextBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// btregistration
			// 
			this->btregistration->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btregistration->Location = System::Drawing::Point(91, 519);
			this->btregistration->Name = L"btregistration";
			this->btregistration->Size = System::Drawing::Size(180, 34);
			this->btregistration->TabIndex = 0;
			this->btregistration->Text = L"Зареєструвати";
			this->btregistration->UseVisualStyleBackColor = true;
			this->btregistration->Click += gcnew System::EventHandler(this, &registrationForm::btregistration_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(41, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Ім\'я";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(12, 58);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(89, 20);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Прізвище";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(12, 92);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(161, 20);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Дата народження";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(12, 129);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(41, 20);
			this->label4->TabIndex = 4;
			this->label4->Text = L"ІПН";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(12, 169);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(156, 20);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Номер телофона";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(12, 205);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(72, 20);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Адреса";
			// 
			// tbname
			// 
			this->tbname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tbname->Location = System::Drawing::Point(177, 22);
			this->tbname->Name = L"tbname";
			this->tbname->Size = System::Drawing::Size(166, 26);
			this->tbname->TabIndex = 7;
			// 
			// tbsurname
			// 
			this->tbsurname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tbsurname->Location = System::Drawing::Point(177, 55);
			this->tbsurname->Name = L"tbsurname";
			this->tbsurname->Size = System::Drawing::Size(166, 26);
			this->tbsurname->TabIndex = 8;
			// 
			// tbipn
			// 
			this->tbipn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tbipn->Location = System::Drawing::Point(177, 126);
			this->tbipn->Name = L"tbipn";
			this->tbipn->Size = System::Drawing::Size(166, 26);
			this->tbipn->TabIndex = 10;
			// 
			// tbnumberphone
			// 
			this->tbnumberphone->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tbnumberphone->Location = System::Drawing::Point(177, 166);
			this->tbnumberphone->Name = L"tbnumberphone";
			this->tbnumberphone->Size = System::Drawing::Size(166, 26);
			this->tbnumberphone->TabIndex = 11;
			// 
			// tbadress
			// 
			this->tbadress->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tbadress->Location = System::Drawing::Point(177, 205);
			this->tbadress->Name = L"tbadress";
			this->tbadress->Size = System::Drawing::Size(166, 26);
			this->tbadress->TabIndex = 12;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(13, 250);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(61, 20);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Стать";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(12, 287);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(165, 20);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Сатус проживання";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(13, 334);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(115, 20);
			this->label9->TabIndex = 15;
			this->label9->Text = L"Інвалідність";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(13, 375);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(92, 20);
			this->label10->TabIndex = 16;
			this->label10->Text = L"Коментар";
			// 
			// rbwoman
			// 
			this->rbwoman->AutoSize = true;
			this->rbwoman->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->rbwoman->Location = System::Drawing::Point(12, 0);
			this->rbwoman->Name = L"rbwoman";
			this->rbwoman->Size = System::Drawing::Size(69, 24);
			this->rbwoman->TabIndex = 19;
			this->rbwoman->TabStop = true;
			this->rbwoman->Text = L"Жінка";
			this->rbwoman->UseVisualStyleBackColor = true;
			// 
			// rbmen
			// 
			this->rbmen->AutoSize = true;
			this->rbmen->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->rbmen->Location = System::Drawing::Point(95, 0);
			this->rbmen->Name = L"rbmen";
			this->rbmen->Size = System::Drawing::Size(87, 24);
			this->rbmen->TabIndex = 20;
			this->rbmen->TabStop = true;
			this->rbmen->Text = L"Чоловік";
			this->rbmen->UseVisualStyleBackColor = true;
			// 
			// cbstatus
			// 
			this->cbstatus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->cbstatus->FormattingEnabled = true;
			this->cbstatus->Location = System::Drawing::Point(177, 287);
			this->cbstatus->Name = L"cbstatus";
			this->cbstatus->Size = System::Drawing::Size(166, 28);
			this->cbstatus->TabIndex = 21;
			this->cbstatus->SelectedIndexChanged += gcnew System::EventHandler(this, &registrationForm::cbstatus_SelectedIndexChanged);
			// 
			// rbno
			// 
			this->rbno->AutoSize = true;
			this->rbno->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->rbno->Location = System::Drawing::Point(123, 11);
			this->rbno->Name = L"rbno";
			this->rbno->Size = System::Drawing::Size(42, 24);
			this->rbno->TabIndex = 23;
			this->rbno->TabStop = true;
			this->rbno->Text = L"Ні";
			this->rbno->UseVisualStyleBackColor = true;
			// 
			// rbyes
			// 
			this->rbyes->AutoSize = true;
			this->rbyes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->rbyes->Location = System::Drawing::Point(17, 9);
			this->rbyes->Name = L"rbyes";
			this->rbyes->Size = System::Drawing::Size(53, 24);
			this->rbyes->TabIndex = 22;
			this->rbyes->TabStop = true;
			this->rbyes->Text = L"Так";
			this->rbyes->UseVisualStyleBackColor = true;
			// 
			// richTextBoxcoment
			// 
			this->richTextBoxcoment->Location = System::Drawing::Point(121, 375);
			this->richTextBoxcoment->Name = L"richTextBoxcoment";
			this->richTextBoxcoment->Size = System::Drawing::Size(222, 116);
			this->richTextBoxcoment->TabIndex = 24;
			this->richTextBoxcoment->Text = L"";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CalendarFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->dateTimePicker1->Location = System::Drawing::Point(177, 92);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(166, 26);
			this->dateTimePicker1->TabIndex = 25;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(1, 519);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(52, 52);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 53;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &registrationForm::pictureBox2_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->rbno);
			this->groupBox1->Controls->Add(this->rbyes);
			this->groupBox1->Location = System::Drawing::Point(166, 321);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(177, 35);
			this->groupBox1->TabIndex = 54;
			this->groupBox1->TabStop = false;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->rbmen);
			this->groupBox2->Controls->Add(this->rbwoman);
			this->groupBox2->Location = System::Drawing::Point(155, 237);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(188, 33);
			this->groupBox2->TabIndex = 55;
			this->groupBox2->TabStop = false;
			// 
			// registrationForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(149)));
			this->ClientSize = System::Drawing::Size(359, 568);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->richTextBoxcoment);
			this->Controls->Add(this->cbstatus);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
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
			this->Controls->Add(this->btregistration);
			this->MaximizeBox = false;
			this->Name = L"registrationForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Реєстрація";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &registrationForm::registrationForm_FormClosed);
			this->Load += gcnew System::EventHandler(this, &registrationForm::registrationForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		void AddDataToDatabase(String^ name, String^ surname, DateTime dateTime, String^ ipn, String^ phoneNumber, String^ address, String^ gender, String^ status, String^ hasYes, String^ comment) {
			try {
				// Рядок підключення до бази даних
				String^ connString = "Data Source=DESKTOP-4P29GTL\\SQLEXPRESS;Initial Catalog=authent;Integrated Security=True";

				// SQL-запит для вставки даних в таблицю People
				String^ sqlQuery = "INSERT INTO People (FirstName, LastName, DateBirth, IPN, NumberPhone, Adress, GenderPeople, ResidenceStatus, Invalidity, Comment) VALUES (@Name, @Surname, @BirthDate, @IPN, @PhoneNumber, @Address, @Gender, @Status, @HasYes, @Comment);";

				// Створення об'єкта підключення
				SqlConnection^ sqlConn = gcnew SqlConnection(connString);

				// Відкриття підключення
				sqlConn->Open();

				// Створення об'єкта команди SQL з параметрами
				SqlCommand^ command = gcnew SqlCommand(sqlQuery, sqlConn);
				command->Parameters->AddWithValue("@Name", name);
				command->Parameters->AddWithValue("@Surname", surname);
				command->Parameters->AddWithValue("@BirthDate", dateTime);
				command->Parameters->AddWithValue("@IPN", ipn);
				command->Parameters->AddWithValue("@PhoneNumber", phoneNumber);
				command->Parameters->AddWithValue("@Address", address);
				command->Parameters->AddWithValue("@Gender", gender);
				command->Parameters->AddWithValue("@Status", status);
				command->Parameters->AddWithValue("@HasYes", hasYes);
				command->Parameters->AddWithValue("@Comment", comment);

				// Виконання SQL-запиту
				command->ExecuteNonQuery();

				// Закриття підключення
				sqlConn->Close();
			}
			catch (Exception^ ex) {
				// Обробка помилок
				MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}

String^ statusId;

	private: System::Void ClearFields() {
		// Очищення текстових полів
		tbname->Clear();
		tbsurname->Clear();
		tbipn->Clear();
		tbnumberphone->Clear();
		tbadress->Clear();
		richTextBoxcoment->Clear();

		// Скидання значень інших елементів
		dateTimePicker1->Value = DateTime::Now; // Скидаємо значення дати на поточну
		rbwoman->Checked = false;
		rbmen->Checked = false;
		rbyes->Checked = false;
		rbno->Checked = false;
		cbstatus->SelectedIndex = -1;
		statusId = "";
	}

private: System::Void registrationForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {	
	}
	private: System::Void btregistration_Click(System::Object^ sender, System::EventArgs^ e) {
		// Перевірка коректності введення даних
		if (!ValidateInput()) {
			return; // Вихід з функції, якщо дані некоректні
		}
		
		// Отримання даних з полів вашої форми
		String^ name = tbname->Text;
		String^ surname = tbsurname->Text;
		DateTime birthDate = dateTimePicker1->Value;
		String^ ipn = tbipn->Text;
		String^ phoneNumber = tbnumberphone->Text;
		String^ address = tbadress->Text;
		String^ gender;
		if (rbwoman->Checked) {
			gender = "1"; // 1 - для жінки
		}
		else {
			gender = "2"; // 2 - для чоловіка
		}
		String^ status = statusId;
		String^ hasYes;
		if (rbyes->Checked) {
			hasYes = "1"; // 1 - так
		}
		else {
			hasYes = "2"; // 2 - ні
		}
		String^ comment = richTextBoxcoment->Text;

		// Додавання даних до бази даних
		AddDataToDatabase(name, surname, birthDate, ipn, phoneNumber, address, gender, status, hasYes, comment);

		// Повідомлення користувачу про успішне збереження
		MessageBox::Show("Дані збережено", "Успішно",
			MessageBoxButtons::OK, MessageBoxIcon::Information);
		ClearFields();
	}

		   void FillResidenceComboBox(ComboBox^ comboBox) {
			   try {
				   // Рядок підключення до бази даних
				   String^ connString = "Data Source=DESKTOP-4P29GTL\\SQLEXPRESS;Initial Catalog=authent;Integrated Security=True";

				   // SQL-запит для отримання даних з таблиці ResidenceSt
				   String^ sqlQuery = "SELECT * FROM ResidenceSt;";

				   // Створення об'єкта підключення
				   SqlConnection^ sqlConn = gcnew SqlConnection(connString);

				   // Відкриття підключення
				   sqlConn->Open();

				   // Створення об'єкта команди SQL з параметрами
				   SqlCommand^ command = gcnew SqlCommand(sqlQuery, sqlConn);

				   // Виконання SQL-запиту та отримання даних
				   SqlDataReader^ reader = command->ExecuteReader();

				   // Додавання отриманих даних до ComboBox
				   while (reader->Read()) {
					   comboBox->Items->Add(reader["NameStatus"]->ToString()); // Перевірте, яке саме поле містить статус
				   }

				   // Закриття підключення
				   sqlConn->Close();
			   }
			   catch (Exception^ ex) {
				   // Обробка помилок
				   MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			   }
		   }

	private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void registrationForm_Load(System::Object^ sender, System::EventArgs^ e) {
	FillResidenceComboBox(cbstatus);
}

	private: System::Void cbstatus_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		ComboBox^ comboBox = dynamic_cast<ComboBox^>(sender); // Отримуємо посилання на ComboBox
		if (comboBox != nullptr && comboBox->SelectedItem != nullptr) {
			// Отримуємо обране значення ComboBox і зберігаємо його в змінну statusId
			statusId = GetStatusIdFromDatabase(comboBox->SelectedItem->ToString());
		}
	}
		   String^ GetStatusIdFromDatabase(String^ statusName) {
			   String^ statusId;
			   try {
				   // Рядок підключення до бази даних
				   String^ connString = "Data Source=DESKTOP-4P29GTL\\SQLEXPRESS;Initial Catalog=authent;Integrated Security=True";

				   // SQL-запит для отримання statusId за назвою статусу з таблиці ResidenceSt
				   String^ sqlQuery = "SELECT IdStatus FROM ResidenceSt WHERE NameStatus = @NameStatus;";

				   // Створення об'єкта підключення
				   SqlConnection^ sqlConn = gcnew SqlConnection(connString);

				   // Відкриття підключення
				   sqlConn->Open();

				   // Створення об'єкта команди SQL з параметрами
				   SqlCommand^ command = gcnew SqlCommand(sqlQuery, sqlConn);
				   command->Parameters->AddWithValue("@NameStatus", statusName);

				   // Виконання SQL-запиту та отримання даних
				   Object^ result = command->ExecuteScalar();
				   if (result != nullptr) {
					   statusId = result->ToString(); // Конвертуємо результат в рядок
				   }

				   // Закриття підключення
				   sqlConn->Close();
			   }
			   catch (Exception^ ex) {
				   // Обробка помилок
				   MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			   }
			   return statusId;
		   }
private: bool ValidateInput() {
	// Перевірка на коректність введення даних
	if (String::IsNullOrEmpty(tbname->Text)) {
		MessageBox::Show("Введіть ім'я", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return false;
	}

	if (String::IsNullOrEmpty(tbsurname->Text)) {
		MessageBox::Show("Введіть прізвище", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return false;
	}

	if (dateTimePicker1->Value == DateTime::MinValue) {
		MessageBox::Show("Виберіть дату", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return false;
	}

	if (tbipn->Text->Length != 10) {
		MessageBox::Show("IPN повинен містити 10 цифр", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return false;
	}

	if (tbnumberphone->Text->Length != 13) {
		MessageBox::Show("Номер телефону повинен містити 13 символів", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return false;
	}

	if (String::IsNullOrEmpty(tbadress->Text)) {
		MessageBox::Show("Введіть адресу проживання", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return false;
	}

	if (!rbwoman->Checked && !rbmen->Checked) {
		MessageBox::Show("Виберіть стать", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return false;
	}

	if (cbstatus->SelectedIndex == -1) {
		MessageBox::Show("Виберіть статус проживання", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return false;
	}

	if (!rbyes->Checked && !rbno->Checked) {
		MessageBox::Show("Виберіть статус інвалідності", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return false;
	}

	return true;
}



};
}
