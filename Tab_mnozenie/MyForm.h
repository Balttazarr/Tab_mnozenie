﻿#pragma once

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

	///timer
	public:
		static int Minutes = 1;
		static int Seconds = 59;
		String^ Min;
		String^ Sec;

	///start/reset
	public:
		bool startFLAG = 0;
		bool nextFLAG = 1;

    ///logika sprawdzania mnozenia
	public:
		int x, y;
		String^ xX;
	private: System::Windows::Forms::Button^  buttonCheck;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  nr_zadania;
	public:
		String ^ yY;
		void GenerateMul()
		{
			Random^ rd = gcnew Random;
			x = rd->Next(10)+2;
			y = rd->Next(10)+2;
			mul1->Text = Convert::ToString(x);
			mul2->Text = Convert::ToString(y);

		}
	public:
		int sum = 0; // punkty
		int gradeNext = 0;
		float GradeDiv ;
		int GradeFinal = 1;
		int nr_zad = 1;



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

	private: System::Windows::Forms::Button^  buttonNext;
	private: System::Windows::Forms::TextBox^  TotalPoints;



	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Label^  TimeLeft;
	private: System::ComponentModel::IContainer^  components;







	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
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
			this->buttonNext = (gcnew System::Windows::Forms::Button());
			this->TotalPoints = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->TimeLeft = (gcnew System::Windows::Forms::Label());
			this->buttonCheck = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->nr_zadania = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// buttonExit
			// 
			this->buttonExit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->buttonExit->ForeColor = System::Drawing::Color::Red;
			this->buttonExit->Location = System::Drawing::Point(427, 395);
			this->buttonExit->Name = L"buttonExit";
			this->buttonExit->Size = System::Drawing::Size(115, 44);
			this->buttonExit->TabIndex = 0;
			this->buttonExit->Text = L"Wyjście";
			this->buttonExit->UseVisualStyleBackColor = true;
			this->buttonExit->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(153, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(314, 31);
			this->label1->TabIndex = 1;
			this->label1->Text = L"TABLICZKA MNOŻENIA";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// mul1
			// 
			this->mul1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->mul1->Location = System::Drawing::Point(90, 176);
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
			this->mul2->Location = System::Drawing::Point(208, 175);
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
			this->grade->Location = System::Drawing::Point(307, 403);
			this->grade->Multiline = true;
			this->grade->Name = L"grade";
			this->grade->Size = System::Drawing::Size(59, 36);
			this->grade->TabIndex = 8;
			this->grade->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->grade->TextChanged += gcnew System::EventHandler(this, &MyForm::grade_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(168, 182);
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
			this->label3->Location = System::Drawing::Point(276, 181);
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
			this->label4->Location = System::Drawing::Point(203, 406);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(76, 26);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Ocena";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// buttonReset
			// 
			this->buttonReset->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->buttonReset->Location = System::Drawing::Point(152, 78);
			this->buttonReset->Name = L"buttonReset";
			this->buttonReset->Size = System::Drawing::Size(115, 40);
			this->buttonReset->TabIndex = 12;
			this->buttonReset->Text = L"Reset";
			this->buttonReset->UseVisualStyleBackColor = true;
			this->buttonReset->Click += gcnew System::EventHandler(this, &MyForm::buttonReset_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label5->Location = System::Drawing::Point(154, 263);
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
			this->answer->Location = System::Drawing::Point(307, 175);
			this->answer->Multiline = true;
			this->answer->Name = L"answer";
			this->answer->Size = System::Drawing::Size(59, 36);
			this->answer->TabIndex = 16;
			this->answer->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->answer->TextChanged += gcnew System::EventHandler(this, &MyForm::answer_TextChanged);
			// 
			// buttonStart
			// 
			this->buttonStart->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->buttonStart->ForeColor = System::Drawing::Color::DarkGreen;
			this->buttonStart->Location = System::Drawing::Point(35, 78);
			this->buttonStart->Name = L"buttonStart";
			this->buttonStart->Size = System::Drawing::Size(92, 40);
			this->buttonStart->TabIndex = 17;
			this->buttonStart->Text = L"Start";
			this->buttonStart->UseVisualStyleBackColor = true;
			this->buttonStart->Click += gcnew System::EventHandler(this, &MyForm::buttonStart_Click);
			// 
			// correct
			// 
			this->correct->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->correct->Location = System::Drawing::Point(307, 260);
			this->correct->Multiline = true;
			this->correct->Name = L"correct";
			this->correct->Size = System::Drawing::Size(59, 36);
			this->correct->TabIndex = 18;
			this->correct->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->correct->TextChanged += gcnew System::EventHandler(this, &MyForm::correct_TextChanged);
			// 
			// buttonNext
			// 
			this->buttonNext->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->buttonNext->Location = System::Drawing::Point(427, 250);
			this->buttonNext->Name = L"buttonNext";
			this->buttonNext->Size = System::Drawing::Size(115, 36);
			this->buttonNext->TabIndex = 20;
			this->buttonNext->Text = L"Następne";
			this->buttonNext->UseVisualStyleBackColor = true;
			this->buttonNext->Click += gcnew System::EventHandler(this, &MyForm::buttonNext_Click);
			// 
			// TotalPoints
			// 
			this->TotalPoints->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->TotalPoints->Location = System::Drawing::Point(307, 336);
			this->TotalPoints->Multiline = true;
			this->TotalPoints->Name = L"TotalPoints";
			this->TotalPoints->Size = System::Drawing::Size(59, 33);
			this->TotalPoints->TabIndex = 21;
			this->TotalPoints->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->TotalPoints->TextChanged += gcnew System::EventHandler(this, &MyForm::TotalPoints_TextChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label6->Location = System::Drawing::Point(138, 336);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(144, 26);
			this->label6->TabIndex = 22;
			this->label6->Text = L"Ilość punktów";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// TimeLeft
			// 
			this->TimeLeft->AutoSize = true;
			this->TimeLeft->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->TimeLeft->Location = System::Drawing::Point(31, 406);
			this->TimeLeft->Name = L"TimeLeft";
			this->TimeLeft->Size = System::Drawing::Size(49, 24);
			this->TimeLeft->TabIndex = 23;
			this->TimeLeft->Text = L"0:00";
			this->TimeLeft->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->TimeLeft->Click += gcnew System::EventHandler(this, &MyForm::TimeLeft_Click);
			// 
			// buttonCheck
			// 
			this->buttonCheck->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->buttonCheck->ForeColor = System::Drawing::Color::MediumBlue;
			this->buttonCheck->Location = System::Drawing::Point(427, 176);
			this->buttonCheck->Name = L"buttonCheck";
			this->buttonCheck->Size = System::Drawing::Size(115, 35);
			this->buttonCheck->TabIndex = 24;
			this->buttonCheck->Text = L"Sprawdź";
			this->buttonCheck->UseVisualStyleBackColor = true;
			this->buttonCheck->Click += gcnew System::EventHandler(this, &MyForm::buttonCheck_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->label7->Location = System::Drawing::Point(372, 339);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(18, 26);
			this->label7->TabIndex = 25;
			this->label7->Text = L"/";
			// 
			// nr_zadania
			// 
			this->nr_zadania->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F));
			this->nr_zadania->Location = System::Drawing::Point(396, 336);
			this->nr_zadania->Multiline = true;
			this->nr_zadania->Name = L"nr_zadania";
			this->nr_zadania->Size = System::Drawing::Size(59, 33);
			this->nr_zadania->TabIndex = 26;
			this->nr_zadania->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->nr_zadania->UseWaitCursor = true;
			this->nr_zadania->TextChanged += gcnew System::EventHandler(this, &MyForm::nr_zadania_TextChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(603, 468);
			this->Controls->Add(this->nr_zadania);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->buttonCheck);
			this->Controls->Add(this->TimeLeft);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->TotalPoints);
			this->Controls->Add(this->buttonNext);
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



	private: System::Void buttonStart_Click(System::Object^  sender, System::EventArgs^  e)
	{
		startFLAG = 1;
		nextFLAG = 1;
		if (startFLAG)
		{
			GenerateMul();
			nr_zadania->Text = Convert::ToString(nr_zad);

		}

	}
	//timer
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e)
	{
		if (startFLAG)
		{
			if(Minutes>0)
			{
				Seconds--;
				if (Seconds == 0)
				{
				Minutes--;
				Seconds = 59;
				}
				Sec = Convert::ToString(Seconds);
				Min = Convert::ToString(Minutes);
				TimeLeft->Text = Min + ":" + Sec;
			}
			if (Minutes==0)
			{
				if (Seconds <= 59 && Seconds >0)
				{
					Seconds--;
					Sec = Convert::ToString(Seconds);
					TimeLeft->Text = Min + ":" + Sec;	
				}
				else if(Minutes==0 && Seconds==0)
				{
					startFLAG = 0;
					MessageBox::Show("Koniec czasu!");
					//TotalPoints->Text = Convert::ToString(sum);
					GradeDiv = ((double)sum/(double)gradeNext)*100; // liczenie procentu z danych punktow
					if (GradeDiv == 100)
					{
						GradeFinal = 6;
					}
					else if (GradeDiv >= 85 && GradeDiv <100  )
					{
						GradeFinal = 5;
					}
					else if (GradeDiv >= 70 && GradeDiv <85)
					{
						GradeFinal = 4;
					}
					else if (GradeDiv >= 50 && GradeDiv <70)
					{
						GradeFinal = 3;
					}
					else if (GradeDiv >= 30 && GradeDiv <50)
					{
						GradeFinal = 2;
					}
					else if (GradeDiv <30)
					{
						GradeFinal = 1;
					}
					grade->Text = Convert::ToString(GradeFinal); // wyswietlanie oceny
				}// tu trzeba popracowac #_#_#_#_#
				
			}

		}
	}
	
	//pierwszy czynnik
	private: System::Void mul1_TextChanged(System::Object^  sender, System::EventArgs^  e) 
	{
	}
	//drugi czynnik
	private: System::Void mul2_TextChanged(System::Object^  sender, System::EventArgs^  e) 
	{	
    }

	private: System::Void buttonReset_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		startFLAG = 0;
		nextFLAG = 0;
		Minutes = 2;
		Seconds = 59;
		Sec = Convert::ToString(Seconds);
		Min = Convert::ToString(Minutes);
		TimeLeft->Text = Min + ":" + Sec;
		mul1->Text = "";
		mul2->Text = "";
		nr_zadania->Text = "";
		nr_zad = 1;
		answer->Text = "";
		correct->Text = "";
		TotalPoints->Text = "";
		grade->Text = "";
		sum = 0;
		answer->BackColor = System::Drawing::Color::White;

		//inne zerowe wartosci
	}


private: System::Void buttonCheck_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if(nextFLAG==1)
	{
		int multiplication;
		int final;
		try
		{
			multiplication = x * y;
			String^ aswr = answer->Text;
			final = Convert::ToInt32(aswr);
			gradeNext++;
			nextFLAG = 0;
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Exception: " + ex->Message);
		}

		if (final == multiplication)
		{///dobra odpowiedz
			sum++;
			answer->BackColor = System::Drawing::Color::LawnGreen;
			correct->Text = Convert::ToString(multiplication);
			TotalPoints->Text = Convert::ToString(sum);
		}
		else
		{///zla odpowiedz

			answer->BackColor = System::Drawing::Color::Red;
			correct->Text = Convert::ToString(multiplication);
		}
	}
	
	
}

	private: System::Void buttonNext_Click(System::Object^  sender, System::EventArgs^  e)
	{
		answer->Text = "";
		correct->Text = "";
		answer->BackColor = System::Drawing::Color::White;
		nr_zadania->Text = Convert::ToString(nr_zad);
		nextFLAG = 1;
		nr_zad++;
		GenerateMul();
	}
	private: System::Void grade_TextChanged(System::Object^  sender, System::EventArgs^  e) 
	{

	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
	{
		MessageBox::Show("Do zobaczenia Przemek! :)");
		Close();
	}
	private: System::Void nr_zadania_TextChanged(System::Object^  sender, System::EventArgs^  e) 
	{
	}

private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
}



private: System::Void answer_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void correct_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}


private: System::Void TotalPoints_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}

private: System::Void TimeLeft_Click(System::Object^  sender, System::EventArgs^  e) {
}





//////////////////////////////////////////////////////////////////////////////////////////
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
private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
}




};
}
