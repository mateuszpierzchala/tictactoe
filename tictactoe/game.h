#pragma once

namespace tictactoe {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o game
	/// </summary>
	public ref class game : public System::Windows::Forms::Form
	{

		bool wcisniety = true;
		bool wygral = false;
		int licznikX = 0;
		int licznikO = 0;
		String^ mistrz = " ";

	public:
		game(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~game()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  lblLicznikX;
	private: System::Windows::Forms::Label^  lblLicznikO;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::PictureBox^  a1;
	private: System::Windows::Forms::PictureBox^  b1;
	private: System::Windows::Forms::PictureBox^  c1;
	private: System::Windows::Forms::PictureBox^  b2;




	private: System::Windows::Forms::PictureBox^  a2;
	private: System::Windows::Forms::PictureBox^  a3;
	private: System::Windows::Forms::PictureBox^  b3;



	private: System::Windows::Forms::PictureBox^  c2;
	private: System::Windows::Forms::PictureBox^  c3;


	private: System::Windows::Forms::ImageList^  imageList1;
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Wymagana metoda obs³ugi projektanta — nie nale¿y modyfikowaæ 
		/// zawartoœæ tej metody z edytorem kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(game::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lblLicznikX = (gcnew System::Windows::Forms::Label());
			this->lblLicznikO = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->a1 = (gcnew System::Windows::Forms::PictureBox());
			this->b1 = (gcnew System::Windows::Forms::PictureBox());
			this->c1 = (gcnew System::Windows::Forms::PictureBox());
			this->b2 = (gcnew System::Windows::Forms::PictureBox());
			this->a2 = (gcnew System::Windows::Forms::PictureBox());
			this->a3 = (gcnew System::Windows::Forms::PictureBox());
			this->b3 = (gcnew System::Windows::Forms::PictureBox());
			this->c2 = (gcnew System::Windows::Forms::PictureBox());
			this->c3 = (gcnew System::Windows::Forms::PictureBox());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->a1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->b1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->c1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->b2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->a2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->a3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->b3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->c2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->c3))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(23, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(63, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Wygrane X:";
			// 
			// lblLicznikX
			// 
			this->lblLicznikX->AutoSize = true;
			this->lblLicznikX->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lblLicznikX->Location = System::Drawing::Point(41, 48);
			this->lblLicznikX->Name = L"lblLicznikX";
			this->lblLicznikX->Size = System::Drawing::Size(15, 15);
			this->lblLicznikX->TabIndex = 1;
			this->lblLicznikX->Text = L"0";
			// 
			// lblLicznikO
			// 
			this->lblLicznikO->AutoSize = true;
			this->lblLicznikO->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lblLicznikO->Location = System::Drawing::Point(227, 48);
			this->lblLicznikO->Name = L"lblLicznikO";
			this->lblLicznikO->Size = System::Drawing::Size(15, 15);
			this->lblLicznikO->TabIndex = 3;
			this->lblLicznikO->Text = L"0";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(209, 26);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(62, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Wygrane 0:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(26, 376);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Reset";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &game::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(197, 376);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Nowa gra";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &game::button2_Click);
			// 
			// a1
			// 
			this->a1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"a1.Image")));
			this->a1->Location = System::Drawing::Point(8, 75);
			this->a1->Name = L"a1";
			this->a1->Size = System::Drawing::Size(48, 60);
			this->a1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->a1->TabIndex = 6;
			this->a1->TabStop = false;
			this->a1->Tag = L"\?";
			this->a1->Click += gcnew System::EventHandler(this, &game::graj);
			// 
			// b1
			// 
			this->b1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"b1.Image")));
			this->b1->Location = System::Drawing::Point(109, 66);
			this->b1->Name = L"b1";
			this->b1->Size = System::Drawing::Size(48, 60);
			this->b1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->b1->TabIndex = 7;
			this->b1->TabStop = false;
			this->b1->Tag = L"\?";
			this->b1->Click += gcnew System::EventHandler(this, &game::graj);
			// 
			// c1
			// 
			this->c1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"c1.Image")));
			this->c1->Location = System::Drawing::Point(212, 66);
			this->c1->Name = L"c1";
			this->c1->Size = System::Drawing::Size(48, 60);
			this->c1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->c1->TabIndex = 8;
			this->c1->TabStop = false;
			this->c1->Tag = L"\?";
			this->c1->Click += gcnew System::EventHandler(this, &game::graj);
			// 
			// b2
			// 
			this->b2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"b2.Image")));
			this->b2->Location = System::Drawing::Point(109, 154);
			this->b2->Name = L"b2";
			this->b2->Size = System::Drawing::Size(48, 60);
			this->b2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->b2->TabIndex = 9;
			this->b2->TabStop = false;
			this->b2->Tag = L"\?";
			this->b2->Click += gcnew System::EventHandler(this, &game::graj);
			// 
			// a2
			// 
			this->a2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"a2.Image")));
			this->a2->Location = System::Drawing::Point(8, 165);
			this->a2->Name = L"a2";
			this->a2->Size = System::Drawing::Size(48, 60);
			this->a2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->a2->TabIndex = 10;
			this->a2->TabStop = false;
			this->a2->Tag = L"\?";
			this->a2->Click += gcnew System::EventHandler(this, &game::graj);
			// 
			// a3
			// 
			this->a3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"a3.Image")));
			this->a3->Location = System::Drawing::Point(12, 268);
			this->a3->Name = L"a3";
			this->a3->Size = System::Drawing::Size(48, 60);
			this->a3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->a3->TabIndex = 11;
			this->a3->TabStop = false;
			this->a3->Tag = L"\?";
			this->a3->Click += gcnew System::EventHandler(this, &game::graj);
			// 
			// b3
			// 
			this->b3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"b3.Image")));
			this->b3->Location = System::Drawing::Point(109, 259);
			this->b3->Name = L"b3";
			this->b3->Size = System::Drawing::Size(48, 60);
			this->b3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->b3->TabIndex = 12;
			this->b3->TabStop = false;
			this->b3->Tag = L"\?";
			this->b3->Click += gcnew System::EventHandler(this, &game::graj);
			// 
			// c2
			// 
			this->c2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"c2.Image")));
			this->c2->Location = System::Drawing::Point(212, 154);
			this->c2->Name = L"c2";
			this->c2->Size = System::Drawing::Size(48, 60);
			this->c2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->c2->TabIndex = 13;
			this->c2->TabStop = false;
			this->c2->Tag = L"\?";
			this->c2->Click += gcnew System::EventHandler(this, &game::graj);
			// 
			// c3
			// 
			this->c3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"c3.Image")));
			this->c3->Location = System::Drawing::Point(212, 259);
			this->c3->Name = L"c3";
			this->c3->Size = System::Drawing::Size(48, 60);
			this->c3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->c3->TabIndex = 14;
			this->c3->TabStop = false;
			this->c3->Tag = L"\?";
			this->c3->Click += gcnew System::EventHandler(this, &game::graj);
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"kolko.png");
			this->imageList1->Images->SetKeyName(1, L"krzyzyk.png");
			this->imageList1->Images->SetKeyName(2, L"pytajnik.png");
			// 
			// game
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(284, 411);
			this->Controls->Add(this->c3);
			this->Controls->Add(this->c2);
			this->Controls->Add(this->b3);
			this->Controls->Add(this->a3);
			this->Controls->Add(this->a2);
			this->Controls->Add(this->b2);
			this->Controls->Add(this->c1);
			this->Controls->Add(this->b1);
			this->Controls->Add(this->a1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->lblLicznikO);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->lblLicznikX);
			this->Controls->Add(this->label1);
			this->Name = L"game";
			this->Text = L"game";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->a1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->b1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->c1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->b2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->a2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->a3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->b3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->c2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->c3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void graj(System::Object^  sender, System::EventArgs^  e) {
		// okodowanie klikniêcia w pytajnik

		PictureBox^ obrazek = (PictureBox^)sender;

		if (wcisniety) {
			obrazek->Image = imageList1->Images[1];
			obrazek->Tag = "X";
		}
		else {
			obrazek->Image = imageList1->Images[0];
			obrazek->Tag = "O";
		}
		wcisniety =! wcisniety;
		obrazek->Enabled = false;
		wygrana();

	}

private: Void wygrana() {
	//wygrana w poziomie
	if ((a1->Tag == b1->Tag)&&(a1->Tag == c1->Tag) && (a1 -> Tag != "?")) wygral = true;
	if ((a2->Tag == b2->Tag)&&(a2->Tag == c2->Tag) && (a2 -> Tag != "?")) wygral = true;
	if ((a3->Tag == b3->Tag)&&(a3->Tag == c3->Tag) && (a3 -> Tag != "?")) wygral = true;

	//wygrana w pionie
	if ((a1->Tag == a2->Tag)&&(a1->Tag == a3->Tag) && (a1->Tag != "?")) wygral = true;
	if ((b2->Tag == b3->Tag)&&(b1->Tag == b3->Tag) && (b2->Tag != "?")) wygral = true;
	if ((c3->Tag == c2->Tag)&&(c3->Tag == c1->Tag) && (c3->Tag != "?")) wygral = true;

	//wygrana po skosie
	if ((a1->Tag == b2->Tag)&&(a1->Tag == c3->Tag) && (a1->Tag != "?")) wygral = true;
	if ((c1->Tag == b2->Tag)&&(c1->Tag == a3->Tag) && (b2->Tag != "?")) wygral = true;
// obsluga wygranej
	if (wygral) {
		
		for each (Control^ element in this->Controls) //dla kazdej kontrolki
		{
			if(element->GetType() == PictureBox::typeid) element->Enabled = false; //zawezenie do picturebox
		}
		if (wcisniety) {
			licznikO++;
			lblLicznikO->Text = Convert::ToString(licznikO);
			mistrz = "O";
		}
		else {
			licznikX++;
			lblLicznikX->Text = Convert::ToString(licznikX);
			mistrz = "X";
		}

		MessageBox::Show("Won: "+mistrz , "Tic-tac-toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
}

		 //funkcja restartujaca plansze gry- ustawia wszystkie obrazki na pytajniki,
		 //zmienia tag na "?" aby mozna bylo sprawdzic war logiczne
		 //odblokowuje obrazki
private: Void restart() {
			 for each (Control^ element in this->Controls) //dla kazdej kontrolki
			 {
				 try {
					 PictureBox^ obrazek = (PictureBox^)element;
					 obrazek->Enabled = true;
					 obrazek->Tag = "?";
					 obrazek->Image = imageList1->Images[2];

				 }
				 catch (...) {

				 }
			 }
		 }

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	//nowa gra
	wygral = false;
	restart();
	
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		wygral = false;
		restart();
		licznikO = 0;
		licznikO = 0;
		lblLicznikO->Text = "O";
		lblLicznikX->Text = "O";
}
};
}
