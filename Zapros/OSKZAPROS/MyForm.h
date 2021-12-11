#pragma once
#include "Source.h"

namespace OSKZAPROS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;


	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;







	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox1;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::FolderBrowserDialog^ folderBrowserDialog1;
	private: System::ComponentModel::IContainer^ components;





	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox2 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBox1->Location = System::Drawing::Point(140, 12);
			this->textBox1->MaxLength = 50;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(636, 22);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBox2->Location = System::Drawing::Point(140, 52);
			this->textBox2->MaxLength = 50;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(636, 22);
			this->textBox2->TabIndex = 1;
			// 
			// textBox3
			// 
			this->textBox3->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBox3->Location = System::Drawing::Point(140, 94);
			this->textBox3->MaxLength = 50;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(636, 22);
			this->textBox3->TabIndex = 2;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Cursor = System::Windows::Forms::Cursors::Default;
			this->dateTimePicker1->Location = System::Drawing::Point(140, 294);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 22);
			this->dateTimePicker1->TabIndex = 10;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(70, 17);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Фамилия";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 138);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(111, 17);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Дата рождения";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 97);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(71, 17);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Отчество";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 55);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(35, 17);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Имя";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(250, 138);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(118, 17);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Место рождения";
			// 
			// textBox4
			// 
			this->textBox4->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBox4->Location = System::Drawing::Point(374, 133);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(402, 22);
			this->textBox4->TabIndex = 6;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(12, 177);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(108, 17);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Цель проверки";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->IntegralHeight = false;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"ПРИКАЗ 965", L"ОФОРМЛЕНИЕ ДОПУСКА", L"ВИХРЬ-АНТИТЕРРОР" });
			this->comboBox1->Location = System::Drawing::Point(140, 174);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(636, 24);
			this->comboBox1->TabIndex = 7;
			// 
			// textBox5
			// 
			this->textBox5->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBox5->Location = System::Drawing::Point(165, 218);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(210, 22);
			this->textBox5->TabIndex = 8;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(12, 221);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(147, 17);
			this->label7->TabIndex = 16;
			this->label7->Text = L"Инициатор проверки";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(407, 221);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(153, 17);
			this->label8->TabIndex = 18;
			this->label8->Text = L"Фамилия инициатора";
			// 
			// textBox6
			// 
			this->textBox6->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBox6->Location = System::Drawing::Point(566, 218);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(210, 22);
			this->textBox6->TabIndex = 9;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(92, 297);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(42, 17);
			this->label9->TabIndex = 20;
			this->label9->Text = L"Дата";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(506, 297);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(54, 17);
			this->label10->TabIndex = 21;
			this->label10->Text = L"Регион";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(469, 360);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(104, 29);
			this->button2->TabIndex = 12;
			this->button2->TabStop = false;
			this->button2->Text = L"Сохранить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(689, 360);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(87, 29);
			this->button3->TabIndex = 14;
			this->button3->TabStop = false;
			this->button3->Text = L"Выход";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->label11->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->label11->Location = System::Drawing::Point(0, 384);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(0, 17);
			this->label11->TabIndex = 26;
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// maskedTextBox1
			// 
			this->maskedTextBox1->Location = System::Drawing::Point(140, 135);
			this->maskedTextBox1->Mask = L"00/00/00";
			this->maskedTextBox1->Name = L"maskedTextBox1";
			this->maskedTextBox1->Size = System::Drawing::Size(100, 22);
			this->maskedTextBox1->TabIndex = 3;
			this->maskedTextBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->maskedTextBox1->ValidatingType = System::DateTime::typeid;
			// 
			// maskedTextBox2
			// 
			this->maskedTextBox2->Location = System::Drawing::Point(566, 296);
			this->maskedTextBox2->Mask = L"000";
			this->maskedTextBox2->Name = L"maskedTextBox2";
			this->maskedTextBox2->PromptChar = ' ';
			this->maskedTextBox2->Size = System::Drawing::Size(210, 22);
			this->maskedTextBox2->TabIndex = 11;
			this->maskedTextBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(579, 360);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(104, 29);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Очистить поля";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// folderBrowserDialog1
			// 
			this->folderBrowserDialog1->HelpRequest += gcnew System::EventHandler(this, &MyForm::folderBrowserDialog1_HelpRequest);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(788, 401);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->maskedTextBox2);
			this->Controls->Add(this->maskedTextBox1);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(806, 448);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(806, 448);
			this->Name = L"MyForm";
			this->Opacity = 0.95;
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Show;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ЗАПРОС НА СУДИМОСТЬ";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		
	}

private: System::Void contextMenuStrip1_Opening(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
	
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ LastName = textBox1->Text;
	String^ FirstName = textBox2->Text;
	String^ FatherName = textBox3->Text;
	String^ BirthDate = maskedTextBox1->Text;
	String^ WhereBorn = textBox4->Text;
	String^ Target = comboBox1->Text;
	String^ NameIniciator = textBox5->Text;
	String^ LastNameIniciator = textBox6->Text;
	String^ Reg1ion = maskedTextBox2->Text;
	String^ dataNow = dateTimePicker1->Text;
	if (LastName != "") {
		if (FirstName != "") {
			if (BirthDate != "  .  .") {
				if (Reg1ion != "000" && Reg1ion != "100" && Reg1ion != "") {
					if (folderBrowserDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
						String^ filepath = folderBrowserDialog1->SelectedPath;
						String^ Fill = "Фамилия: " + LastName + "\nИмя: " + FirstName + "\nОтчество: " + FatherName + "\nДата рождения: " + BirthDate + "\nМесто рождения: " + WhereBorn + "\nЦель проверки: " + Target + "\nИнициатор: " + NameIniciator + "\nФамилия инициатора: " + LastNameIniciator + "\nРегион: " + Reg1ion;
						String^ namefile = LastName + "_" + FirstName + "_" + dataNow;
						FileName(filepath + "/" + namefile, Fill);
						label11->Text = "Succes: файл " + namefile + " успешно cоздан";
					}
					
				}
				else {

					label11->Text = "Error: Неправильный регион!";
				}
			}
			else {
				label11->Text = "Error: Введите дату рождения!";
			}
		}
		else {
			label11->Text = "Error: Введите имя!";
		}
		
	}
	else {
		label11->Text = "Error: Введите фамилию!";
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = "";
	textBox2->Text = "";
	textBox3->Text = "";
	maskedTextBox1->Text = "";
	textBox4->Text = "";
	comboBox1->Text = "";
	textBox5->Text = "";
	textBox6->Text = "";
	maskedTextBox2->Text = "";
	label11->Text = "Succes: Очищено!";
}
private: System::Void folderBrowserDialog1_HelpRequest(System::Object^ sender, System::EventArgs^ e) {
}
};
}
