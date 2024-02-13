#pragma once

#include "regloginpassForm.h"
#include "infomasterForm.h"

namespace programdp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для regmasterForm
	/// </summary>
	public ref class regmasterForm : public System::Windows::Forms::Form
	{
	public:
		regmasterForm(void)
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
		~regmasterForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	protected:
	private: System::Windows::Forms::RichTextBox^ richTextBoxcoment;
	private: System::Windows::Forms::RadioButton^ rbmen;
	private: System::Windows::Forms::RadioButton^ rbwoman;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
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
	private: System::Windows::Forms::Button^ btregistration;
	private: System::Windows::Forms::TextBox^ textBox1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(regmasterForm::typeid));
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->richTextBoxcoment = (gcnew System::Windows::Forms::RichTextBox());
			this->rbmen = (gcnew System::Windows::Forms::RadioButton());
			this->rbwoman = (gcnew System::Windows::Forms::RadioButton());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
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
			this->btregistration = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CalendarFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->dateTimePicker1->Location = System::Drawing::Point(200, 77);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(166, 26);
			this->dateTimePicker1->TabIndex = 48;
			// 
			// richTextBoxcoment
			// 
			this->richTextBoxcoment->Location = System::Drawing::Point(144, 316);
			this->richTextBoxcoment->Name = L"richTextBoxcoment";
			this->richTextBoxcoment->Size = System::Drawing::Size(222, 116);
			this->richTextBoxcoment->TabIndex = 47;
			this->richTextBoxcoment->Text = L"";
			// 
			// rbmen
			// 
			this->rbmen->AutoSize = true;
			this->rbmen->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->rbmen->Location = System::Drawing::Point(279, 231);
			this->rbmen->Name = L"rbmen";
			this->rbmen->Size = System::Drawing::Size(87, 24);
			this->rbmen->TabIndex = 43;
			this->rbmen->TabStop = true;
			this->rbmen->Text = L"Чоловік";
			this->rbmen->UseVisualStyleBackColor = true;
			// 
			// rbwoman
			// 
			this->rbwoman->AutoSize = true;
			this->rbwoman->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->rbwoman->Location = System::Drawing::Point(200, 231);
			this->rbwoman->Name = L"rbwoman";
			this->rbwoman->Size = System::Drawing::Size(69, 24);
			this->rbwoman->TabIndex = 42;
			this->rbwoman->TabStop = true;
			this->rbwoman->Text = L"Жінка";
			this->rbwoman->UseVisualStyleBackColor = true;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(36, 316);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(92, 20);
			this->label10->TabIndex = 41;
			this->label10->Text = L"Коментар";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(36, 272);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(73, 20);
			this->label8->TabIndex = 39;
			this->label8->Text = L"Посада";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(36, 235);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(61, 20);
			this->label7->TabIndex = 38;
			this->label7->Text = L"Стать";
			// 
			// tbadress
			// 
			this->tbadress->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tbadress->Location = System::Drawing::Point(200, 190);
			this->tbadress->Name = L"tbadress";
			this->tbadress->Size = System::Drawing::Size(166, 26);
			this->tbadress->TabIndex = 37;
			// 
			// tbnumberphone
			// 
			this->tbnumberphone->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tbnumberphone->Location = System::Drawing::Point(200, 151);
			this->tbnumberphone->Name = L"tbnumberphone";
			this->tbnumberphone->Size = System::Drawing::Size(166, 26);
			this->tbnumberphone->TabIndex = 36;
			// 
			// tbipn
			// 
			this->tbipn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tbipn->Location = System::Drawing::Point(200, 111);
			this->tbipn->Name = L"tbipn";
			this->tbipn->Size = System::Drawing::Size(166, 26);
			this->tbipn->TabIndex = 35;
			// 
			// tbsurname
			// 
			this->tbsurname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tbsurname->Location = System::Drawing::Point(200, 40);
			this->tbsurname->Name = L"tbsurname";
			this->tbsurname->Size = System::Drawing::Size(166, 26);
			this->tbsurname->TabIndex = 34;
			// 
			// tbname
			// 
			this->tbname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tbname->Location = System::Drawing::Point(200, 7);
			this->tbname->Name = L"tbname";
			this->tbname->Size = System::Drawing::Size(166, 26);
			this->tbname->TabIndex = 33;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(35, 190);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(72, 20);
			this->label6->TabIndex = 32;
			this->label6->Text = L"Адреса";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(35, 154);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(156, 20);
			this->label5->TabIndex = 31;
			this->label5->Text = L"Номер телофона";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(35, 114);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(41, 20);
			this->label4->TabIndex = 30;
			this->label4->Text = L"ІПН";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(35, 77);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(161, 20);
			this->label3->TabIndex = 29;
			this->label3->Text = L"Дата народження";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(35, 43);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(89, 20);
			this->label2->TabIndex = 28;
			this->label2->Text = L"Прізвище";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(35, 10);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(41, 20);
			this->label1->TabIndex = 27;
			this->label1->Text = L"Ім\'я";
			// 
			// btregistration
			// 
			this->btregistration->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btregistration->Location = System::Drawing::Point(200, 441);
			this->btregistration->Name = L"btregistration";
			this->btregistration->Size = System::Drawing::Size(102, 34);
			this->btregistration->TabIndex = 26;
			this->btregistration->Text = L"Далі";
			this->btregistration->UseVisualStyleBackColor = true;
			this->btregistration->Click += gcnew System::EventHandler(this, &regmasterForm::btregistration_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(200, 272);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(166, 26);
			this->textBox1->TabIndex = 49;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(-7, 441);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(52, 52);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 53;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &regmasterForm::pictureBox2_Click);
			// 
			// regmasterForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(149)));
			this->ClientSize = System::Drawing::Size(393, 487);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->richTextBoxcoment);
			this->Controls->Add(this->rbmen);
			this->Controls->Add(this->rbwoman);
			this->Controls->Add(this->label10);
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
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"regmasterForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Додання працівника";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void btregistration_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e);

};
}
