#pragma once

namespace DemoLibreria {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Act1UnoAlta
	/// </summary>
	public ref class Act1UnoAlta : public System::Windows::Forms::Form
	{
	public:
		Act1UnoAlta(Form^ formAnterior)
		{
			this->formAnterior = formAnterior;
			InitializeComponent();
			this->Size = System::Drawing::Size(1050, 598);
			this->Show();
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Act1UnoAlta()
		{
			if (components)
			{
				delete components;
			}
		}
	private: bool marcaUno1 = false, marcaUno2 = false, marcaUno3 = false;
	private: bool marcaDos1 = false, marcaDos2 = false, marcaDos3 = false;
	private: bool marcaTres1 = false, marcaTres2 = false, marcaTres3 = false;
	private: bool marcaCuatro1 = false, marcaCuatro2 = false, marcaCuatro3 = false;
	private: System::Windows::Forms::Form^ formAnterior;
	private: System::Windows::Forms::Timer^  timerPantalla;
	private: System::Windows::Forms::Panel^  panelCentro;
	private: System::Windows::Forms::Panel^  panelInstruccion;
	private: System::Windows::Forms::Label^  labelInstruccion;
	private: System::Windows::Forms::PictureBox^  btnRetroceder;
	private: System::Windows::Forms::PictureBox^  btnListo;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::PictureBox^  numUno3;
	private: System::Windows::Forms::PictureBox^  numUno2;
	private: System::Windows::Forms::PictureBox^  numUno1;
	private: System::Windows::Forms::PictureBox^  pictureNum1;
	private: System::Windows::Forms::PictureBox^  numCuatro3;
	private: System::Windows::Forms::PictureBox^  numCuatro2;
	private: System::Windows::Forms::PictureBox^  numCuatro1;
	private: System::Windows::Forms::PictureBox^  numTres3;
	private: System::Windows::Forms::PictureBox^  numTres2;
	private: System::Windows::Forms::PictureBox^  numTres1;
	private: System::Windows::Forms::PictureBox^  numDos3;
	private: System::Windows::Forms::PictureBox^  numDos2;
	private: System::Windows::Forms::PictureBox^  numDos1;
	private: System::Windows::Forms::PictureBox^  pictureNum4;
	private: System::Windows::Forms::PictureBox^  pictureNum3;
	private: System::Windows::Forms::PictureBox^  pictureNum2;
	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::PictureBox^  numUno3M;
	private: System::Windows::Forms::PictureBox^  numUno2M;
	private: System::Windows::Forms::PictureBox^  numUno1M;
	private: System::Windows::Forms::PictureBox^  numDos1M;
	private: System::Windows::Forms::PictureBox^  numDos2M;
	private: System::Windows::Forms::PictureBox^  numDos3M;
	private: System::Windows::Forms::PictureBox^  numTres1M;
	private: System::Windows::Forms::PictureBox^  numTres2M;
	private: System::Windows::Forms::PictureBox^  numTres3M;
	private: System::Windows::Forms::PictureBox^  numCuatro3M;
	private: System::Windows::Forms::PictureBox^  numCuatro1M;
	private: System::Windows::Forms::PictureBox^  numCuatro2M;
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Act1UnoAlta::typeid));
			this->timerPantalla = (gcnew System::Windows::Forms::Timer(this->components));
			this->panelCentro = (gcnew System::Windows::Forms::Panel());
			this->btnRetroceder = (gcnew System::Windows::Forms::PictureBox());
			this->btnListo = (gcnew System::Windows::Forms::PictureBox());
			this->panelInstruccion = (gcnew System::Windows::Forms::Panel());
			this->labelInstruccion = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->numCuatro3M = (gcnew System::Windows::Forms::PictureBox());
			this->numCuatro1M = (gcnew System::Windows::Forms::PictureBox());
			this->numCuatro2M = (gcnew System::Windows::Forms::PictureBox());
			this->pictureNum4 = (gcnew System::Windows::Forms::PictureBox());
			this->numCuatro3 = (gcnew System::Windows::Forms::PictureBox());
			this->numCuatro1 = (gcnew System::Windows::Forms::PictureBox());
			this->numCuatro2 = (gcnew System::Windows::Forms::PictureBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->numTres1M = (gcnew System::Windows::Forms::PictureBox());
			this->numTres2M = (gcnew System::Windows::Forms::PictureBox());
			this->numTres3M = (gcnew System::Windows::Forms::PictureBox());
			this->pictureNum3 = (gcnew System::Windows::Forms::PictureBox());
			this->numTres1 = (gcnew System::Windows::Forms::PictureBox());
			this->numTres2 = (gcnew System::Windows::Forms::PictureBox());
			this->numTres3 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->numDos1M = (gcnew System::Windows::Forms::PictureBox());
			this->numDos2M = (gcnew System::Windows::Forms::PictureBox());
			this->numDos3M = (gcnew System::Windows::Forms::PictureBox());
			this->pictureNum2 = (gcnew System::Windows::Forms::PictureBox());
			this->numDos1 = (gcnew System::Windows::Forms::PictureBox());
			this->numDos2 = (gcnew System::Windows::Forms::PictureBox());
			this->numDos3 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->numUno3M = (gcnew System::Windows::Forms::PictureBox());
			this->numUno2M = (gcnew System::Windows::Forms::PictureBox());
			this->numUno1M = (gcnew System::Windows::Forms::PictureBox());
			this->numUno3 = (gcnew System::Windows::Forms::PictureBox());
			this->numUno2 = (gcnew System::Windows::Forms::PictureBox());
			this->numUno1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureNum1 = (gcnew System::Windows::Forms::PictureBox());
			this->panelCentro->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnRetroceder))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnListo))->BeginInit();
			this->panelInstruccion->SuspendLayout();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numCuatro3M))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numCuatro1M))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numCuatro2M))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureNum4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numCuatro3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numCuatro1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numCuatro2))->BeginInit();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numTres1M))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numTres2M))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numTres3M))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureNum3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numTres1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numTres2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numTres3))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numDos1M))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numDos2M))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numDos3M))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureNum2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numDos1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numDos2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numDos3))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numUno3M))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numUno2M))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numUno1M))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numUno3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numUno2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numUno1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureNum1))->BeginInit();
			this->SuspendLayout();
			// 
			// timerPantalla
			// 
			this->timerPantalla->Interval = 1;
			this->timerPantalla->Tick += gcnew System::EventHandler(this, &Act1UnoAlta::timerPantalla_Tick);
			// 
			// panelCentro
			// 
			this->panelCentro->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panelCentro.BackgroundImage")));
			this->panelCentro->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panelCentro->Controls->Add(this->btnRetroceder);
			this->panelCentro->Controls->Add(this->btnListo);
			this->panelCentro->Controls->Add(this->panelInstruccion);
			this->panelCentro->Controls->Add(this->panel4);
			this->panelCentro->Controls->Add(this->panel3);
			this->panelCentro->Controls->Add(this->panel2);
			this->panelCentro->Controls->Add(this->panel1);
			this->panelCentro->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelCentro->Location = System::Drawing::Point(0, 0);
			this->panelCentro->Name = L"panelCentro";
			this->panelCentro->Size = System::Drawing::Size(2386, 1228);
			this->panelCentro->TabIndex = 0;
			// 
			// btnRetroceder
			// 
			this->btnRetroceder->BackColor = System::Drawing::Color::Transparent;
			this->btnRetroceder->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnRetroceder.BackgroundImage")));
			this->btnRetroceder->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnRetroceder->Location = System::Drawing::Point(30, 1043);
			this->btnRetroceder->Name = L"btnRetroceder";
			this->btnRetroceder->Size = System::Drawing::Size(316, 124);
			this->btnRetroceder->TabIndex = 1;
			this->btnRetroceder->TabStop = false;
			this->btnRetroceder->Click += gcnew System::EventHandler(this, &Act1UnoAlta::btnRetroceder_Click);
			// 
			// btnListo
			// 
			this->btnListo->BackColor = System::Drawing::Color::Transparent;
			this->btnListo->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnListo.BackgroundImage")));
			this->btnListo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnListo->Location = System::Drawing::Point(2048, 1043);
			this->btnListo->Name = L"btnListo";
			this->btnListo->Size = System::Drawing::Size(316, 124);
			this->btnListo->TabIndex = 0;
			this->btnListo->TabStop = false;
			this->btnListo->Click += gcnew System::EventHandler(this, &Act1UnoAlta::btnListo_Click);
			// 
			// panelInstruccion
			// 
			this->panelInstruccion->BackColor = System::Drawing::Color::Transparent;
			this->panelInstruccion->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panelInstruccion.BackgroundImage")));
			this->panelInstruccion->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panelInstruccion->Controls->Add(this->labelInstruccion);
			this->panelInstruccion->Location = System::Drawing::Point(428, 18);
			this->panelInstruccion->Name = L"panelInstruccion";
			this->panelInstruccion->Size = System::Drawing::Size(1682, 143);
			this->panelInstruccion->TabIndex = 1;
			// 
			// labelInstruccion
			// 
			this->labelInstruccion->AutoSize = true;
			this->labelInstruccion->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelInstruccion->Location = System::Drawing::Point(314, 53);
			this->labelInstruccion->Name = L"labelInstruccion";
			this->labelInstruccion->Size = System::Drawing::Size(1093, 75);
			this->labelInstruccion->TabIndex = 0;
			this->labelInstruccion->Text = L"Presiona los números que sean mayor al indicado.";
			this->labelInstruccion->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Transparent;
			this->panel4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel4.BackgroundImage")));
			this->panel4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel4->Controls->Add(this->numCuatro3M);
			this->panel4->Controls->Add(this->numCuatro1M);
			this->panel4->Controls->Add(this->numCuatro2M);
			this->panel4->Controls->Add(this->pictureNum4);
			this->panel4->Controls->Add(this->numCuatro3);
			this->panel4->Controls->Add(this->numCuatro1);
			this->panel4->Controls->Add(this->numCuatro2);
			this->panel4->Location = System::Drawing::Point(1209, 618);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(1136, 301);
			this->panel4->TabIndex = 19;
			// 
			// numCuatro3M
			// 
			this->numCuatro3M->BackColor = System::Drawing::Color::Transparent;
			this->numCuatro3M->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"numCuatro3M.BackgroundImage")));
			this->numCuatro3M->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->numCuatro3M->Font = (gcnew System::Drawing::Font(L"Calibri", 26, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numCuatro3M->ForeColor = System::Drawing::Color::White;
			this->numCuatro3M->Location = System::Drawing::Point(860, 45);
			this->numCuatro3M->Name = L"numCuatro3M";
			this->numCuatro3M->Size = System::Drawing::Size(212, 211);
			this->numCuatro3M->TabIndex = 18;
			this->numCuatro3M->TabStop = false;
			this->numCuatro3M->Text = L"13";
			this->numCuatro3M->Visible = false;
			this->numCuatro3M->Click += gcnew System::EventHandler(this, &Act1UnoAlta::numCuatro3M_Click);
			// 
			// numCuatro1M
			// 
			this->numCuatro1M->BackColor = System::Drawing::Color::Transparent;
			this->numCuatro1M->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"numCuatro1M.BackgroundImage")));
			this->numCuatro1M->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->numCuatro1M->Font = (gcnew System::Drawing::Font(L"Calibri", 26, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numCuatro1M->ForeColor = System::Drawing::Color::White;
			this->numCuatro1M->Location = System::Drawing::Point(392, 45);
			this->numCuatro1M->Name = L"numCuatro1M";
			this->numCuatro1M->Size = System::Drawing::Size(212, 211);
			this->numCuatro1M->TabIndex = 16;
			this->numCuatro1M->TabStop = false;
			this->numCuatro1M->Text = L"15";
			this->numCuatro1M->Visible = false;
			this->numCuatro1M->Click += gcnew System::EventHandler(this, &Act1UnoAlta::numCuatro1M_Click);
			// 
			// numCuatro2M
			// 
			this->numCuatro2M->BackColor = System::Drawing::Color::Transparent;
			this->numCuatro2M->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"numCuatro2M.BackgroundImage")));
			this->numCuatro2M->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->numCuatro2M->Font = (gcnew System::Drawing::Font(L"Calibri", 26, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numCuatro2M->ForeColor = System::Drawing::Color::White;
			this->numCuatro2M->Location = System::Drawing::Point(624, 45);
			this->numCuatro2M->Name = L"numCuatro2M";
			this->numCuatro2M->Size = System::Drawing::Size(212, 211);
			this->numCuatro2M->TabIndex = 17;
			this->numCuatro2M->TabStop = false;
			this->numCuatro2M->Text = L"4";
			this->numCuatro2M->Visible = false;
			this->numCuatro2M->Click += gcnew System::EventHandler(this, &Act1UnoAlta::numCuatro2M_Click);
			// 
			// pictureNum4
			// 
			this->pictureNum4->BackColor = System::Drawing::Color::Transparent;
			this->pictureNum4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureNum4.BackgroundImage")));
			this->pictureNum4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureNum4->Location = System::Drawing::Point(101, 45);
			this->pictureNum4->Name = L"pictureNum4";
			this->pictureNum4->Size = System::Drawing::Size(222, 202);
			this->pictureNum4->TabIndex = 3;
			this->pictureNum4->TabStop = false;
			// 
			// numCuatro3
			// 
			this->numCuatro3->BackColor = System::Drawing::Color::Transparent;
			this->numCuatro3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"numCuatro3.BackgroundImage")));
			this->numCuatro3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->numCuatro3->Font = (gcnew System::Drawing::Font(L"Calibri", 26, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numCuatro3->ForeColor = System::Drawing::Color::White;
			this->numCuatro3->Location = System::Drawing::Point(860, 45);
			this->numCuatro3->Name = L"numCuatro3";
			this->numCuatro3->Size = System::Drawing::Size(212, 211);
			this->numCuatro3->TabIndex = 15;
			this->numCuatro3->TabStop = false;
			this->numCuatro3->Text = L"13";
			this->numCuatro3->Click += gcnew System::EventHandler(this, &Act1UnoAlta::numCuatro3_Click);
			// 
			// numCuatro1
			// 
			this->numCuatro1->BackColor = System::Drawing::Color::Transparent;
			this->numCuatro1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"numCuatro1.BackgroundImage")));
			this->numCuatro1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->numCuatro1->Font = (gcnew System::Drawing::Font(L"Calibri", 26, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numCuatro1->ForeColor = System::Drawing::Color::White;
			this->numCuatro1->Location = System::Drawing::Point(392, 45);
			this->numCuatro1->Name = L"numCuatro1";
			this->numCuatro1->Size = System::Drawing::Size(212, 211);
			this->numCuatro1->TabIndex = 13;
			this->numCuatro1->TabStop = false;
			this->numCuatro1->Text = L"15";
			this->numCuatro1->Click += gcnew System::EventHandler(this, &Act1UnoAlta::numCuatro1_Click);
			// 
			// numCuatro2
			// 
			this->numCuatro2->BackColor = System::Drawing::Color::Transparent;
			this->numCuatro2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"numCuatro2.BackgroundImage")));
			this->numCuatro2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->numCuatro2->Font = (gcnew System::Drawing::Font(L"Calibri", 26, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numCuatro2->ForeColor = System::Drawing::Color::White;
			this->numCuatro2->Location = System::Drawing::Point(624, 45);
			this->numCuatro2->Name = L"numCuatro2";
			this->numCuatro2->Size = System::Drawing::Size(212, 211);
			this->numCuatro2->TabIndex = 14;
			this->numCuatro2->TabStop = false;
			this->numCuatro2->Text = L"4";
			this->numCuatro2->Click += gcnew System::EventHandler(this, &Act1UnoAlta::numCuatro2_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Transparent;
			this->panel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel3.BackgroundImage")));
			this->panel3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel3->Controls->Add(this->numTres1M);
			this->panel3->Controls->Add(this->numTres2M);
			this->panel3->Controls->Add(this->numTres3M);
			this->panel3->Controls->Add(this->pictureNum3);
			this->panel3->Controls->Add(this->numTres1);
			this->panel3->Controls->Add(this->numTres2);
			this->panel3->Controls->Add(this->numTres3);
			this->panel3->Location = System::Drawing::Point(1209, 205);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1136, 301);
			this->panel3->TabIndex = 18;
			// 
			// numTres1M
			// 
			this->numTres1M->BackColor = System::Drawing::Color::Transparent;
			this->numTres1M->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"numTres1M.BackgroundImage")));
			this->numTres1M->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->numTres1M->Font = (gcnew System::Drawing::Font(L"Calibri", 26, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numTres1M->ForeColor = System::Drawing::Color::White;
			this->numTres1M->Location = System::Drawing::Point(390, 47);
			this->numTres1M->Name = L"numTres1M";
			this->numTres1M->Size = System::Drawing::Size(212, 211);
			this->numTres1M->TabIndex = 13;
			this->numTres1M->TabStop = false;
			this->numTres1M->Text = L"17";
			this->numTres1M->Visible = false;
			this->numTres1M->Click += gcnew System::EventHandler(this, &Act1UnoAlta::numTres1M_Click);
			// 
			// numTres2M
			// 
			this->numTres2M->BackColor = System::Drawing::Color::Transparent;
			this->numTres2M->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"numTres2M.BackgroundImage")));
			this->numTres2M->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->numTres2M->Font = (gcnew System::Drawing::Font(L"Calibri", 26, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numTres2M->ForeColor = System::Drawing::Color::White;
			this->numTres2M->Location = System::Drawing::Point(622, 47);
			this->numTres2M->Name = L"numTres2M";
			this->numTres2M->Size = System::Drawing::Size(212, 211);
			this->numTres2M->TabIndex = 14;
			this->numTres2M->TabStop = false;
			this->numTres2M->Text = L"13";
			this->numTres2M->Visible = false;
			this->numTres2M->Click += gcnew System::EventHandler(this, &Act1UnoAlta::numTres2M_Click);
			// 
			// numTres3M
			// 
			this->numTres3M->BackColor = System::Drawing::Color::Transparent;
			this->numTres3M->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"numTres3M.BackgroundImage")));
			this->numTres3M->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->numTres3M->Font = (gcnew System::Drawing::Font(L"Calibri", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numTres3M->ForeColor = System::Drawing::Color::White;
			this->numTres3M->Location = System::Drawing::Point(858, 47);
			this->numTres3M->Name = L"numTres3M";
			this->numTres3M->Size = System::Drawing::Size(212, 211);
			this->numTres3M->TabIndex = 15;
			this->numTres3M->TabStop = false;
			this->numTres3M->Text = L"20";
			this->numTres3M->Visible = false;
			this->numTres3M->Click += gcnew System::EventHandler(this, &Act1UnoAlta::numTres3M_Click);
			// 
			// pictureNum3
			// 
			this->pictureNum3->BackColor = System::Drawing::Color::Transparent;
			this->pictureNum3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureNum3.BackgroundImage")));
			this->pictureNum3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureNum3->Location = System::Drawing::Point(101, 47);
			this->pictureNum3->Name = L"pictureNum3";
			this->pictureNum3->Size = System::Drawing::Size(222, 202);
			this->pictureNum3->TabIndex = 2;
			this->pictureNum3->TabStop = false;
			// 
			// numTres1
			// 
			this->numTres1->BackColor = System::Drawing::Color::Transparent;
			this->numTres1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"numTres1.BackgroundImage")));
			this->numTres1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->numTres1->Font = (gcnew System::Drawing::Font(L"Calibri", 26, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numTres1->ForeColor = System::Drawing::Color::White;
			this->numTres1->Location = System::Drawing::Point(390, 47);
			this->numTres1->Name = L"numTres1";
			this->numTres1->Size = System::Drawing::Size(212, 211);
			this->numTres1->TabIndex = 10;
			this->numTres1->TabStop = false;
			this->numTres1->Text = L"17";
			this->numTres1->Click += gcnew System::EventHandler(this, &Act1UnoAlta::numTres1_Click);
			// 
			// numTres2
			// 
			this->numTres2->BackColor = System::Drawing::Color::Transparent;
			this->numTres2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"numTres2.BackgroundImage")));
			this->numTres2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->numTres2->Font = (gcnew System::Drawing::Font(L"Calibri", 26, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numTres2->ForeColor = System::Drawing::Color::White;
			this->numTres2->Location = System::Drawing::Point(622, 47);
			this->numTres2->Name = L"numTres2";
			this->numTres2->Size = System::Drawing::Size(212, 211);
			this->numTres2->TabIndex = 11;
			this->numTres2->TabStop = false;
			this->numTres2->Text = L"13";
			this->numTres2->Click += gcnew System::EventHandler(this, &Act1UnoAlta::numTres2_Click);
			// 
			// numTres3
			// 
			this->numTres3->BackColor = System::Drawing::Color::Transparent;
			this->numTres3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"numTres3.BackgroundImage")));
			this->numTres3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->numTres3->Font = (gcnew System::Drawing::Font(L"Calibri", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numTres3->ForeColor = System::Drawing::Color::White;
			this->numTres3->Location = System::Drawing::Point(858, 47);
			this->numTres3->Name = L"numTres3";
			this->numTres3->Size = System::Drawing::Size(212, 211);
			this->numTres3->TabIndex = 12;
			this->numTres3->TabStop = false;
			this->numTres3->Text = L"20";
			this->numTres3->Click += gcnew System::EventHandler(this, &Act1UnoAlta::numTres3_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Transparent;
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel2->Controls->Add(this->numDos1M);
			this->panel2->Controls->Add(this->numDos2M);
			this->panel2->Controls->Add(this->numDos3M);
			this->panel2->Controls->Add(this->pictureNum2);
			this->panel2->Controls->Add(this->numDos1);
			this->panel2->Controls->Add(this->numDos2);
			this->panel2->Controls->Add(this->numDos3);
			this->panel2->Location = System::Drawing::Point(30, 618);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1136, 301);
			this->panel2->TabIndex = 17;
			// 
			// numDos1M
			// 
			this->numDos1M->BackColor = System::Drawing::Color::Transparent;
			this->numDos1M->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"numDos1M.BackgroundImage")));
			this->numDos1M->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->numDos1M->Font = (gcnew System::Drawing::Font(L"Calibri", 26, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numDos1M->ForeColor = System::Drawing::Color::White;
			this->numDos1M->Location = System::Drawing::Point(385, 45);
			this->numDos1M->Name = L"numDos1M";
			this->numDos1M->Size = System::Drawing::Size(212, 211);
			this->numDos1M->TabIndex = 10;
			this->numDos1M->TabStop = false;
			this->numDos1M->Text = L"18";
			this->numDos1M->Visible = false;
			this->numDos1M->Click += gcnew System::EventHandler(this, &Act1UnoAlta::numDos1M_Click);
			// 
			// numDos2M
			// 
			this->numDos2M->BackColor = System::Drawing::Color::Transparent;
			this->numDos2M->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"numDos2M.BackgroundImage")));
			this->numDos2M->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->numDos2M->Font = (gcnew System::Drawing::Font(L"Calibri", 26, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numDos2M->ForeColor = System::Drawing::Color::White;
			this->numDos2M->Location = System::Drawing::Point(621, 45);
			this->numDos2M->Name = L"numDos2M";
			this->numDos2M->Size = System::Drawing::Size(212, 211);
			this->numDos2M->TabIndex = 11;
			this->numDos2M->TabStop = false;
			this->numDos2M->Text = L"10";
			this->numDos2M->Visible = false;
			this->numDos2M->Click += gcnew System::EventHandler(this, &Act1UnoAlta::numDos2M_Click);
			// 
			// numDos3M
			// 
			this->numDos3M->BackColor = System::Drawing::Color::Transparent;
			this->numDos3M->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"numDos3M.BackgroundImage")));
			this->numDos3M->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->numDos3M->Font = (gcnew System::Drawing::Font(L"Calibri", 26, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numDos3M->ForeColor = System::Drawing::Color::White;
			this->numDos3M->Location = System::Drawing::Point(852, 45);
			this->numDos3M->Name = L"numDos3M";
			this->numDos3M->Size = System::Drawing::Size(212, 211);
			this->numDos3M->TabIndex = 12;
			this->numDos3M->TabStop = false;
			this->numDos3M->Text = L"16";
			this->numDos3M->Visible = false;
			this->numDos3M->Click += gcnew System::EventHandler(this, &Act1UnoAlta::numDos3M_Click);
			// 
			// pictureNum2
			// 
			this->pictureNum2->BackColor = System::Drawing::Color::Transparent;
			this->pictureNum2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureNum2.BackgroundImage")));
			this->pictureNum2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureNum2->Location = System::Drawing::Point(100, 45);
			this->pictureNum2->Name = L"pictureNum2";
			this->pictureNum2->Size = System::Drawing::Size(222, 202);
			this->pictureNum2->TabIndex = 1;
			this->pictureNum2->TabStop = false;
			// 
			// numDos1
			// 
			this->numDos1->BackColor = System::Drawing::Color::Transparent;
			this->numDos1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"numDos1.BackgroundImage")));
			this->numDos1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->numDos1->Font = (gcnew System::Drawing::Font(L"Calibri", 26, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numDos1->ForeColor = System::Drawing::Color::White;
			this->numDos1->Location = System::Drawing::Point(385, 45);
			this->numDos1->Name = L"numDos1";
			this->numDos1->Size = System::Drawing::Size(212, 211);
			this->numDos1->TabIndex = 7;
			this->numDos1->TabStop = false;
			this->numDos1->Text = L"18";
			this->numDos1->Click += gcnew System::EventHandler(this, &Act1UnoAlta::numDos1_Click);
			// 
			// numDos2
			// 
			this->numDos2->BackColor = System::Drawing::Color::Transparent;
			this->numDos2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"numDos2.BackgroundImage")));
			this->numDos2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->numDos2->Font = (gcnew System::Drawing::Font(L"Calibri", 26, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numDos2->ForeColor = System::Drawing::Color::White;
			this->numDos2->Location = System::Drawing::Point(621, 45);
			this->numDos2->Name = L"numDos2";
			this->numDos2->Size = System::Drawing::Size(212, 211);
			this->numDos2->TabIndex = 8;
			this->numDos2->TabStop = false;
			this->numDos2->Text = L"10";
			this->numDos2->Click += gcnew System::EventHandler(this, &Act1UnoAlta::numDos2_Click);
			// 
			// numDos3
			// 
			this->numDos3->BackColor = System::Drawing::Color::Transparent;
			this->numDos3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"numDos3.BackgroundImage")));
			this->numDos3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->numDos3->Font = (gcnew System::Drawing::Font(L"Calibri", 26, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numDos3->ForeColor = System::Drawing::Color::White;
			this->numDos3->Location = System::Drawing::Point(852, 45);
			this->numDos3->Name = L"numDos3";
			this->numDos3->Size = System::Drawing::Size(212, 211);
			this->numDos3->TabIndex = 9;
			this->numDos3->TabStop = false;
			this->numDos3->Text = L"16";
			this->numDos3->Click += gcnew System::EventHandler(this, &Act1UnoAlta::numDos3_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->numUno3M);
			this->panel1->Controls->Add(this->numUno2M);
			this->panel1->Controls->Add(this->numUno1M);
			this->panel1->Controls->Add(this->numUno3);
			this->panel1->Controls->Add(this->numUno2);
			this->panel1->Controls->Add(this->numUno1);
			this->panel1->Controls->Add(this->pictureNum1);
			this->panel1->Location = System::Drawing::Point(30, 205);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1136, 301);
			this->panel1->TabIndex = 16;
			// 
			// numUno3M
			// 
			this->numUno3M->BackColor = System::Drawing::Color::Transparent;
			this->numUno3M->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"numUno3M.BackgroundImage")));
			this->numUno3M->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->numUno3M->Font = (gcnew System::Drawing::Font(L"Calibri", 26, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numUno3M->ForeColor = System::Drawing::Color::White;
			this->numUno3M->Location = System::Drawing::Point(852, 45);
			this->numUno3M->Name = L"numUno3M";
			this->numUno3M->Size = System::Drawing::Size(212, 211);
			this->numUno3M->TabIndex = 9;
			this->numUno3M->TabStop = false;
			this->numUno3M->Visible = false;
			this->numUno3M->Click += gcnew System::EventHandler(this, &Act1UnoAlta::numUno3M_Click);
			// 
			// numUno2M
			// 
			this->numUno2M->BackColor = System::Drawing::Color::Transparent;
			this->numUno2M->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"numUno2M.BackgroundImage")));
			this->numUno2M->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->numUno2M->Font = (gcnew System::Drawing::Font(L"Calibri", 26, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numUno2M->ForeColor = System::Drawing::Color::White;
			this->numUno2M->Location = System::Drawing::Point(621, 45);
			this->numUno2M->Name = L"numUno2M";
			this->numUno2M->Size = System::Drawing::Size(212, 211);
			this->numUno2M->TabIndex = 8;
			this->numUno2M->TabStop = false;
			this->numUno2M->Visible = false;
			this->numUno2M->Click += gcnew System::EventHandler(this, &Act1UnoAlta::numUno2M_Click);
			// 
			// numUno1M
			// 
			this->numUno1M->BackColor = System::Drawing::Color::Transparent;
			this->numUno1M->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"numUno1M.BackgroundImage")));
			this->numUno1M->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->numUno1M->Font = (gcnew System::Drawing::Font(L"Calibri", 26, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numUno1M->ForeColor = System::Drawing::Color::White;
			this->numUno1M->Location = System::Drawing::Point(385, 45);
			this->numUno1M->Name = L"numUno1M";
			this->numUno1M->Size = System::Drawing::Size(212, 211);
			this->numUno1M->TabIndex = 7;
			this->numUno1M->TabStop = false;
			this->numUno1M->Visible = false;
			this->numUno1M->Click += gcnew System::EventHandler(this, &Act1UnoAlta::numUno1M_Click);
			// 
			// numUno3
			// 
			this->numUno3->BackColor = System::Drawing::Color::Transparent;
			this->numUno3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"numUno3.BackgroundImage")));
			this->numUno3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->numUno3->Font = (gcnew System::Drawing::Font(L"Calibri", 26, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numUno3->ForeColor = System::Drawing::Color::White;
			this->numUno3->Location = System::Drawing::Point(852, 45);
			this->numUno3->Name = L"numUno3";
			this->numUno3->Size = System::Drawing::Size(212, 211);
			this->numUno3->TabIndex = 6;
			this->numUno3->TabStop = false;
			this->numUno3->Click += gcnew System::EventHandler(this, &Act1UnoAlta::numUno3_Click);
			// 
			// numUno2
			// 
			this->numUno2->BackColor = System::Drawing::Color::Transparent;
			this->numUno2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"numUno2.BackgroundImage")));
			this->numUno2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->numUno2->Font = (gcnew System::Drawing::Font(L"Calibri", 26, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numUno2->ForeColor = System::Drawing::Color::White;
			this->numUno2->Location = System::Drawing::Point(621, 45);
			this->numUno2->Name = L"numUno2";
			this->numUno2->Size = System::Drawing::Size(212, 211);
			this->numUno2->TabIndex = 5;
			this->numUno2->TabStop = false;
			this->numUno2->Click += gcnew System::EventHandler(this, &Act1UnoAlta::numUno2_Click);
			// 
			// numUno1
			// 
			this->numUno1->BackColor = System::Drawing::Color::Transparent;
			this->numUno1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"numUno1.BackgroundImage")));
			this->numUno1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->numUno1->Font = (gcnew System::Drawing::Font(L"Calibri", 26, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numUno1->ForeColor = System::Drawing::Color::White;
			this->numUno1->Location = System::Drawing::Point(385, 45);
			this->numUno1->Name = L"numUno1";
			this->numUno1->Size = System::Drawing::Size(212, 211);
			this->numUno1->TabIndex = 4;
			this->numUno1->TabStop = false;
			this->numUno1->Click += gcnew System::EventHandler(this, &Act1UnoAlta::numUno1_Click);
			// 
			// pictureNum1
			// 
			this->pictureNum1->BackColor = System::Drawing::Color::Transparent;
			this->pictureNum1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureNum1.BackgroundImage")));
			this->pictureNum1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureNum1->Location = System::Drawing::Point(100, 47);
			this->pictureNum1->Name = L"pictureNum1";
			this->pictureNum1->Size = System::Drawing::Size(222, 202);
			this->pictureNum1->TabIndex = 0;
			this->pictureNum1->TabStop = false;
			// 
			// Act1UnoAlta
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(14, 29);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(2386, 1228);
			this->Controls->Add(this->panelCentro);
			this->Name = L"Act1UnoAlta";
			this->Opacity = 0;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Act1UnoAlta";
			this->Activated += gcnew System::EventHandler(this, &Act1UnoAlta::Act1UnoAlta_Activated);
			this->Deactivate += gcnew System::EventHandler(this, &Act1UnoAlta::Act1UnoAlta_Deactivate);
			this->Load += gcnew System::EventHandler(this, &Act1UnoAlta::Act1UnoAlta_Load);
			this->panelCentro->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnRetroceder))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnListo))->EndInit();
			this->panelInstruccion->ResumeLayout(false);
			this->panelInstruccion->PerformLayout();
			this->panel4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numCuatro3M))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numCuatro1M))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numCuatro2M))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureNum4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numCuatro3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numCuatro1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numCuatro2))->EndInit();
			this->panel3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numTres1M))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numTres2M))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numTres3M))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureNum3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numTres1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numTres2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numTres3))->EndInit();
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numDos1M))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numDos2M))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numDos3M))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureNum2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numDos1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numDos2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numDos3))->EndInit();
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numUno3M))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numUno2M))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numUno1M))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numUno3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numUno2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numUno1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureNum1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		private: System::Void timerPantalla_Tick(System::Object^  sender, System::EventArgs^  e);
		private: System::Void Act1UnoAlta_Load(System::Object^  sender, System::EventArgs^  e);
		private: System::Void Act1UnoAlta_Activated(System::Object^  sender, System::EventArgs^  e);
		private: System::Void Act1UnoAlta_Deactivate(System::Object^  sender, System::EventArgs^  e);
		private: System::Void btnRetroceder_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void btnListo_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void numUno1_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void numUno2_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void numUno3_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void numDos1_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void numDos2_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void numDos3_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void numTres1_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void numTres2_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void numTres3_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void numCuatro1_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void numCuatro2_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void numCuatro3_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void numUno1M_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void numUno2M_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void numUno3M_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void numDos1M_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void numDos2M_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void numDos3M_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void numTres1M_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void numTres2M_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void numTres3M_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void numCuatro1M_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void numCuatro2M_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void numCuatro3M_Click(System::Object^  sender, System::EventArgs^  e);
	};
}
