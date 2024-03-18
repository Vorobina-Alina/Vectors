#pragma once
#include <vector>
#include <cmath>
#include <fstream>

namespace Vectors {

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
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::DarkCyan;
			this->button1->Location = System::Drawing::Point(9, 120);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(116, 36);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Длина вектора а";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::White;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::DarkCyan;
			this->button2->Location = System::Drawing::Point(9, 161);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(116, 36);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Длина вектора b";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::White;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::DarkCyan;
			this->button3->Location = System::Drawing::Point(288, 120);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(116, 36);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Умножение вектора а на число";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::White;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::DarkCyan;
			this->button4->Location = System::Drawing::Point(288, 161);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(116, 36);
			this->button4->TabIndex = 3;
			this->button4->Text = L"скалярное произведение а и b";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::White;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::DarkCyan;
			this->button5->Location = System::Drawing::Point(131, 120);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(151, 36);
			this->button5->TabIndex = 4;
			this->button5->Text = L"сложение a и b";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::White;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::DarkCyan;
			this->button6->Location = System::Drawing::Point(131, 162);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(151, 36);
			this->button6->TabIndex = 5;
			this->button6->Text = L"вычитание а и b";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::White;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::DarkCyan;
			this->button7->Location = System::Drawing::Point(410, 120);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(151, 35);
			this->button7->TabIndex = 6;
			this->button7->Text = L"векторное произведение ";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::White;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::Color::DarkCyan;
			this->button8->Location = System::Drawing::Point(410, 163);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(151, 35);
			this->button8->TabIndex = 7;
			this->button8->Text = L"смешанное произведение";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::DarkCyan;
			this->label1->Location = System::Drawing::Point(12, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(20, 19);
			this->label1->TabIndex = 8;
			this->label1->Text = L"а:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::DarkCyan;
			this->label2->Location = System::Drawing::Point(12, 55);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(21, 19);
			this->label2->TabIndex = 9;
			this->label2->Text = L"b:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::DarkCyan;
			this->label3->Location = System::Drawing::Point(12, 82);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(19, 19);
			this->label3->TabIndex = 10;
			this->label3->Text = L"c:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(34, 31);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(29, 20);
			this->textBox1->TabIndex = 11;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(69, 31);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(31, 20);
			this->textBox2->TabIndex = 12;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(106, 31);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(31, 20);
			this->textBox3->TabIndex = 13;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(34, 55);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(29, 20);
			this->textBox4->TabIndex = 14;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(68, 55);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(32, 20);
			this->textBox5->TabIndex = 15;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(106, 55);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(31, 20);
			this->textBox6->TabIndex = 16;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(34, 81);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(29, 20);
			this->textBox7->TabIndex = 17;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(68, 81);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(32, 20);
			this->textBox8->TabIndex = 18;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(106, 81);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(31, 20);
			this->textBox9->TabIndex = 19;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::DarkCyan;
			this->label4->Location = System::Drawing::Point(39, 12);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(18, 19);
			this->label4->TabIndex = 20;
			this->label4->Text = L"X";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::DarkCyan;
			this->label5->Location = System::Drawing::Point(76, 12);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(17, 19);
			this->label5->TabIndex = 21;
			this->label5->Text = L"Y";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::DarkCyan;
			this->label6->Location = System::Drawing::Point(112, 12);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(18, 19);
			this->label6->TabIndex = 22;
			this->label6->Text = L"Z";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::DarkCyan;
			this->label7->Location = System::Drawing::Point(251, 82);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(84, 19);
			this->label7->TabIndex = 23;
			this->label7->Text = L"Результат:";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(341, 82);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(87, 20);
			this->textBox10->TabIndex = 24;
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::White;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::Color::DarkCyan;
			this->button9->Location = System::Drawing::Point(442, 82);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(119, 22);
			this->button9->TabIndex = 25;
			this->button9->Text = L"вывести в файл";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::DarkCyan;
			this->label8->Location = System::Drawing::Point(143, 82);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(51, 16);
			this->label8->TabIndex = 26;
			this->label8->Text = L"Число:";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(200, 81);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(38, 20);
			this->textBox11->TabIndex = 27;
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Location = System::Drawing::Point(471, 201);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(87, 13);
			this->linkLabel1->TabIndex = 28;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Тех. поддержка";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::linkLabel1_LinkClicked);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(570, 218);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"Калькулятор векторов";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	int number;
	if ((!Int32::TryParse(textBox1->Text, number)) || (!Int32::TryParse(textBox2->Text, number)) || (!Int32::TryParse(textBox3->Text, number))) {
		MessageBox::Show("Ошибка: введено не целочисленное число!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else {
		int xa = System::Convert::ToInt32(textBox1->Text);
		int ya = System::Convert::ToInt32(textBox2->Text);
		int za = System::Convert::ToInt32(textBox3->Text);
		double a = abs(sqrt(pow(xa, 2) + pow(ya, 2) + pow(za, 2)));
		textBox10->Text = System::Convert::ToString(a);
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	int number;
	if ((!Int32::TryParse(textBox4->Text, number)) || (!Int32::TryParse(textBox5->Text, number)) || (!Int32::TryParse(textBox6->Text, number))) {
		MessageBox::Show("Ошибка: введено не целочисленное число!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else {
		int xb = System::Convert::ToInt32(textBox4->Text);
		int yb = System::Convert::ToInt32(textBox5->Text);
		int zb = System::Convert::ToInt32(textBox6->Text);
		double b = abs(sqrt(pow(xb, 2) + pow(yb, 2) + pow(zb, 2)));
		textBox10->Text = System::Convert::ToString(b);
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	int number;
	if ((!Int32::TryParse(textBox1->Text, number)) || (!Int32::TryParse(textBox2->Text, number)) || (!Int32::TryParse(textBox3->Text, number)) || (!Int32::TryParse(textBox11->Text, number))) {
		MessageBox::Show("Ошибка: введено не целочисленное число!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else {
		int xa = System::Convert::ToInt32(textBox1->Text);
		int ya = System::Convert::ToInt32(textBox2->Text);
		int za = System::Convert::ToInt32(textBox3->Text);
		int n = System::Convert::ToInt32(textBox11->Text);
		textBox10->Text = System::Convert::ToString(xa * n) + ";" + System::Convert::ToString(ya * n) + ";" + System::Convert::ToString(za * n);
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	int number;
	if ((!Int32::TryParse(textBox1->Text, number)) || (!Int32::TryParse(textBox2->Text, number)) || (!Int32::TryParse(textBox3->Text, number)) || (!Int32::TryParse(textBox4->Text, number)) || (!Int32::TryParse(textBox5->Text, number)) || (!Int32::TryParse(textBox6->Text, number))) {
		MessageBox::Show("Ошибка: введено не целочисленное число!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else {
		int xa = System::Convert::ToInt32(textBox1->Text);
		int ya = System::Convert::ToInt32(textBox2->Text);
		int za = System::Convert::ToInt32(textBox3->Text);
		int xb = System::Convert::ToInt32(textBox4->Text);
		int yb = System::Convert::ToInt32(textBox5->Text);
		int zb = System::Convert::ToInt32(textBox6->Text);
		textBox10->Text = System::Convert::ToString(xa * xb) + ";" + System::Convert::ToString(ya * yb) + ";" + System::Convert::ToString(za * zb);
	}
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	int number;
	if ((!Int32::TryParse(textBox1->Text, number)) || (!Int32::TryParse(textBox2->Text, number)) || (!Int32::TryParse(textBox3->Text, number)) || (!Int32::TryParse(textBox4->Text, number)) || (!Int32::TryParse(textBox5->Text, number)) || (!Int32::TryParse(textBox6->Text, number))) {
		MessageBox::Show("Ошибка: введено не целочисленное число!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else {
		int xa = System::Convert::ToInt32(textBox1->Text);
		int ya = System::Convert::ToInt32(textBox2->Text);
		int za = System::Convert::ToInt32(textBox3->Text);
		int xb = System::Convert::ToInt32(textBox4->Text);
		int yb = System::Convert::ToInt32(textBox5->Text);
		int zb = System::Convert::ToInt32(textBox6->Text);
		textBox10->Text = System::Convert::ToString(xa + xb) + ";" + System::Convert::ToString(ya + yb) + ";" + System::Convert::ToString(za + zb);
	}
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	int number;
	if ((!Int32::TryParse(textBox1->Text, number)) || (!Int32::TryParse(textBox2->Text, number)) || (!Int32::TryParse(textBox3->Text, number)) || (!Int32::TryParse(textBox4->Text, number)) || (!Int32::TryParse(textBox5->Text, number)) || (!Int32::TryParse(textBox6->Text, number))) {
		MessageBox::Show("Ошибка: введено не целочисленное число!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else {
		int xa = System::Convert::ToInt32(textBox1->Text);
		int ya = System::Convert::ToInt32(textBox2->Text);
		int za = System::Convert::ToInt32(textBox3->Text);
		int xb = System::Convert::ToInt32(textBox4->Text);
		int yb = System::Convert::ToInt32(textBox5->Text);
		int zb = System::Convert::ToInt32(textBox6->Text);
		textBox10->Text = System::Convert::ToString(xa - xb) + ";" + System::Convert::ToString(ya - yb) + ";" + System::Convert::ToString(za - zb);
	}
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	int number;
	if ((!Int32::TryParse(textBox1->Text, number)) || (!Int32::TryParse(textBox2->Text, number)) || (!Int32::TryParse(textBox3->Text, number)) || (!Int32::TryParse(textBox4->Text, number)) || (!Int32::TryParse(textBox5->Text, number)) || (!Int32::TryParse(textBox6->Text, number))) {
		MessageBox::Show("Ошибка: введено не целочисленное число!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else {
		int xa = System::Convert::ToInt32(textBox1->Text);
		int ya = System::Convert::ToInt32(textBox2->Text);
		int za = System::Convert::ToInt32(textBox3->Text);
		int xb = System::Convert::ToInt32(textBox4->Text);
		int yb = System::Convert::ToInt32(textBox5->Text);
		int zb = System::Convert::ToInt32(textBox6->Text);
		textBox10->Text = System::Convert::ToString(ya * zb - yb * za) + "*i - (" + System::Convert::ToString(xa * zb - xb * za) + ")*j + (" + System::Convert::ToString(xa * yb - ya * xb) + ")*k";
	}
}

private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	int number;
	if ((!Int32::TryParse(textBox1->Text, number)) || (!Int32::TryParse(textBox2->Text, number)) || (!Int32::TryParse(textBox3->Text, number)) || (!Int32::TryParse(textBox4->Text, number)) || (!Int32::TryParse(textBox5->Text, number)) || (!Int32::TryParse(textBox6->Text, number)) || (!Int32::TryParse(textBox7->Text, number)) || (!Int32::TryParse(textBox8->Text, number)) || (!Int32::TryParse(textBox9->Text, number))) {
		MessageBox::Show("Ошибка: введено не целочисленное число!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else {
		int xa = System::Convert::ToInt32(textBox1->Text);
		int ya = System::Convert::ToInt32(textBox2->Text);
		int za = System::Convert::ToInt32(textBox3->Text);
		int xb = System::Convert::ToInt32(textBox4->Text);
		int yb = System::Convert::ToInt32(textBox5->Text);
		int zb = System::Convert::ToInt32(textBox6->Text);
		int xc = System::Convert::ToInt32(textBox7->Text);
		int yc = System::Convert::ToInt32(textBox8->Text);
		int zc = System::Convert::ToInt32(textBox9->Text);
		textBox10->Text = System::Convert::ToString(xc * (ya * zb - yb * za) - yc * (xa * zb - xb * za) + zc * (xa * yb - ya * xb));
	}
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	System::IO::StreamWriter^ file = gcnew System::IO::StreamWriter("c:\\file.txt"); // Открытие файла для записи
	if (file == nullptr) { // Проверка удалось ли открыть файл
		MessageBox::Show(this, "Ошибка открытия файла!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else {
		String^ text = textBox10->Text;
		file->WriteLine(text); // Запись текста в файл с переносом строки
		file->Close(); // Закрытие файла
	}
}

private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	MessageBox::Show(this, "Калькулятор векторов предназначен для выполнения операций с векторами, такими как сложение и вычитание векторов, умножение вектора на число, скалярное, смешанное и векторное произведение и длина вектора a и b.\n1. Ввод векторов: \n - Пользователь может ввести один или несколько векторов (до трёх) для вычислений в соответствующие ячейки (a, b, c – векторы; x, y, z – координаты векторов).\n2. Ввод значений вектора: \n - Пользователь может ввести значения координат вектора по порядку в соответствии с ячейками x, y, z.\n3. Длина вектора a: \n - Калькулятор может вычислить длину вектора a исходя из его координат, суммируя квадрат значений координат и затем извлекая корень из полученного числа.\n4. Длина вектора b: \n - Калькулятор может вычислить длину вектора b исходя из его координат, суммируя квадрат значений координат и затем извлекая корень из полученного числа.\n5. Сложение a и b: \n - - Калькулятор может выполнить операцию сложение векторов a и b, складывая координаты данных векторов и записывая в результате полученный вектор на основе результатов сложения.\n6. Вычитание a и b: \n - Калькулятор может выполнить операцию вычитания векторов a и b, вычитая координаты данных векторов и записывая в результате полученный вектор на основе результатов вычитания.\n7. Умножение вектора a на число: \n – Калькулятор может выполнять операцию умножения вектора на число, для этого необходимо ввести координаты вектора a и записать в соответствующую ячейку число, после чего будет выполнено умножение каждых координат вектора на данное число и записан результат на основе полученных результатов вычислений.\n8. Скалярное произведение a и b: \n – Калькулятор может выполнять операцию по вычислению скалярного произведения векторов a и b. Для этого необходимо ввести координаты векторов a и b для вычисления результата по формуле.\n9. Векторное произведение: \n – Калькулятор может выполнять операцию по вычислению векторного произведения векторов. Для этого необходимо ввести координаты нужных векторов для вычисления результата по формуле.\n8. Смешанное произведение: \n – Калькулятор может выполнять операцию по вычислению смешанного произведения векторов. Для этого необходимо ввести координаты нужных векторов для вычисления результата по формуле. \n С помощью калькулятора векторов пользователь может быстро и удобно выполнять различные операции с векторами, что может быть полезно в образовательных и профессиональных целях.", "Help", MessageBoxButtons::OK);
}
};

}
