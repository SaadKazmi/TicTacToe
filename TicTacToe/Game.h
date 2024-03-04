#pragma once

namespace TicTacToe {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	int counterMulti = 0, input = 0, player1 = 0, player2 = 0, draw=0;
	bool b1 = true, b2 = true, b3 = true, b4 = true, b5 = true, b6 = true, b7 = true, b8 = true, b9 = true;
	char space1 = '\0', space2 = '\0', space3 = '\0', space4 = '\0', space5 = '\0', space6 = '\0', space7 = '\0', space8 = '\0', space9 = '\0';

	void winsound()
	{
		System::Media::SoundPlayer^ simple = gcnew
			System::Media::SoundPlayer("Win.wav");
		simple->Play();
	}

	void drawsound()
	{
		System::Media::SoundPlayer^ simple = gcnew
			System::Media::SoundPlayer("Draw.wav");
		simple->Play();
	}

	void win(int &player1, int &player2)
	{
		if((space1 == space2 && space2 == space3) || (space4 == space5 && space5 == space6) || (space7 == space8 && space8 == space9))
		{ 
			if((space1 == 'X' && space2=='X' && space3 == 'X') || (space4 == 'X' && space5 == 'X' && space6 == 'X') || (space7 == 'X' && space8 == 'X' && space8 == 'X'))
			{
				player1++;
				b1 = b2 = b3 = b4 = b5 = b6 = b7 = b8 = b9 = false;
				winsound();
			}

			else if ((space1 == 'O	' && space2 == 'O' && space3 == 'O') || (space4 == 'O' && space5 == 'O' && space6 == 'O') || (space7 == 'O' && space8 == 'O' && space8 == 'O'))
			{
				player2++;
				b1 = b2 = b3 = b4 = b5 = b6 = b7 = b8 = b9 = false; winsound();
			}
		}

		else if ((space1 == space4 && space4 == space7) || (space2 == space5 && space5 == space8) || (space3 == space6 && space6 == space9))
		{
			if ((space1 == 'X' && space4 == 'X' && space7 == 'X') || (space2 == 'X' && space5 == 'X' && space8 == 'X') || (space3 == 'X' && space6 == 'X' && space9 == 'X'))
			{
				player1++;
				b1 = b2 = b3 = b4 = b5 = b6 = b7 = b8 = b9 = false; winsound();
			}

			else if ((space1 == 'O' && space4 == 'O' && space7 == 'O') || (space2 == 'O' && space5 == 'O' && space8 == 'O') || (space3 == 'O' && space6 == 'O' && space9 == 'O'))
			{
				player2++;
				b1 = b2 = b3 = b4 = b5 = b6 = b7 = b8 = b9 = false; winsound();
			}
		}

		else if ((space1 == space5 && space5 == space9) || (space3 == space5 && space5 == space7))
		{
			if ((space5 == 'X' && space1 == 'X' && space9 == 'X') || (space5 == 'X' && space3 == 'X' && space7 == 'X'))
			{
				player1++;
				b1 = b2 = b3 = b4 = b5 = b6 = b7 = b8 = b9 = false; winsound();
			}

			else if ((space5 == 'O' && space1 == 'O' && space9 == 'O') || (space5 == 'O' && space3 == 'O' && space7 == 'O'))
			{
				player2++;
				b1 = b2 = b3 = b4 = b5 = b6 = b7 = b8 = b9 = false; winsound();
			}
		}

		else if (b1 == false && b2 == false && b3 == false && b4 == false && b5 == false && b6 == false && b7 == false && b8 == false && b9 == false)
		{
			drawsound();
			MessageBox::Show("\nDraw!!");
			draw++;
		}

	}

	

	/// <summary>
	/// Summary for Game
	/// </summary>
	public ref class Game : public System::Windows::Forms::Form
	{
		public:
		Game(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}


		void hover()
		{
			System::Media::SoundPlayer^ simple = gcnew
				System::Media::SoundPlayer("button.wav");
			simple->Play();
		}


	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Game()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;

	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
		   /////////////////////////////////////////////////////////////////////////////////////////
		   void colour()
		   {
			   if ((space1 == 'X' && space2 == 'X' && space3 == 'X') || (space1 == 'O' && space2 == 'O' && space3 == 'O'))
			   {
				   button1->BackColor = System::Drawing::Color::PaleTurquoise;
				   button2->BackColor = System::Drawing::Color::PaleTurquoise;
				   button3->BackColor = System::Drawing::Color::PaleTurquoise;
			   }

			   else if ((space4 == 'X' && space5 == 'X' && space6 == 'X') || (space4 == 'O' && space5 == 'O' && space6 == 'O'))
			   {
				   button4->BackColor = System::Drawing::Color::PaleTurquoise;
				   button5->BackColor = System::Drawing::Color::PaleTurquoise;
				   button6->BackColor = System::Drawing::Color::PaleTurquoise;
			   }
			   else if ((space7 == 'X' && space8 == 'X' && space9 == 'X') || (space7 == 'O' && space8 == 'O' && space9 == 'O'))
			   {
				   button7->BackColor = System::Drawing::Color::PaleTurquoise;
				   button8->BackColor = System::Drawing::Color::PaleTurquoise;
				   button9->BackColor = System::Drawing::Color::PaleTurquoise;
			   }
			   else if ((space1 == 'X' && space4 == 'X' && space7 == 'X') || (space1 == 'O' && space4 == 'O' && space7 == 'O'))
			   {
				   button1->BackColor = System::Drawing::Color::PaleTurquoise;
				   button4->BackColor = System::Drawing::Color::PaleTurquoise;
				   button7->BackColor = System::Drawing::Color::PaleTurquoise;
			   }
			   else if ((space2 == 'X' && space5 == 'X' && space8 == 'X') || (space2 == 'O' && space5 == 'O' && space8 == 'O'))
			   {
				   button2->BackColor = System::Drawing::Color::PaleTurquoise;
				   button5->BackColor = System::Drawing::Color::PaleTurquoise;
				   button8->BackColor = System::Drawing::Color::PaleTurquoise;
			   }
			   else if ((space3 == 'X' && space6 == 'X' && space9 == 'X') || (space3 == 'O' && space6 == 'O' && space9 == 'O'))
			   {
				   button3->BackColor = System::Drawing::Color::PaleTurquoise;
				   button6->BackColor = System::Drawing::Color::PaleTurquoise;
				   button9->BackColor = System::Drawing::Color::PaleTurquoise;
			   }
			   else if ((space1 == 'X' && space5 == 'X' && space9 == 'X') || (space1 == 'O' && space5 == 'O' && space9 == 'O'))
			   {
				   button1->BackColor = System::Drawing::Color::PaleTurquoise;
				   button5->BackColor = System::Drawing::Color::PaleTurquoise;
				   button9->BackColor = System::Drawing::Color::PaleTurquoise;
			   }
			   else if ((space3 == 'X' && space5 == 'X' && space7 == 'X') || (space3 == 'O' && space5 == 'O' && space7 == 'O'))
			   {
				   button3->BackColor = System::Drawing::Color::PaleTurquoise;
				   button5->BackColor = System::Drawing::Color::PaleTurquoise;
				   button7->BackColor = System::Drawing::Color::PaleTurquoise;
			   }
			   else if (b1 ==  false && b2 == false && b3 == false && b4 == false && b5 == false && b6 == false && b7 == false && b8 == false && b9 == false)
			   {
				   button1->BackColor = System::Drawing::Color::Crimson;
				   button2->BackColor = System::Drawing::Color::Crimson;
				   button3->BackColor = System::Drawing::Color::Crimson;
				   button4->BackColor = System::Drawing::Color::Crimson;
				   button5->BackColor = System::Drawing::Color::Crimson;
				   button6->BackColor = System::Drawing::Color::Crimson;
				   button7->BackColor = System::Drawing::Color::Crimson;
				   button8->BackColor = System::Drawing::Color::Crimson;
				   button9->BackColor = System::Drawing::Color::Crimson;
			   }
		   }

		   void resetColor()
		   {
			   button1->BackColor = System::Drawing::Color::MediumSlateBlue;
			   button2->BackColor = System::Drawing::Color::MediumSlateBlue;
			   button3->BackColor = System::Drawing::Color::MediumSlateBlue;
			   button4->BackColor = System::Drawing::Color::MediumSlateBlue;
			   button5->BackColor = System::Drawing::Color::MediumSlateBlue;
			   button6->BackColor = System::Drawing::Color::MediumSlateBlue;
			   button7->BackColor = System::Drawing::Color::MediumSlateBlue;
			   button8->BackColor = System::Drawing::Color::MediumSlateBlue;
			   button9->BackColor = System::Drawing::Color::MediumSlateBlue;
		   }
			///////////////////////////////////////////////////////////////////////////////////////
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Game::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Violet;
			this->label1->Font = (gcnew System::Drawing::Font(L"MV Boli", 36, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(230, 10);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(877, 125);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Tic Tac Toe Game";
			this->label1->Click += gcnew System::EventHandler(this, &Game::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::MediumPurple;
			this->label2->Font = (gcnew System::Drawing::Font(L"MV Boli", 28.125F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(694, 166);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(416, 98);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Player X :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::MediumPurple;
			this->label3->Font = (gcnew System::Drawing::Font(L"MV Boli", 28.125F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(694, 275);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(416, 98);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Player O :";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::MediumSlateBlue;
			this->button1->Font = (gcnew System::Drawing::Font(L"MV Boli", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(12, 137);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(208, 185);
			this->button1->TabIndex = 2;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Game::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::MediumSlateBlue;
			this->button2->Font = (gcnew System::Drawing::Font(L"MV Boli", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(220, 137);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(208, 185);
			this->button2->TabIndex = 4;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Game::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::MediumSlateBlue;
			this->button3->Font = (gcnew System::Drawing::Font(L"MV Boli", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(428, 137);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(208, 185);
			this->button3->TabIndex = 5;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Game::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::MediumSlateBlue;
			this->button4->Font = (gcnew System::Drawing::Font(L"MV Boli", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(12, 321);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(208, 185);
			this->button4->TabIndex = 6;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Game::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::MediumSlateBlue;
			this->button5->Font = (gcnew System::Drawing::Font(L"MV Boli", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(220, 321);
			this->button5->Margin = System::Windows::Forms::Padding(4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(208, 185);
			this->button5->TabIndex = 7;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Game::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::MediumSlateBlue;
			this->button6->Font = (gcnew System::Drawing::Font(L"MV Boli", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(428, 321);
			this->button6->Margin = System::Windows::Forms::Padding(4);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(208, 185);
			this->button6->TabIndex = 8;
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Game::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::MediumSlateBlue;
			this->button7->Font = (gcnew System::Drawing::Font(L"MV Boli", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(12, 508);
			this->button7->Margin = System::Windows::Forms::Padding(4);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(208, 185);
			this->button7->TabIndex = 9;
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Game::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::MediumSlateBlue;
			this->button8->Font = (gcnew System::Drawing::Font(L"MV Boli", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(220, 508);
			this->button8->Margin = System::Windows::Forms::Padding(4);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(208, 185);
			this->button8->TabIndex = 10;
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &Game::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::MediumSlateBlue;
			this->button9->Font = (gcnew System::Drawing::Font(L"MV Boli", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(428, 508);
			this->button9->Margin = System::Windows::Forms::Padding(4);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(208, 185);
			this->button9->TabIndex = 11;
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &Game::button9_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::Violet;
			this->button10->Font = (gcnew System::Drawing::Font(L"MV Boli", 24, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(708, 508);
			this->button10->Margin = System::Windows::Forms::Padding(4);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(554, 116);
			this->button10->TabIndex = 13;
			this->button10->Text = L"Reset";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &Game::button10_Click);
			this->button10->MouseLeave += gcnew System::EventHandler(this, &Game::button10_MouseLeave);
			this->button10->MouseHover += gcnew System::EventHandler(this, &Game::button10_MouseHover);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::Violet;
			this->button11->Font = (gcnew System::Drawing::Font(L"MV Boli", 24, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(708, 658);
			this->button11->Margin = System::Windows::Forms::Padding(4);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(554, 116);
			this->button11->TabIndex = 14;
			this->button11->Text = L"New Game";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &Game::button11_Click);
			this->button11->MouseLeave += gcnew System::EventHandler(this, &Game::button11_MouseLeave);
			this->button11->MouseHover += gcnew System::EventHandler(this, &Game::button11_MouseHover);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Violet;
			this->label5->Font = (gcnew System::Drawing::Font(L"MV Boli", 28.125F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(1118, 166);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(95, 98);
			this->label5->TabIndex = 15;
			this->label5->Text = L"0";
			this->label5->Click += gcnew System::EventHandler(this, &Game::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Violet;
			this->label6->Font = (gcnew System::Drawing::Font(L"MV Boli", 28.125F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(1118, 275);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(95, 98);
			this->label6->TabIndex = 16;
			this->label6->Text = L"0";
			this->label6->Click += gcnew System::EventHandler(this, &Game::label6_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::Violet;
			this->button12->Font = (gcnew System::Drawing::Font(L"MV Boli", 24, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(150, 696);
			this->button12->Margin = System::Windows::Forms::Padding(4);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(343, 87);
			this->button12->TabIndex = 17;
			this->button12->Text = L"Exit";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &Game::button12_Click);
			this->button12->MouseLeave += gcnew System::EventHandler(this, &Game::button12_MouseLeave);
			this->button12->MouseHover += gcnew System::EventHandler(this, &Game::button12_MouseHover);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Violet;
			this->label4->Font = (gcnew System::Drawing::Font(L"MV Boli", 28.125F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(1120, 381);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(95, 98);
			this->label4->TabIndex = 19;
			this->label4->Text = L"0";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::MediumPurple;
			this->label7->Font = (gcnew System::Drawing::Font(L"MV Boli", 27, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(694, 381);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(410, 95);
			this->label7->TabIndex = 18;
			this->label7->Text = L"Draws    :";
			// 
			// Game
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Pink;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1275, 790);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Game";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Tic Tac Toe";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (b1 == true)
	{
		if (input % 2 == 1)
		{space1 = 'X';
		button1->Text = "X";
		}
		else {
			button1->Text = "O";
			space1 = 'O';
		}
		input++;
		b1 = false;
		colour();
		win(player1, player2);
		this->label5->Text = Convert::ToString(player1);
		this->label6->Text = Convert::ToString(player2);
		this->label4->Text = Convert::ToString(draw);
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (b2 == true)
	{
		if (input % 2 == 1)
		{
			space2 = 'X';
			button2->Text = "X";
		}
		else
		{
			button2->Text = "O";
			space2 = 'O';
		}
		input++;
		b2 = false;
		colour();
		win(player1, player2);
		this->label5->Text = Convert::ToString(player1);
		this->label6->Text = Convert::ToString(player2);
		this->label4->Text = Convert::ToString(draw);
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (b3 == true)
	{
		if (input % 2 == 1)
		{
			space3 = 'X';
			button3->Text = "X";
		}
		else
		{
			space3 = 'O';
			button3->Text = "O";
		}
		input++;
		b3 = false;
		colour();
		win(player1, player2);
		this->label5->Text = Convert::ToString(player1);
		this->label6->Text = Convert::ToString(player2);
		this->label4->Text = Convert::ToString(draw);
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (b4 == true)
	{
		if (input % 2 == 1)
		{
			space4 = 'X';
			button4->Text = "X";
		}
		else
		{
			space4 = 'O';
			button4->Text = "O";
		}
		input++;
		b4 = false;
		colour();
		win(player1, player2);
		this->label5->Text = Convert::ToString(player1);
		this->label6->Text = Convert::ToString(player2);
		this->label4->Text = Convert::ToString(draw);
	}
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (b5 == true)
	{
		if (input % 2 == 1)
		{
			space5 = 'X';
			button5->Text = "X";
		}
		else
		{
			space5 = 'O';
			button5->Text = "O";
		}
		input++;
		b5 = false;
		colour();
		win(player1, player2);
		this->label5->Text = Convert::ToString(player1);
		this->label6->Text = Convert::ToString(player2);
		this->label4->Text = Convert::ToString(draw);
	}
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	if (b6 == true)
	{
		if (input % 2 == 1)
		{
			space6 = 'X';
			button6->Text = "X";
		}
		else
		{
			space6 = 'O';
			button6->Text = "O";
		}
		input++;
		b6 = false;
		colour();
		win(player1, player2);
		this->label5->Text = Convert::ToString(player1);
		this->label6->Text = Convert::ToString(player2);
		this->label4->Text = Convert::ToString(draw);
	}
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	if (b7 == true)
	{
		if (input % 2 == 1)
		{
			space7 = 'X';
			button7->Text = "X";
		}
		else
		{
			space7 = 'O';
			button7->Text = "O";
		}
		input++;
		b7 = false;
		colour();
		win(player1, player2);
		this->label5->Text = Convert::ToString(player1);
		this->label6->Text = Convert::ToString(player2);
		this->label4->Text = Convert::ToString(draw);
	}
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	if (b8 == true)
	{
		if (input % 2 == 1)
		{
			space8 = 'X';
			button8->Text = "X";
		}
		else
		{
			space8 = 'O';
			button8->Text = "O";
		}
		input++;
		b8 = false;
		colour();
		win(player1, player2);
		this->label5->Text = Convert::ToString(player1);
		this->label6->Text = Convert::ToString(player2);
		this->label4->Text = Convert::ToString(draw);
	}
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	if (b9 == true)
	{
		if (input % 2 == 1)
		{
			space9 = 'X';
			button9->Text = "X";
		}
		else
		{
			space9 = 'O';
			button9->Text = "O";
		}
		input++;
		b9 = false;
		colour();
		win(player1, player2);
		this->label5->Text = Convert::ToString(player1);
		this->label6->Text = Convert::ToString(player2);
		this->label4->Text = Convert::ToString(draw);
	}
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	b1 = b2 = b3 = b4 = b5 = b6 = b7 = b8 = b9 = true;
	resetColor();
	input = 0;
	button1->Text = ""; button2->Text = ""; button3->Text = ""; button4->Text = ""; button5->Text = ""; button6->Text = ""; button7->Text = ""; button8->Text = ""; button9->Text = "";
	space1 = space2 = space3 = space4 = space5 = space6 = space7 = space8 = space9 = '\0';
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	player1 = player2 = draw= 0;
	resetColor();
	this->label5->Text = Convert::ToString(player1);
	this->label6->Text = Convert::ToString(player2);
	this->label4->Text = Convert::ToString(draw);
	b1 = b2 = b3 = b4 = b5 = b6 = b7 = b8 = b9 = true;
	space1 = space2 = space3 = space4 = space5 = space6 = space7 = space8 = space9 = '\0';
	input = 0;
	button1->Text = ""; button2->Text = ""; button3->Text = ""; button4->Text = ""; button5->Text = ""; button6->Text = ""; button7->Text = ""; button8->Text = ""; button9->Text = "";
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void button10_MouseHover(System::Object^ sender, System::EventArgs^ e) {
	hover();
	button10->BackColor = System::Drawing::Color::DeepPink;
}
private: System::Void button10_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	button10->BackColor = System::Drawing::Color::Violet;
}

private: System::Void button11_MouseHover(System::Object^ sender, System::EventArgs^ e) {
	hover();
	button11->BackColor = System::Drawing::Color::DeepPink;
}
private: System::Void button11_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	button11->BackColor = System::Drawing::Color::Violet;
}
private: System::Void button12_MouseHover(System::Object^ sender, System::EventArgs^ e) {
	hover();
	button12->BackColor = System::Drawing::Color::DeepPink;
}
private: System::Void button12_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	button12->BackColor = System::Drawing::Color::Violet;
}
};
}
