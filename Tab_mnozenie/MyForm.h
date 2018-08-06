#pragma once

namespace Tabmnozenie {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  buttonExit;
	protected:

	private: System::Windows::Forms::Label^  label1;

	private: System::Windows::Forms::TextBox^  mul1;
	private: System::Windows::Forms::TextBox^  mul2;







	private: System::Windows::Forms::TextBox^  grade;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  buttonReset;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  answer;
	private: System::Windows::Forms::Button^  buttonStart;
	private: System::Windows::Forms::TextBox^  correct;







	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->buttonExit = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->mul1 = (gcnew System::Windows::Forms::TextBox());
			this->mul2 = (gcnew System::Windows::Forms::TextBox());
			this->grade = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->buttonReset = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->answer = (gcnew System::Windows::Forms::TextBox());
			this->buttonStart = (gcnew System::Windows::Forms::Button());
			this->correct = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// buttonExit
			// 
			this->buttonExit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->buttonExit->ForeColor = System::Drawing::Color::Red;
			this->buttonExit->Location = System::Drawing::Point(527, 462);
			this->buttonExit->Name = L"buttonExit";
			this->buttonExit->Size = System::Drawing::Size(92, 44);
			this->buttonExit->TabIndex = 0;
			this->buttonExit->Text = L"Wyjœcie";
			this->buttonExit->UseVisualStyleBackColor = true;
			this->buttonExit->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(170, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(314, 31);
			this->label1->TabIndex = 1;
			this->label1->Text = L"TABLICZKA MNO¯ENIA";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// mul1
			// 
			this->mul1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->mul1->Location = System::Drawing::Point(143, 146);
			this->mul1->Multiline = true;
			this->mul1->Name = L"mul1";
			this->mul1->Size = System::Drawing::Size(59, 36);
			this->mul1->TabIndex = 4;
			this->mul1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->mul1->TextChanged += gcnew System::EventHandler(this, &MyForm::mul1_TextChanged);
			// 
			// mul2
			// 
			this->mul2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->mul2->Location = System::Drawing::Point(234, 146);
			this->mul2->Multiline = true;
			this->mul2->Name = L"mul2";
			this->mul2->Size = System::Drawing::Size(59, 36);
			this->mul2->TabIndex = 5;
			this->mul2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->mul2->TextChanged += gcnew System::EventHandler(this, &MyForm::mul2_TextChanged);
			// 
			// grade
			// 
			this->grade->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->grade->Location = System::Drawing::Point(344, 480);
			this->grade->Multiline = true;
			this->grade->Name = L"grade";
			this->grade->Size = System::Drawing::Size(59, 36);
			this->grade->TabIndex = 8;
			this->grade->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->grade->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(208, 153);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(20, 20);
			this->label2->TabIndex = 9;
			this->label2->Text = L"X";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click_1);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(313, 149);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(25, 26);
			this->label3->TabIndex = 10;
			this->label3->Text = L"=";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label4->Location = System::Drawing::Point(262, 480);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(76, 26);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Ocena";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// buttonReset
			// 
			this->buttonReset->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->buttonReset->Location = System::Drawing::Point(527, 388);
			this->buttonReset->Name = L"buttonReset";
			this->buttonReset->Size = System::Drawing::Size(91, 40);
			this->buttonReset->TabIndex = 12;
			this->buttonReset->Text = L"Reset";
			this->buttonReset->UseVisualStyleBackColor = true;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label5->Location = System::Drawing::Point(191, 234);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(136, 26);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Poprawne ->";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::correct_Click);
			// 
			// answer
			// 
			this->answer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->answer->Location = System::Drawing::Point(344, 146);
			this->answer->Multiline = true;
			this->answer->Name = L"answer";
			this->answer->Size = System::Drawing::Size(59, 36);
			this->answer->TabIndex = 16;
			this->answer->TextChanged += gcnew System::EventHandler(this, &MyForm::answer_TextChanged);
			// 
			// buttonStart
			// 
			this->buttonStart->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->buttonStart->ForeColor = System::Drawing::Color::DarkGreen;
			this->buttonStart->Location = System::Drawing::Point(35, 52);
			this->buttonStart->Name = L"buttonStart";
			this->buttonStart->Size = System::Drawing::Size(92, 40);
			this->buttonStart->TabIndex = 17;
			this->buttonStart->Text = L"Start";
			this->buttonStart->UseVisualStyleBackColor = true;
			// 
			// correct
			// 
			this->correct->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->correct->Location = System::Drawing::Point(344, 231);
			this->correct->Multiline = true;
			this->correct->Name = L"correct";
			this->correct->Size = System::Drawing::Size(59, 36);
			this->correct->TabIndex = 18;
			this->correct->TextChanged += gcnew System::EventHandler(this, &MyForm::correct_TextChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(655, 546);
			this->Controls->Add(this->correct);
			this->Controls->Add(this->buttonStart);
			this->Controls->Add(this->answer);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->buttonReset);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->grade);
			this->Controls->Add(this->mul2);
			this->Controls->Add(this->mul1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->buttonExit);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		MessageBox::Show("Do zobaczenia Przemek! :)");
		Close();
		
	}




private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox5_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void mul1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void mul2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void answer_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void correct_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}


//labele i inne 
private: System::Void label2_Click_1(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void correct_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void progressBar1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}

};
}
