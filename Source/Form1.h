#pragma once

namespace SimpleTextEditor {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::SplitContainer^  splitContainer1;



	protected: 

	protected: 

	protected: 

	protected: 

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Silver;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button1->Location = System::Drawing::Point(13, 9);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(112, 31);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Open";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->Filter = L"Text files (*.txt)|*.txt|All files (*.*)|*.*";
			this->openFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &Form1::openFileDialog1_FileOk);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(13, 48);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(112, 31);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Save";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(13, 87);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(112, 31);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Quit";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// saveFileDialog1
			// 
			this->saveFileDialog1->Filter = L"Text files (*.txt)|*.txt|All files (*.*)|*.*";
			
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::White;
			this->textBox1->Location = System::Drawing::Point(0, 0);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox1->Size = System::Drawing::Size(558, 365);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// splitContainer1
			// 
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->FixedPanel = System::Windows::Forms::FixedPanel::Panel1;
			this->splitContainer1->Location = System::Drawing::Point(0, 0);
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->button1);
			this->splitContainer1->Panel1->Controls->Add(this->button3);
			this->splitContainer1->Panel1->Controls->Add(this->button2);
		
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->textBox1);
			
			this->splitContainer1->Size = System::Drawing::Size(693, 365);
			this->splitContainer1->SplitterDistance = 131;
			this->splitContainer1->TabIndex = 4;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)), 
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->ClientSize = System::Drawing::Size(693, 365);
			this->Controls->Add(this->splitContainer1);
			this->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Form1";
			this->Text = L"Harry\'s Uber Simple Text Editor";
		
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel2->ResumeLayout(false);
			this->splitContainer1->Panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void openFileDialog1_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
			 }
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				  if(openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
					  {
			
						 System::IO::StreamReader ^ sr = gcnew
							System::IO::StreamReader(openFileDialog1->FileName);
						 
						 this->textBox1->Text = sr->ReadToEnd();
						 sr->Close();
					  }
			 }
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		if ( saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK )
			  {
				  System::IO::StreamWriter ^ sw = gcnew System::IO::StreamWriter(saveFileDialog1->FileName);

					sw->WriteLine(textBox1->Text);
			
					sw->Close();
				 }
			
	}

private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			this->Close();
		 }

};
}

