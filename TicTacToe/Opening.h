#pragma once
#include"Credits.h"

namespace TicTacToe {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Opening
	/// </summary>
	public ref class Opening : public System::Windows::Forms::Form
	{
	public:
		Opening(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		bool enter2 = false;
		void music(bool enter)
		{
			System::Media::SoundPlayer^ simpleSound = gcnew
				System::Media::SoundPlayer("Open1.wav");
			simpleSound->PlayLooping();
			if (enter == true)
				simpleSound->Stop();
		}

		


	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Opening()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Opening::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-3, -2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1276, 794);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Opening::pictureBox1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::MediumPurple;
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe Print", 13.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button2->Location = System::Drawing::Point(458, 258);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(375, 104);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Play Game!";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Opening::button2_Click);
			this->button2->MouseLeave += gcnew System::EventHandler(this, &Opening::button2_MouseLeave);
			this->button2->MouseHover += gcnew System::EventHandler(this, &Opening::button2_MouseHover);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::MediumPurple;
			this->button3->Font = (gcnew System::Drawing::Font(L"Segoe Print", 13.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button3->Location = System::Drawing::Point(458, 406);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(375, 104);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Credits";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Opening::button3_Click);
			this->button3->MouseLeave += gcnew System::EventHandler(this, &Opening::button3_MouseLeave);
			this->button3->MouseHover += gcnew System::EventHandler(this, &Opening::button3_MouseHover);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::MediumPurple;
			this->button4->Font = (gcnew System::Drawing::Font(L"Segoe Print", 13.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button4->Location = System::Drawing::Point(458, 551);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(375, 104);
			this->button4->TabIndex = 4;
			this->button4->Text = L"EXIT";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Opening::button4_Click);
			this->button4->MouseLeave += gcnew System::EventHandler(this, &Opening::button4_MouseLeave);
			this->button4->MouseHover += gcnew System::EventHandler(this, &Opening::button4_MouseHover);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"MV Boli", 36, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::InfoText;
			this->label1->Location = System::Drawing::Point(122, 69);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1071, 125);
			this->label1->TabIndex = 5;
			this->label1->Text = L"TIC TAC TOE GAME!!";
			// 
			// Opening
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::MediumSlateBlue;
			this->ClientSize = System::Drawing::Size(1270, 791);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Opening";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Menu";
			this->Load += gcnew System::EventHandler(this, &Opening::Opening_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void Opening_Load(System::Object^ sender, System::EventArgs^ e) {
	music(enter2);
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	Credits^ credits = gcnew Credits;
	credits->ShowDialog();
	

}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	enter2 = true;
	music(enter2);
	Close();
}
private: System::Void button2_MouseHover(System::Object^ sender, System::EventArgs^ e) {
	button2->BackColor = System::Drawing::Color::DeepPink;
}
private: System::Void button2_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	button2->BackColor = System::Drawing::Color::MediumPurple;
}
private: System::Void button3_MouseHover(System::Object^ sender, System::EventArgs^ e) {
	button3->BackColor = System::Drawing::Color::DeepPink;
}
private: System::Void button3_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	button3->BackColor = System::Drawing::Color::MediumPurple;
}

private: System::Void button4_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	button4->BackColor = System::Drawing::Color::MediumPurple;
}
private: System::Void button4_MouseHover(System::Object^ sender, System::EventArgs^ e) {
	button4->BackColor = System::Drawing::Color::DeepPink;
}
};
};
