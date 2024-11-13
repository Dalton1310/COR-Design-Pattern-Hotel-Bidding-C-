#pragma once
#include "Hotel.h"
#include <msclr/marshal_cppstd.h>
namespace CIS476Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	private:
		HotelRoom* hotel;
	public:
		MainForm(void)
		{
			InitializeComponent();
			
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ WelcomeText;
	protected:

	private: System::Windows::Forms::TextBox^ textBidVal;
	private: System::Windows::Forms::Label^ BidText;


	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Button^ btnBid;

	private: System::Windows::Forms::Button^ btnClear;
	private: System::Windows::Forms::Label^ txtConfirmation;
	private: System::Windows::Forms::Label^ txtRoomSelected;
	private: System::Windows::Forms::Label^ txtError;




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
			hotel = new HotelRoom();
			Suite suite;
			this->WelcomeText = (gcnew System::Windows::Forms::Label());
			this->textBidVal = (gcnew System::Windows::Forms::TextBox());
			this->BidText = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->btnBid = (gcnew System::Windows::Forms::Button());
			this->txtConfirmation = (gcnew System::Windows::Forms::Label());
			this->txtRoomSelected = (gcnew System::Windows::Forms::Label());
			this->txtError = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// WelcomeText
			// 
			this->WelcomeText->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->WelcomeText->AutoSize = true;
			this->WelcomeText->Location = System::Drawing::Point(12, 9);
			this->WelcomeText->Name = L"WelcomeText";
			this->WelcomeText->Size = System::Drawing::Size(240, 13);
			this->WelcomeText->TabIndex = 0;
			this->WelcomeText->Text = L"Welcome To The Hotel Room Bidder Application!";
			this->WelcomeText->Click += gcnew System::EventHandler(this, &MainForm::label1_Click);
			// 
			// textBidVal
			// 
			this->textBidVal->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBidVal->Location = System::Drawing::Point(110, 42);
			this->textBidVal->Name = L"textBidVal";
			this->textBidVal->Size = System::Drawing::Size(168, 20);
			this->textBidVal->TabIndex = 1;
			this->textBidVal->TextChanged += gcnew System::EventHandler(this, &MainForm::textBidVal_TextChanged);
			// 
			// BidText
			// 
			this->BidText->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->BidText->AutoSize = true;
			this->BidText->Location = System::Drawing::Point(12, 45);
			this->BidText->Name = L"BidText";
			this->BidText->Size = System::Drawing::Size(92, 13);
			this->BidText->TabIndex = 2;
			this->BidText->Text = L"Enter Bid Value: $";
			this->BidText->Click += gcnew System::EventHandler(this, &MainForm::label2_Click);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->btnClear, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->btnBid, 0, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(16, 136);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(262, 45);
			this->tableLayoutPanel1->TabIndex = 3;
			this->tableLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainForm::tableLayoutPanel1_Paint);
			// 
			// btnClear
			// 
			this->btnClear->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnClear->Location = System::Drawing::Point(134, 3);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(125, 39);
			this->btnClear->TabIndex = 1;
			this->btnClear->Text = L"Clear";
			this->btnClear->UseVisualStyleBackColor = true;
			this->btnClear->Click += gcnew System::EventHandler(this, &MainForm::btnClear_Click);
			// 
			// btnBid
			// 
			this->btnBid->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnBid->Location = System::Drawing::Point(3, 3);
			this->btnBid->Name = L"btnBid";
			this->btnBid->Size = System::Drawing::Size(125, 39);
			this->btnBid->TabIndex = 0;
			this->btnBid->Text = L"Confirm Bid";
			this->btnBid->UseVisualStyleBackColor = true;
			this->btnBid->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// txtConfirmation
			// 
			this->txtConfirmation->AutoSize = true;
			this->txtConfirmation->Location = System::Drawing::Point(32, 72);
			this->txtConfirmation->Name = L"txtConfirmation";
			this->txtConfirmation->Size = System::Drawing::Size(80, 13);
			this->txtConfirmation->TabIndex = 4;
			this->txtConfirmation->Text = L"ConfirmationBid";
			this->txtConfirmation->Click += gcnew System::EventHandler(this, &MainForm::label1_Click_1);
			// 
			// txtRoomSelected
			// 
			this->txtRoomSelected->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txtRoomSelected->AutoSize = true;
			this->txtRoomSelected->Location = System::Drawing::Point(32, 100);
			this->txtRoomSelected->Name = L"txtRoomSelected";
			this->txtRoomSelected->Size = System::Drawing::Size(77, 13);
			this->txtRoomSelected->TabIndex = 5;
			this->txtRoomSelected->Text = L"RoomSelected";
			this->txtRoomSelected->Click += gcnew System::EventHandler(this, &MainForm::label1_Click_2);
			// 
			// txtError
			// 
			this->txtError->AutoSize = true;
			this->txtError->Location = System::Drawing::Point(32, 207);
			this->txtError->Name = L"txtError";
			this->txtError->Size = System::Drawing::Size(29, 13);
			this->txtError->TabIndex = 6;
			this->txtError->Text = L"Error";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->ClientSize = System::Drawing::Size(290, 267);
			this->Controls->Add(this->txtError);
			this->Controls->Add(this->txtRoomSelected);
			this->Controls->Add(this->txtConfirmation);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->BidText);
			this->Controls->Add(this->textBidVal);
			this->Controls->Add(this->WelcomeText);
			this->MinimumSize = System::Drawing::Size(306, 306);
			this->Name = L"MainForm";
			this->Text = L"Hotel Bidding Site";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		hotel = this->hotel;
		float bid = 0;
		Suite* suite = new Suite();
		std::string roomWon = "";
		String^ bidVal = this->textBidVal->Text;
		this->txtConfirmation->Text = "Your confirmed bid is: $" + bidVal;
		if (float::TryParse(bidVal, bid)) {
			suite->checkRoom(hotel, bid, roomWon);
			if (roomWon != "") {
				System::String^ myStringCli = msclr::interop::marshal_as<System::String^>(roomWon);
				txtError->Text = "";
				this->txtConfirmation->Text = "Your bid was confirmed, you won the " + myStringCli + "!";
			}
			else {
				this->txtConfirmation->Text = "Sorry, your bid was not successful.";
			}
		}
		else {
			txtError->Text = "ERROR! Invalid bid value, enter a number" + "\r\n" + " with an optional decimal point value";
			this->txtConfirmation->Text = "";
		}
	}
	private: System::Void tableLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void btnClear_Click(System::Object^ sender, System::EventArgs^ e) {
		this->textBidVal->Text = "";
	}
private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
	this->txtConfirmation->Text = "";
	this->txtError->Text = "";
	this->txtRoomSelected->Text = "";
}
private: System::Void textBidVal_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click_2(System::Object^ sender, System::EventArgs^ e) {
	this->txtRoomSelected->Text = "";
}
};


}