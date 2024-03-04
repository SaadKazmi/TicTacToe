#pragma once

namespace TicTacToe {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Loading
	/// </summary>
	public ref class Loading : public System::Windows::Forms::Form
	{
	public:
		Loading(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	public:

		bool enter = false;
		void music(bool enter)
		{
			System::Media::SoundPlayer^ simpleSound = gcnew
				System::Media::SoundPlayer("cat.wav");
			simpleSound->PlayLooping();
			if (enter == true)
				simpleSound->Stop();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Loading()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ProgressBar^ progressBar1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Label^ label2;
	private: System::ComponentModel::IContainer^ components;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Loading::typeid));
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(98, 587);
			this->progressBar1->Margin = System::Windows::Forms::Padding(6);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(1106, 63);
			this->progressBar1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::LightSteelBlue;
			this->button1->Font = (gcnew System::Drawing::Font(L"MV Boli", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(448, 662);
			this->button1->Margin = System::Windows::Forms::Padding(6);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(378, 94);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Enter Game!";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Loading::button1_Click);
			this->button1->MouseLeave += gcnew System::EventHandler(this, &Loading::button1_MouseLeave);
			this->button1->MouseHover += gcnew System::EventHandler(this, &Loading::button1_MouseHover);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 27.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::MediumSpringGreen;
			this->label1->Location = System::Drawing::Point(98, 485);
			this->label1->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(402, 99);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Loading ...";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(362, 102);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(602, 377);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 65;
			this->timer1->Tick += gcnew System::EventHandler(this, &Loading::timer1_Tick);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::MediumSpringGreen;
			this->label2->Location = System::Drawing::Point(498, 485);
			this->label2->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(85, 99);
			this->label2->TabIndex = 4;
			this->label2->Text = L"0";
			// 
			// Loading
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(1270, 790);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->progressBar1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"Loading";
			this->Opacity = 0.95;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Loading";
			this->Load += gcnew System::EventHandler(this, &Loading::Loading_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		enter = true;
		music(enter);
		Close();
	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		progressBar1->Value = progressBar1->Value + 1;
		label2->Text = Convert::ToString(progressBar1->Value) + "%";
		button1->Hide();
		if (progressBar1->Value > 99)
		{
			timer1->Enabled = false;
			label2->Text = "100 %";
			label1->Text = "Ready!!";
			button1->Show();

		}
	}
private: System::Void Loading_Load(System::Object^ sender, System::EventArgs^ e) {
	music(enter);
}
private: System::Void button1_MouseHover(System::Object^ sender, System::EventArgs^ e) {
	button1->BackColor = System::Drawing::Color::Violet;
}
private: System::Void button1_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	button1->BackColor = System::Drawing::Color::LightSteelBlue;
}
};
}
