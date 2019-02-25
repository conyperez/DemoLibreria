#pragma once

namespace DemoLibreria {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Act1DosAlta
	/// </summary>
	public ref class Act1DosAlta : public System::Windows::Forms::Form
	{
	public:
		Act1DosAlta(Form^ formAnterior)
		{
			this->formAnterior = formAnterior;
			InitializeComponent();
			inicializarPosicion();
			this->Size = System::Drawing::Size(1050, 598);
			this->Show();
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Act1DosAlta()
		{
			if (components)
			{
				delete components;
			}
		}
	private: int posicionBtnUno = 0, posicionBtnDos = 0, posicionBtnTres = 0, posicionBtnCuatro = 0;
	private: int contadorUno = 0, contadorDos = 0, contadorTres = 0, contadorCuatro = 0;
	private: bool listoBtnUno = false, listoBtnDos = false, listoBtnTres = false, listoBtnCuatro = false;
	private: bool btnPresionado = false;
	private: int posMouseFormX, posMouseFormY, posMouseBtnX, posMouseBtnY, posActBtnX, posActBtnY;
	private: int xBtnUno, yBtnUno, xBtnDos, yBtnDos, xBtnTres, yBtnTres, xBtnCuatro, yBtnCuatro;
	private: System::Windows::Forms::Form^ formAnterior;
	private: System::Windows::Forms::Timer^  timerPantalla;
	private: System::Windows::Forms::Panel^  panelCentro;
	private: System::Windows::Forms::Panel^  panelInstruccion;

	private: System::Windows::Forms::Label^  labelInstruccion;
	private: System::Windows::Forms::Label^  labelInstruccion2;
	private: System::Windows::Forms::PictureBox^  btnRetroceder;
	private: System::Windows::Forms::PictureBox^  btnListo;
	private: System::Windows::Forms::Button^  btnCuatro20;
	private: System::Windows::Forms::Button^  btnCuatro19;
	private: System::Windows::Forms::Button^  btnCuatro18;
	private: System::Windows::Forms::Button^  btnCuatro17;
	private: System::Windows::Forms::Button^  btnCuatro16;
	private: System::Windows::Forms::Button^  btnCuatro15;
	private: System::Windows::Forms::Button^  btnCuatro14;
	private: System::Windows::Forms::Button^  btnCuatro13;
	private: System::Windows::Forms::Button^  btnCuatro12;
	private: System::Windows::Forms::Button^  btnCuatro11;
	private: System::Windows::Forms::Button^  btnCuatro10;
	private: System::Windows::Forms::Button^  btnCuatro9;
	private: System::Windows::Forms::Button^  btnCuatro8;
	private: System::Windows::Forms::Button^  btnCuatro7;
	private: System::Windows::Forms::Button^  btnCuatro6;
	private: System::Windows::Forms::Button^  btnCuatro5;
	private: System::Windows::Forms::Button^  btnCuatro4;
	private: System::Windows::Forms::Button^  btnCuatro3;
	private: System::Windows::Forms::Button^  btnCuatro2;
	private: System::Windows::Forms::Button^  btnCuatro1;
	private: System::Windows::Forms::Button^  btnTres20;
	private: System::Windows::Forms::Button^  btnTres19;
	private: System::Windows::Forms::Button^  btnTres18;
	private: System::Windows::Forms::Button^  btnTres17;
	private: System::Windows::Forms::Button^  btnTres16;
	private: System::Windows::Forms::Button^  btnTres15;
	private: System::Windows::Forms::Button^  btnTres14;
	private: System::Windows::Forms::Button^  btnTres13;
	private: System::Windows::Forms::Button^  btnTres12;
	private: System::Windows::Forms::Button^  btnTres11;
	private: System::Windows::Forms::Button^  btnTres10;
	private: System::Windows::Forms::Button^  btnTres9;
	private: System::Windows::Forms::Button^  btnTres8;
	private: System::Windows::Forms::Button^  btnTres7;
	private: System::Windows::Forms::Button^  btnTres6;
	private: System::Windows::Forms::Button^  btnTres5;
	private: System::Windows::Forms::Button^  btnTres4;
	private: System::Windows::Forms::Button^  btnTres3;
	private: System::Windows::Forms::Button^  btnTres2;
	private: System::Windows::Forms::Button^  btnTres1;
	private: System::Windows::Forms::Button^  btnDos20;
	private: System::Windows::Forms::Button^  btnDos19;
	private: System::Windows::Forms::Button^  btnDos18;
	private: System::Windows::Forms::Button^  btnDos17;
	private: System::Windows::Forms::Button^  btnDos16;
	private: System::Windows::Forms::Button^  btnDos15;
	private: System::Windows::Forms::Button^  btnDos14;
	private: System::Windows::Forms::Button^  btnDos13;
	private: System::Windows::Forms::Button^  btnDos12;
	private: System::Windows::Forms::Button^  btnDos11;
	private: System::Windows::Forms::Button^  btnDos10;
	private: System::Windows::Forms::Button^  btnDos9;
	private: System::Windows::Forms::Button^  btnDos8;
	private: System::Windows::Forms::Button^  btnDos7;
	private: System::Windows::Forms::Button^  btnDos6;
	private: System::Windows::Forms::Button^  btnDos5;
	private: System::Windows::Forms::Button^  btnDos4;
	private: System::Windows::Forms::Button^  btnDos3;
	private: System::Windows::Forms::Button^  btnDos2;
	private: System::Windows::Forms::Button^  btnDos1;
	private: System::Windows::Forms::Button^  btnUno20;
	private: System::Windows::Forms::Button^  btnUno19;
	private: System::Windows::Forms::Button^  btnUno18;
	private: System::Windows::Forms::Button^  btnUno17;
	private: System::Windows::Forms::Button^  btnUno16;
	private: System::Windows::Forms::Button^  btnUno15;
	private: System::Windows::Forms::Button^  btnUno14;
	private: System::Windows::Forms::Button^  btnUno13;
	private: System::Windows::Forms::Button^  btnUno12;
	private: System::Windows::Forms::Button^  btnUno11;
	private: System::Windows::Forms::Button^  btnUno10;
	private: System::Windows::Forms::Button^  btnUno9;
	private: System::Windows::Forms::Button^  btnUno8;
	private: System::Windows::Forms::Button^  btnUno7;
	private: System::Windows::Forms::Button^  btnUno6;
	private: System::Windows::Forms::Button^  btnUno5;
	private: System::Windows::Forms::Button^  btnUno4;
	private: System::Windows::Forms::Button^  btnUno3;
	private: System::Windows::Forms::Button^  btnUno2;
	private: System::Windows::Forms::Button^  btnUno1;
private: System::Windows::Forms::Button^  btnCuatro;

private: System::Windows::Forms::Button^  btnTres;

private: System::Windows::Forms::Button^  btnDos;

private: System::Windows::Forms::Button^  btnUno;

	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Panel^  panel1;
private: System::Windows::Forms::Panel^  panel5;
private: System::Windows::Forms::Label^  label3;
private: System::Windows::Forms::Label^  label2;
private: System::Windows::Forms::Label^  label1;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Act1DosAlta::typeid));
			this->timerPantalla = (gcnew System::Windows::Forms::Timer(this->components));
			this->panelCentro = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->btnRetroceder = (gcnew System::Windows::Forms::PictureBox());
			this->btnListo = (gcnew System::Windows::Forms::PictureBox());
			this->btnCuatro20 = (gcnew System::Windows::Forms::Button());
			this->btnCuatro19 = (gcnew System::Windows::Forms::Button());
			this->panelInstruccion = (gcnew System::Windows::Forms::Panel());
			this->labelInstruccion2 = (gcnew System::Windows::Forms::Label());
			this->labelInstruccion = (gcnew System::Windows::Forms::Label());
			this->btnCuatro18 = (gcnew System::Windows::Forms::Button());
			this->btnCuatro17 = (gcnew System::Windows::Forms::Button());
			this->btnCuatro16 = (gcnew System::Windows::Forms::Button());
			this->btnCuatro15 = (gcnew System::Windows::Forms::Button());
			this->btnCuatro14 = (gcnew System::Windows::Forms::Button());
			this->btnCuatro13 = (gcnew System::Windows::Forms::Button());
			this->btnCuatro12 = (gcnew System::Windows::Forms::Button());
			this->btnCuatro11 = (gcnew System::Windows::Forms::Button());
			this->btnCuatro10 = (gcnew System::Windows::Forms::Button());
			this->btnCuatro9 = (gcnew System::Windows::Forms::Button());
			this->btnCuatro8 = (gcnew System::Windows::Forms::Button());
			this->btnCuatro7 = (gcnew System::Windows::Forms::Button());
			this->btnCuatro6 = (gcnew System::Windows::Forms::Button());
			this->btnCuatro5 = (gcnew System::Windows::Forms::Button());
			this->btnCuatro4 = (gcnew System::Windows::Forms::Button());
			this->btnCuatro3 = (gcnew System::Windows::Forms::Button());
			this->btnCuatro2 = (gcnew System::Windows::Forms::Button());
			this->btnCuatro1 = (gcnew System::Windows::Forms::Button());
			this->btnTres20 = (gcnew System::Windows::Forms::Button());
			this->btnTres19 = (gcnew System::Windows::Forms::Button());
			this->btnTres18 = (gcnew System::Windows::Forms::Button());
			this->btnTres17 = (gcnew System::Windows::Forms::Button());
			this->btnTres16 = (gcnew System::Windows::Forms::Button());
			this->btnTres15 = (gcnew System::Windows::Forms::Button());
			this->btnTres14 = (gcnew System::Windows::Forms::Button());
			this->btnTres13 = (gcnew System::Windows::Forms::Button());
			this->btnTres12 = (gcnew System::Windows::Forms::Button());
			this->btnTres11 = (gcnew System::Windows::Forms::Button());
			this->btnTres10 = (gcnew System::Windows::Forms::Button());
			this->btnTres9 = (gcnew System::Windows::Forms::Button());
			this->btnTres8 = (gcnew System::Windows::Forms::Button());
			this->btnTres7 = (gcnew System::Windows::Forms::Button());
			this->btnTres6 = (gcnew System::Windows::Forms::Button());
			this->btnTres5 = (gcnew System::Windows::Forms::Button());
			this->btnTres4 = (gcnew System::Windows::Forms::Button());
			this->btnTres3 = (gcnew System::Windows::Forms::Button());
			this->btnTres2 = (gcnew System::Windows::Forms::Button());
			this->btnTres1 = (gcnew System::Windows::Forms::Button());
			this->btnDos20 = (gcnew System::Windows::Forms::Button());
			this->btnDos19 = (gcnew System::Windows::Forms::Button());
			this->btnDos18 = (gcnew System::Windows::Forms::Button());
			this->btnDos17 = (gcnew System::Windows::Forms::Button());
			this->btnDos16 = (gcnew System::Windows::Forms::Button());
			this->btnDos15 = (gcnew System::Windows::Forms::Button());
			this->btnDos14 = (gcnew System::Windows::Forms::Button());
			this->btnDos13 = (gcnew System::Windows::Forms::Button());
			this->btnDos12 = (gcnew System::Windows::Forms::Button());
			this->btnDos11 = (gcnew System::Windows::Forms::Button());
			this->btnDos10 = (gcnew System::Windows::Forms::Button());
			this->btnDos9 = (gcnew System::Windows::Forms::Button());
			this->btnDos8 = (gcnew System::Windows::Forms::Button());
			this->btnDos7 = (gcnew System::Windows::Forms::Button());
			this->btnDos6 = (gcnew System::Windows::Forms::Button());
			this->btnDos5 = (gcnew System::Windows::Forms::Button());
			this->btnDos4 = (gcnew System::Windows::Forms::Button());
			this->btnDos3 = (gcnew System::Windows::Forms::Button());
			this->btnDos2 = (gcnew System::Windows::Forms::Button());
			this->btnDos1 = (gcnew System::Windows::Forms::Button());
			this->btnUno20 = (gcnew System::Windows::Forms::Button());
			this->btnUno19 = (gcnew System::Windows::Forms::Button());
			this->btnUno18 = (gcnew System::Windows::Forms::Button());
			this->btnUno17 = (gcnew System::Windows::Forms::Button());
			this->btnUno16 = (gcnew System::Windows::Forms::Button());
			this->btnUno15 = (gcnew System::Windows::Forms::Button());
			this->btnUno14 = (gcnew System::Windows::Forms::Button());
			this->btnUno13 = (gcnew System::Windows::Forms::Button());
			this->btnUno12 = (gcnew System::Windows::Forms::Button());
			this->btnUno11 = (gcnew System::Windows::Forms::Button());
			this->btnUno10 = (gcnew System::Windows::Forms::Button());
			this->btnUno9 = (gcnew System::Windows::Forms::Button());
			this->btnUno8 = (gcnew System::Windows::Forms::Button());
			this->btnUno7 = (gcnew System::Windows::Forms::Button());
			this->btnUno6 = (gcnew System::Windows::Forms::Button());
			this->btnUno5 = (gcnew System::Windows::Forms::Button());
			this->btnUno4 = (gcnew System::Windows::Forms::Button());
			this->btnUno3 = (gcnew System::Windows::Forms::Button());
			this->btnUno2 = (gcnew System::Windows::Forms::Button());
			this->btnUno1 = (gcnew System::Windows::Forms::Button());
			this->btnCuatro = (gcnew System::Windows::Forms::Button());
			this->btnTres = (gcnew System::Windows::Forms::Button());
			this->btnDos = (gcnew System::Windows::Forms::Button());
			this->btnUno = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panelCentro->SuspendLayout();
			this->panel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnRetroceder))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnListo))->BeginInit();
			this->panelInstruccion->SuspendLayout();
			this->SuspendLayout();
			// 
			// timerPantalla
			// 
			this->timerPantalla->Interval = 1;
			this->timerPantalla->Tick += gcnew System::EventHandler(this, &Act1DosAlta::timerPantalla_Tick);
			// 
			// panelCentro
			// 
			this->panelCentro->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panelCentro.BackgroundImage")));
			this->panelCentro->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panelCentro->Controls->Add(this->panel5);
			this->panelCentro->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelCentro->Location = System::Drawing::Point(0, 0);
			this->panelCentro->Name = L"panelCentro";
			this->panelCentro->Size = System::Drawing::Size(2386, 1228);
			this->panelCentro->TabIndex = 0;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::Transparent;
			this->panel5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel5.BackgroundImage")));
			this->panel5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel5->Controls->Add(this->btnRetroceder);
			this->panel5->Controls->Add(this->btnListo);
			this->panel5->Controls->Add(this->btnCuatro20);
			this->panel5->Controls->Add(this->btnCuatro19);
			this->panel5->Controls->Add(this->panelInstruccion);
			this->panel5->Controls->Add(this->btnCuatro18);
			this->panel5->Controls->Add(this->btnCuatro17);
			this->panel5->Controls->Add(this->btnCuatro16);
			this->panel5->Controls->Add(this->btnCuatro15);
			this->panel5->Controls->Add(this->btnCuatro14);
			this->panel5->Controls->Add(this->btnCuatro13);
			this->panel5->Controls->Add(this->btnCuatro12);
			this->panel5->Controls->Add(this->btnCuatro11);
			this->panel5->Controls->Add(this->btnCuatro10);
			this->panel5->Controls->Add(this->btnCuatro9);
			this->panel5->Controls->Add(this->btnCuatro8);
			this->panel5->Controls->Add(this->btnCuatro7);
			this->panel5->Controls->Add(this->btnCuatro6);
			this->panel5->Controls->Add(this->btnCuatro5);
			this->panel5->Controls->Add(this->btnCuatro4);
			this->panel5->Controls->Add(this->btnCuatro3);
			this->panel5->Controls->Add(this->btnCuatro2);
			this->panel5->Controls->Add(this->btnCuatro1);
			this->panel5->Controls->Add(this->btnTres20);
			this->panel5->Controls->Add(this->btnTres19);
			this->panel5->Controls->Add(this->btnTres18);
			this->panel5->Controls->Add(this->btnTres17);
			this->panel5->Controls->Add(this->btnTres16);
			this->panel5->Controls->Add(this->btnTres15);
			this->panel5->Controls->Add(this->btnTres14);
			this->panel5->Controls->Add(this->btnTres13);
			this->panel5->Controls->Add(this->btnTres12);
			this->panel5->Controls->Add(this->btnTres11);
			this->panel5->Controls->Add(this->btnTres10);
			this->panel5->Controls->Add(this->btnTres9);
			this->panel5->Controls->Add(this->btnTres8);
			this->panel5->Controls->Add(this->btnTres7);
			this->panel5->Controls->Add(this->btnTres6);
			this->panel5->Controls->Add(this->btnTres5);
			this->panel5->Controls->Add(this->btnTres4);
			this->panel5->Controls->Add(this->btnTres3);
			this->panel5->Controls->Add(this->btnTres2);
			this->panel5->Controls->Add(this->btnTres1);
			this->panel5->Controls->Add(this->btnDos20);
			this->panel5->Controls->Add(this->btnDos19);
			this->panel5->Controls->Add(this->btnDos18);
			this->panel5->Controls->Add(this->btnDos17);
			this->panel5->Controls->Add(this->btnDos16);
			this->panel5->Controls->Add(this->btnDos15);
			this->panel5->Controls->Add(this->btnDos14);
			this->panel5->Controls->Add(this->btnDos13);
			this->panel5->Controls->Add(this->btnDos12);
			this->panel5->Controls->Add(this->btnDos11);
			this->panel5->Controls->Add(this->btnDos10);
			this->panel5->Controls->Add(this->btnDos9);
			this->panel5->Controls->Add(this->btnDos8);
			this->panel5->Controls->Add(this->btnDos7);
			this->panel5->Controls->Add(this->btnDos6);
			this->panel5->Controls->Add(this->btnDos5);
			this->panel5->Controls->Add(this->btnDos4);
			this->panel5->Controls->Add(this->btnDos3);
			this->panel5->Controls->Add(this->btnDos2);
			this->panel5->Controls->Add(this->btnDos1);
			this->panel5->Controls->Add(this->btnUno20);
			this->panel5->Controls->Add(this->btnUno19);
			this->panel5->Controls->Add(this->btnUno18);
			this->panel5->Controls->Add(this->btnUno17);
			this->panel5->Controls->Add(this->btnUno16);
			this->panel5->Controls->Add(this->btnUno15);
			this->panel5->Controls->Add(this->btnUno14);
			this->panel5->Controls->Add(this->btnUno13);
			this->panel5->Controls->Add(this->btnUno12);
			this->panel5->Controls->Add(this->btnUno11);
			this->panel5->Controls->Add(this->btnUno10);
			this->panel5->Controls->Add(this->btnUno9);
			this->panel5->Controls->Add(this->btnUno8);
			this->panel5->Controls->Add(this->btnUno7);
			this->panel5->Controls->Add(this->btnUno6);
			this->panel5->Controls->Add(this->btnUno5);
			this->panel5->Controls->Add(this->btnUno4);
			this->panel5->Controls->Add(this->btnUno3);
			this->panel5->Controls->Add(this->btnUno2);
			this->panel5->Controls->Add(this->btnUno1);
			this->panel5->Controls->Add(this->btnCuatro);
			this->panel5->Controls->Add(this->btnTres);
			this->panel5->Controls->Add(this->btnDos);
			this->panel5->Controls->Add(this->btnUno);
			this->panel5->Controls->Add(this->panel4);
			this->panel5->Controls->Add(this->panel3);
			this->panel5->Controls->Add(this->panel2);
			this->panel5->Controls->Add(this->panel1);
			this->panel5->Controls->Add(this->label3);
			this->panel5->Controls->Add(this->label2);
			this->panel5->Controls->Add(this->label1);
			this->panel5->Location = System::Drawing::Point(12, 3);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(2362, 1195);
			this->panel5->TabIndex = 87;
			// 
			// btnRetroceder
			// 
			this->btnRetroceder->BackColor = System::Drawing::Color::Transparent;
			this->btnRetroceder->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnRetroceder.BackgroundImage")));
			this->btnRetroceder->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnRetroceder->Location = System::Drawing::Point(124, 1000);
			this->btnRetroceder->Name = L"btnRetroceder";
			this->btnRetroceder->Size = System::Drawing::Size(316, 124);
			this->btnRetroceder->TabIndex = 1;
			this->btnRetroceder->TabStop = false;
			this->btnRetroceder->Click += gcnew System::EventHandler(this, &Act1DosAlta::btnRetroceder_Click);
			// 
			// btnListo
			// 
			this->btnListo->BackColor = System::Drawing::Color::Transparent;
			this->btnListo->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnListo.BackgroundImage")));
			this->btnListo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnListo->Location = System::Drawing::Point(1992, 985);
			this->btnListo->Name = L"btnListo";
			this->btnListo->Size = System::Drawing::Size(316, 124);
			this->btnListo->TabIndex = 0;
			this->btnListo->TabStop = false;
			this->btnListo->Visible = false;
			this->btnListo->Click += gcnew System::EventHandler(this, &Act1DosAlta::btnListo_Click);
			// 
			// btnCuatro20
			// 
			this->btnCuatro20->BackColor = System::Drawing::Color::White;
			this->btnCuatro20->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnCuatro20->Location = System::Drawing::Point(2194, 677);
			this->btnCuatro20->Name = L"btnCuatro20";
			this->btnCuatro20->Size = System::Drawing::Size(77, 72);
			this->btnCuatro20->TabIndex = 86;
			this->btnCuatro20->UseVisualStyleBackColor = false;
			this->btnCuatro20->Click += gcnew System::EventHandler(this, &Act1DosAlta::btnCuatro20_Click);
			// 
			// btnCuatro19
			// 
			this->btnCuatro19->BackColor = System::Drawing::Color::White;
			this->btnCuatro19->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnCuatro19->Location = System::Drawing::Point(2118, 677);
			this->btnCuatro19->Name = L"btnCuatro19";
			this->btnCuatro19->Size = System::Drawing::Size(77, 72);
			this->btnCuatro19->TabIndex = 85;
			this->btnCuatro19->UseVisualStyleBackColor = false;
			this->btnCuatro19->Click += gcnew System::EventHandler(this, &Act1DosAlta::btnCuatro19_Click);
			// 
			// panelInstruccion
			// 
			this->panelInstruccion->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panelInstruccion.BackgroundImage")));
			this->panelInstruccion->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panelInstruccion->Controls->Add(this->labelInstruccion2);
			this->panelInstruccion->Controls->Add(this->labelInstruccion);
			this->panelInstruccion->Location = System::Drawing::Point(332, 25);
			this->panelInstruccion->Name = L"panelInstruccion";
			this->panelInstruccion->Size = System::Drawing::Size(1749, 175);
			this->panelInstruccion->TabIndex = 1;
			// 
			// labelInstruccion2
			// 
			this->labelInstruccion2->AutoSize = true;
			this->labelInstruccion2->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelInstruccion2->Location = System::Drawing::Point(166, 90);
			this->labelInstruccion2->Name = L"labelInstruccion2";
			this->labelInstruccion2->Size = System::Drawing::Size(1439, 75);
			this->labelInstruccion2->TabIndex = 1;
			this->labelInstruccion2->Text = L"Luego, arrastra cada número para ordenarlos de mayor a menor.";
			this->labelInstruccion2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelInstruccion
			// 
			this->labelInstruccion->AutoSize = true;
			this->labelInstruccion->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelInstruccion->Location = System::Drawing::Point(205, 34);
			this->labelInstruccion->Name = L"labelInstruccion";
			this->labelInstruccion->Size = System::Drawing::Size(1071, 75);
			this->labelInstruccion->TabIndex = 0;
			this->labelInstruccion->Text = L"Marca los recuadros, según la cantidad indicada.";
			this->labelInstruccion->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btnCuatro18
			// 
			this->btnCuatro18->BackColor = System::Drawing::Color::White;
			this->btnCuatro18->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnCuatro18->Location = System::Drawing::Point(2042, 677);
			this->btnCuatro18->Name = L"btnCuatro18";
			this->btnCuatro18->Size = System::Drawing::Size(77, 72);
			this->btnCuatro18->TabIndex = 84;
			this->btnCuatro18->UseVisualStyleBackColor = false;
			this->btnCuatro18->Click += gcnew System::EventHandler(this, &Act1DosAlta::btnCuatro18_Click);
			// 
			// btnCuatro17
			// 
			this->btnCuatro17->BackColor = System::Drawing::Color::White;
			this->btnCuatro17->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnCuatro17->Location = System::Drawing::Point(1966, 677);
			this->btnCuatro17->Name = L"btnCuatro17";
			this->btnCuatro17->Size = System::Drawing::Size(77, 72);
			this->btnCuatro17->TabIndex = 83;
			this->btnCuatro17->UseVisualStyleBackColor = false;
			this->btnCuatro17->Click += gcnew System::EventHandler(this, &Act1DosAlta::btnCuatro17_Click);
			// 
			// btnCuatro16
			// 
			this->btnCuatro16->BackColor = System::Drawing::Color::White;
			this->btnCuatro16->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnCuatro16->Location = System::Drawing::Point(1890, 677);
			this->btnCuatro16->Name = L"btnCuatro16";
			this->btnCuatro16->Size = System::Drawing::Size(77, 72);
			this->btnCuatro16->TabIndex = 82;
			this->btnCuatro16->UseVisualStyleBackColor = false;
			this->btnCuatro16->Click += gcnew System::EventHandler(this, &Act1DosAlta::btnCuatro16_Click);
			// 
			// btnCuatro15
			// 
			this->btnCuatro15->BackColor = System::Drawing::Color::White;
			this->btnCuatro15->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnCuatro15->Location = System::Drawing::Point(1814, 677);
			this->btnCuatro15->Name = L"btnCuatro15";
			this->btnCuatro15->Size = System::Drawing::Size(77, 72);
			this->btnCuatro15->TabIndex = 81;
			this->btnCuatro15->UseVisualStyleBackColor = false;
			this->btnCuatro15->Click += gcnew System::EventHandler(this, &Act1DosAlta::btnCuatro15_Click);
			// 
			// btnCuatro14
			// 
			this->btnCuatro14->BackColor = System::Drawing::Color::White;
			this->btnCuatro14->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnCuatro14->Location = System::Drawing::Point(1738, 677);
			this->btnCuatro14->Name = L"btnCuatro14";
			this->btnCuatro14->Size = System::Drawing::Size(77, 72);
			this->btnCuatro14->TabIndex = 80;
			this->btnCuatro14->UseVisualStyleBackColor = false;
			this->btnCuatro14->Click += gcnew System::EventHandler(this, &Act1DosAlta::btnCuatro14_Click);
			// 
			// btnCuatro13
			// 
			this->btnCuatro13->BackColor = System::Drawing::Color::White;
			this->btnCuatro13->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnCuatro13->Location = System::Drawing::Point(1662, 677);
			this->btnCuatro13->Name = L"btnCuatro13";
			this->btnCuatro13->Size = System::Drawing::Size(77, 72);
			this->btnCuatro13->TabIndex = 79;
			this->btnCuatro13->UseVisualStyleBackColor = false;
			this->btnCuatro13->Click += gcnew System::EventHandler(this, &Act1DosAlta::btnCuatro13_Click);
			// 
			// btnCuatro12
			// 
			this->btnCuatro12->BackColor = System::Drawing::Color::White;
			this->btnCuatro12->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnCuatro12->Location = System::Drawing::Point(1586, 677);
			this->btnCuatro12->Name = L"btnCuatro12";
			this->btnCuatro12->Size = System::Drawing::Size(77, 72);
			this->btnCuatro12->TabIndex = 78;
			this->btnCuatro12->UseVisualStyleBackColor = false;
			this->btnCuatro12->Click += gcnew System::EventHandler(this, &Act1DosAlta::btnCuatro12_Click);
			// 
			// btnCuatro11
			// 
			this->btnCuatro11->BackColor = System::Drawing::Color::White;
			this->btnCuatro11->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnCuatro11->Location = System::Drawing::Point(1510, 677);
			this->btnCuatro11->Name = L"btnCuatro11";
			this->btnCuatro11->Size = System::Drawing::Size(77, 72);
			this->btnCuatro11->TabIndex = 77;
			this->btnCuatro11->UseVisualStyleBackColor = false;
			this->btnCuatro11->Click += gcnew System::EventHandler(this, &Act1DosAlta::btnCuatro11_Click);
			// 
			// btnCuatro10
			// 
			this->btnCuatro10->BackColor = System::Drawing::Color::White;
			this->btnCuatro10->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnCuatro10->Location = System::Drawing::Point(2194, 606);
			this->btnCuatro10->Name = L"btnCuatro10";
			this->btnCuatro10->Size = System::Drawing::Size(77, 72);
			this->btnCuatro10->TabIndex = 76;
			this->btnCuatro10->UseVisualStyleBackColor = false;
			this->btnCuatro10->Click += gcnew System::EventHandler(this, &Act1DosAlta::btnCuatro10_Click);
			// 
			// btnCuatro9
			// 
			this->btnCuatro9->BackColor = System::Drawing::Color::White;
			this->btnCuatro9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnCuatro9->Location = System::Drawing::Point(2118, 606);
			this->btnCuatro9->Name = L"btnCuatro9";
			this->btnCuatro9->Size = System::Drawing::Size(77, 72);
			this->btnCuatro9->TabIndex = 75;
			this->btnCuatro9->UseVisualStyleBackColor = false;
			this->btnCuatro9->Click += gcnew System::EventHandler(this, &Act1DosAlta::btnCuatro9_Click);
			// 
			// btnCuatro8
			// 
			this->btnCuatro8->BackColor = System::Drawing::Color::White;
			this->btnCuatro8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnCuatro8->Location = System::Drawing::Point(2042, 606);
			this->btnCuatro8->Name = L"btnCuatro8";
			this->btnCuatro8->Size = System::Drawing::Size(77, 72);
			this->btnCuatro8->TabIndex = 74;
			this->btnCuatro8->UseVisualStyleBackColor = false;
			this->btnCuatro8->Click += gcnew System::EventHandler(this, &Act1DosAlta::btnCuatro8_Click);
			// 
			// btnCuatro7
			// 
			this->btnCuatro7->BackColor = System::Drawing::Color::White;
			this->btnCuatro7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnCuatro7->Location = System::Drawing::Point(1966, 606);
			this->btnCuatro7->Name = L"btnCuatro7";
			this->btnCuatro7->Size = System::Drawing::Size(77, 72);
			this->btnCuatro7->TabIndex = 73;
			this->btnCuatro7->UseVisualStyleBackColor = false;
			this->btnCuatro7->Click += gcnew System::EventHandler(this, &Act1DosAlta::btnCuatro7_Click);
			// 
			// btnCuatro6
			// 
			this->btnCuatro6->BackColor = System::Drawing::Color::White;
			this->btnCuatro6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnCuatro6->Location = System::Drawing::Point(1890, 606);
			this->btnCuatro6->Name = L"btnCuatro6";
			this->btnCuatro6->Size = System::Drawing::Size(77, 72);
			this->btnCuatro6->TabIndex = 72;
			this->btnCuatro6->UseVisualStyleBackColor = false;
			this->btnCuatro6->Click += gcnew System::EventHandler(this, &Act1DosAlta::btnCuatro6_Click);
			// 
			// btnCuatro5
			// 
			this->btnCuatro5->BackColor = System::Drawing::Color::White;
			this->btnCuatro5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnCuatro5->Location = System::Drawing::Point(1814, 606);
			this->btnCuatro5->Name = L"btnCuatro5";
			this->btnCuatro5->Size = System::Drawing::Size(77, 72);
			this->btnCuatro5->TabIndex = 71;
			this->btnCuatro5->UseVisualStyleBackColor = false;
			this->btnCuatro5->Click += gcnew System::EventHandler(this, &Act1DosAlta::btnCuatro5_Click);
			// 
			// btnCuatro4
			// 
			this->btnCuatro4->BackColor = System::Drawing::Color::White;
			this->btnCuatro4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnCuatro4->Location = System::Drawing::Point(1738, 606);
			this->btnCuatro4->Name = L"btnCuatro4";
			this->btnCuatro4->Size = System::Drawing::Size(77, 72);
			this->btnCuatro4->TabIndex = 70;
			this->btnCuatro4->UseVisualStyleBackColor = false;
			this->btnCuatro4->Click += gcnew System::EventHandler(this, &Act1DosAlta::btnCuatro4_Click);
			// 
			// btnCuatro3
			// 
			this->btnCuatro3->BackColor = System::Drawing::Color::White;
			this->btnCuatro3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnCuatro3->Location = System::Drawing::Point(1662, 606);
			this->btnCuatro3->Name = L"btnCuatro3";
			this->btnCuatro3->Size = System::Drawing::Size(77, 72);
			this->btnCuatro3->TabIndex = 69;
			this->btnCuatro3->UseVisualStyleBackColor = false;
			this->btnCuatro3->Click += gcnew System::EventHandler(this, &Act1DosAlta::btnCuatro3_Click);
			// 
			// btnCuatro2
			// 
			this->btnCuatro2->BackColor = System::Drawing::Color::White;
			this->btnCuatro2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnCuatro2->Location = System::Drawing::Point(1586, 606);
			this->btnCuatro2->Name = L"btnCuatro2";
			this->btnCuatro2->Size = System::Drawing::Size(77, 72);
			this->btnCuatro2->TabIndex = 68;
			this->btnCuatro2->UseVisualStyleBackColor = false;
			this->btnCuatro2->Click += gcnew System::EventHandler(this, &Act1DosAlta::btnCuatro2_Click);
			// 
			// btnCuatro1
			// 
			this->btnCuatro1->BackColor = System::Drawing::Color::White;
			this->btnCuatro1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnCuatro1->Location = System::Drawing::Point(1510, 606);
			this->btnCuatro1->Name = L"btnCuatro1";
			this->btnCuatro1->Size = System::Drawing::Size(77, 72);
			this->btnCuatro1->TabIndex = 67;
			this->btnCuatro1->UseVisualStyleBackColor = false;
			this->btnCuatro1->Click += gcnew System::EventHandler(this, &Act1DosAlta::btnCuatro1_Click);
			// 
			// btnTres20
			// 
			this->btnTres20->BackColor = System::Drawing::Color::White;
			this->btnTres20->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnTres20->Location = System::Drawing::Point(2194, 347);
			this->btnTres20->Name = L"btnTres20";
			this->btnTres20->Size = System::Drawing::Size(77, 72);
			this->btnTres20->TabIndex = 66;
			this->btnTres20->UseVisualStyleBackColor = false;
			this->btnTres20->Click += gcnew System::EventHandler(this, &Act1DosAlta::btnTres20_Click);
			// 
			// btnTres19
			// 
			this->btnTres19->BackColor = System::Drawing::Color::White;
			this->btnTres19->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnTres19->Location = System::Drawing::Point(2118, 347);
			this->btnTres19->Name = L"btnTres19";
			this->btnTres19->Size = System::Drawing::Size(77, 72);
			this->btnTres19->TabIndex = 65;
			this->btnTres19->UseVisualStyleBackColor = false;
			this->btnTres19->Click += gcnew System::EventHandler(this, &Act1DosAlta::btnTres19_Click);
			// 
			// btnTres18
			// 
			this->btnTres18->BackColor = System::Drawing::Color::White;
			this->btnTres18->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnTres18->Location = System::Drawing::Point(2042, 347);
			this->btnTres18->Name = L"btnTres18";
			this->btnTres18->Size = System::Drawing::Size(77, 72);
			this->btnTres18->TabIndex = 64;
			this->btnTres18->UseVisualStyleBackColor = false;
			this->btnTres18->Click += gcnew System::EventHandler(this, &Act1DosAlta::btnTres18_Click);
			// 
			// btnTres17
			// 
			this->btnTres17->BackColor = System::Drawing::Color::White;
			this->btnTres17->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnTres17->Location = System::Drawing::Point(1966, 347);
			this->btnTres17->Name = L"btnTres17";
			this->btnTres17->Size = System::Drawing::Size(77, 72);
			this->btnTres17->TabIndex = 63;
			this->btnTres17->UseVisualStyleBackColor = false;
			this->btnTres17->Click += gcnew System::EventHandler(this, &Act1DosAlta::btnTres17_Click);
			// 
			// btnTres16
			// 
			this->btnTres16->BackColor = System::Drawing::Color::White;
			this->btnTres16->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnTres16->Location = System::Drawing::Point(1890, 347);
			this->btnTres16->Name = L"btnTres16";
			this->btnTres16->Size = System::Drawing::Size(77, 72);
			this->btnTres16->TabIndex = 62;
			this->btnTres16->UseVisualStyleBackColor = false;
			this->btnTres16->Click += gcnew System::EventHandler(this, &Act1DosAlta::btnTres16_Click);
			// 
			// btnTres15
			// 
			this->btnTres15->BackColor = System::Drawing::Color::White;
			this->btnTres15->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnTres15->Location = System::Drawing::Point(1814, 347);
			this->btnTres15->Name = L"btnTres15";
			this->btnTres15->Size = System::Drawing::Size(77, 72);
			this->btnTres15->TabIndex = 61;
			this->btnTres15->UseVisualStyleBackColor = false;
			this->btnTres15->Click += gcnew System::EventHandler(this, &Act1DosAlta::btnTres15_Click);
			// 
			// btnTres14
			// 
			this->btnTres14->BackColor = System::Drawing::Color::White;
			this->btnTres14->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnTres14->Location = System::Drawing::Point(1738, 347);
			this->btnTres14->Name = L"btnTres14";
			this->btnTres14->Size = System::Drawing::Size(77, 72);
			this->btnTres14->TabIndex = 60;
			this->btnTres14->UseVisualStyleBackColor = false;
			this->btnTres14->Click += gcnew System::EventHandler(this, &Act1DosAlta::btnTres14_Click);
			// 
			// btnTres13
			// 
			this->btnTres13->BackColor = System::Drawing::Color::White;
			this->btnTres13->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnTres13->Location = System::Drawing::Point(1662, 347);
			this->btnTres13->Name = L"btnTres13";
			this->btnTres13->Size = System::Drawing::Size(77, 72);
			this->btnTres13->TabIndex = 59;
			this->btnTres13->UseVisualStyleBackColor = false;
			this->btnTres13->Click += gcnew System::EventHandler(this, &Act1DosAlta::btnTres13_Click);
			// 
			// btnTres12
			// 
			this->btnTres12->BackColor = System::Drawing::Color::White;
			this->btnTres12->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnTres12->Location = System::Drawing::Point(1586, 347);
			this->btnTres12->Name = L"btnTres12";
			this->btnTres12->Size = System::Drawing::Size(77, 72);
			this->btnTres12->TabIndex = 58;
			this->btnTres12->UseVisualStyleBackColor = false;
			this->btnTres12->Click += gcnew System::EventHandler(this, &Act1DosAlta::btnTres12_Click);
			// 
			// btnTres11
			// 
			this->btnTres11->BackColor = System::Drawing::Color::White;
			this->btnTres11->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnTres11->Location = System::Drawing::Point(1510, 347);
			this->btnTres11->Name = L"btnTres11";
			this->btnTres11->Size = System::Drawing::Size(77, 72);
			this->btnTres11->TabIndex = 57;
			this->btnTres11->UseVisualStyleBackColor = false;
			this->btnTres11->Click += gcnew System::EventHandler(this, &Act1DosAlta::btnTres11_Click);
			// 
			// btnTres10
			// 
			this->btnTres10->BackColor = System::Drawing::Color::White;
			this->btnTres10->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnTres10->Location = System::Drawing::Point(2194, 276);
			this->btnTres10->Name = L"btnTres10";
			this->btnTres10->Size = System::Drawing::Size(77, 72);
			this->btnTres10->TabIndex = 56;
			this->btnTres10->UseVisualStyleBackColor = false;
			this->btnTres10->Click += gcnew System::EventHandler(this, &Act1DosAlta::btnTres10_Click);
			// 
			// btnTres9
			// 
			this->btnTres9->BackColor = System::Drawing::Color::White;
			this->btnTres9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnTres9->Location = System::Drawing::Point(2118, 276);
			this->btnTres9->Name = L"btnTres9";
			this->btnTres9->Size = System::Drawing::Size(77, 72);
			this->btnTres9->TabIndex = 55;
			this->btnTres9->UseVisualStyleBackColor = false;
			this->btnTres9->Click += gcnew System::EventHandler(this, &Act1DosAlta::btnTres9_Click);
			// 
			// btnTres8
			// 
			this->btnTres8->BackColor = System::Drawing::Color::White;
			this->btnTres8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnTres8->Location = System::Drawing::Point(2042, 276);
			this->btnTres8->Name = L"btnTres8";
			this->btnTres8->Size = System::Drawing::Size(77, 72);
			this->btnTres8->TabIndex = 54;
			this->btnTres8->UseVisualStyleBackColor = false;
			this->btnTres8->Click += gcnew System::EventHandler(this, &Act1DosAlta::btnTres8_Click);
			// 
			// btnTres7
			// 
			this->btnTres7->BackColor = System::Drawing::Color::White;
			this->btnTres7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnTres7->Location = System::Drawing::Point(1966, 276);
			this->btnTres7->Name = L"btnTres7";
			this->btnTres7->Size = System::Drawing::Size(77, 72);
			this->btnTres7->TabIndex = 53;
			this->btnTres7->UseVisualStyleBackColor = false;
			this->btnTres7->Click += gcnew System::EventHandler(this, &Act1DosAlta::btnTres7_Click);
			// 
			// btnTres6
			// 
			this->btnTres6->BackColor = System::Drawing::Color::White;
			this->btnTres6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnTres6->Location = System::Drawing::Point(1890, 276);
			this->btnTres6->Name = L"btnTres6";
			this->btnTres6->Size = System::Drawing::Size(77, 72);
			this->btnTres6->TabIndex = 52;
			this->btnTres6->UseVisualStyleBackColor = false;
			this->btnTres6->Click += gcnew System::EventHandler(this, &Act1DosAlta::btnTres6_Click);
			// 
			// btnTres5
			// 
			this->btnTres5->BackColor = System::Drawing::Color::White;
			this->btnTres5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnTres5->Location = System::Drawing::Point(1814, 276);
			this->btnTres5->Name = L"btnTres5";
			this->btnTres5->Size = System::Drawing::Size(77, 72);
			this->btnTres5->TabIndex = 51;
			this->btnTres5->UseVisualStyleBackColor = false;
			this->btnTres5->Click += gcnew System::EventHandler(this, &Act1DosAlta::btnTres5_Click);
			// 
			// btnTres4
			// 
			this->btnTres4->BackColor = System::Drawing::Color::White;
			this->btnTres4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnTres4->Location = System::Drawing::Point(1738, 276);
			this->btnTres4->Name = L"btnTres4";
			this->btnTres4->Size = System::Drawing::Size(77, 72);
			this->btnTres4->TabIndex = 50;
			this->btnTres4->UseVisualStyleBackColor = false;
			this->btnTres4->Click += gcnew System::EventHandler(this, &Act1DosAlta::btnTres4_Click);
			// 
			// btnTres3
			// 
			this->btnTres3->BackColor = System::Drawing::Color::White;
			this->btnTres3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnTres3->Location = System::Drawing::Point(1662, 276);
			this->btnTres3->Name = L"btnTres3";
			this->btnTres3->Size = System::Drawing::Size(77, 72);
			this->btnTres3->TabIndex = 49;
			this->btnTres3->UseVisualStyleBackColor = false;
			this->btnTres3->Click += gcnew System::EventHandler(this, &Act1DosAlta::btnTres3_Click);
			// 
			// btnTres2
			// 
			this->btnTres2->BackColor = System::Drawing::Color::White;
			this->btnTres2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnTres2->Location = System::Drawing::Point(1586, 276);
			this->btnTres2->Name = L"btnTres2";
			this->btnTres2->Size = System::Drawing::Size(77, 72);
			this->btnTres2->TabIndex = 48;
			this->btnTres2->UseVisualStyleBackColor = false;
			this->btnTres2->Click += gcnew System::EventHandler(this, &Act1DosAlta::btnTres2_Click);
			// 
			// btnTres1
			// 
			this->btnTres1->BackColor = System::Drawing::Color::White;
			this->btnTres1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnTres1->Location = System::Drawing::Point(1510, 276);
			this->btnTres1->Name = L"btnTres1";
			this->btnTres1->Size = System::Drawing::Size(77, 72);
			this->btnTres1->TabIndex = 47;
			this->btnTres1->UseVisualStyleBackColor = false;
			this->btnTres1->Click += gcnew System::EventHandler(this, &Act1DosAlta::btnTres1_Click);
			// 
			// btnDos20
			// 
			this->btnDos20->BackColor = System::Drawing::Color::White;
			this->btnDos20->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnDos20->Location = System::Drawing::Point(1098, 677);
			this->btnDos20->Name = L"btnDos20";
			this->btnDos20->Size = System::Drawing::Size(77, 72);
			this->btnDos20->TabIndex = 46;
			this->btnDos20->UseVisualStyleBackColor = false;
			this->btnDos20->Click += gcnew System::EventHandler(this, &Act1DosAlta::btnDos20_Click);
			// 
			// btnDos19
			// 
			this->btnDos19->BackColor = System::Drawing::Color::White;
			this->btnDos19->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnDos19->Location = System::Drawing::Point(1022, 677);
			this->btnDos19->Name = L"btnDos19";
			this->btnDos19->Size = System::Drawing::Size(77, 72);
			this->btnDos19->TabIndex = 45;
			this->btnDos19->UseVisualStyleBackColor = false;
			this->btnDos19->Click += gcnew System::EventHandler(this, &Act1DosAlta::btnDos19_Click);
			// 
			// btnDos18
			// 
			this->btnDos18->BackColor = System::Drawing::Color::White;
			this->btnDos18->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnDos18->Location = System::Drawing::Point(946, 677);
			this->btnDos18->Name = L"btnDos18";
			this->btnDos18->Size = System::Drawing::Size(77, 72);
			this->btnDos18->TabIndex = 44;
			this->btnDos18->UseVisualStyleBackColor = false;
			this->btnDos18->Click += gcnew System::EventHandler(this, &Act1DosAlta::btnDos18_Click);
			// 
			// btnDos17
			// 
			this->btnDos17->BackColor = System::Drawing::Color::White;
			this->btnDos17->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnDos17->Location = System::Drawing::Point(870, 677);
			this->btnDos17->Name = L"btnDos17";
			this->btnDos17->Size = System::Drawing::Size(77, 72);
			this->btnDos17->TabIndex = 43;
			this->btnDos17->UseVisualStyleBackColor = false;
			this->btnDos17->Click += gcnew System::EventHandler(this, &Act1DosAlta::btnDos17_Click);
			// 
			// btnDos16
			// 
			this->btnDos16->BackColor = System::Drawing::Color::White;
			this->btnDos16->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnDos16->Location = System::Drawing::Point(794, 677);
			this->btnDos16->Name = L"btnDos16";
			this->btnDos16->Size = System::Drawing::Size(77, 72);
			this->btnDos16->TabIndex = 42;
			this->btnDos16->UseVisualStyleBackColor = false;
			this->btnDos16->Click += gcnew System::EventHandler(this, &Act1DosAlta::btnDos16_Click);
			// 
			// btnDos15
			// 
			this->btnDos15->BackColor = System::Drawing::Color::White;
			this->btnDos15->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnDos15->Location = System::Drawing::Point(718, 677);
			this->btnDos15->Name = L"btnDos15";
			this->btnDos15->Size = System::Drawing::Size(77, 72);
			this->btnDos15->TabIndex = 41;
			this->btnDos15->UseVisualStyleBackColor = false;
			this->btnDos15->Click += gcnew System::EventHandler(this, &Act1DosAlta::btnDos15_Click);
			// 
			// btnDos14
			// 
			this->btnDos14->BackColor = System::Drawing::Color::White;
			this->btnDos14->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnDos14->Location = System::Drawing::Point(642, 677);
			this->btnDos14->Name = L"btnDos14";
			this->btnDos14->Size = System::Drawing::Size(77, 72);
			this->btnDos14->TabIndex = 40;
			this->btnDos14->UseVisualStyleBackColor = false;
			this->btnDos14->Click += gcnew System::EventHandler(this, &Act1DosAlta::btnDos14_Click);
			// 
			// btnDos13
			// 
			this->btnDos13->BackColor = System::Drawing::Color::White;
			this->btnDos13->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnDos13->Location = System::Drawing::Point(566, 677);
			this->btnDos13->Name = L"btnDos13";
			this->btnDos13->Size = System::Drawing::Size(77, 72);
			this->btnDos13->TabIndex = 39;
			this->btnDos13->UseVisualStyleBackColor = false;
			this->btnDos13->Click += gcnew System::EventHandler(this, &Act1DosAlta::btnDos13_Click);
			// 
			// btnDos12
			// 
			this->btnDos12->BackColor = System::Drawing::Color::White;
			this->btnDos12->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnDos12->Location = System::Drawing::Point(490, 677);
			this->btnDos12->Name = L"btnDos12";
			this->btnDos12->Size = System::Drawing::Size(77, 72);
			this->btnDos12->TabIndex = 38;
			this->btnDos12->UseVisualStyleBackColor = false;
			this->btnDos12->Click += gcnew System::EventHandler(this, &Act1DosAlta::btnDos12_Click);
			// 
			// btnDos11
			// 
			this->btnDos11->BackColor = System::Drawing::Color::White;
			this->btnDos11->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnDos11->Location = System::Drawing::Point(414, 677);
			this->btnDos11->Name = L"btnDos11";
			this->btnDos11->Size = System::Drawing::Size(77, 72);
			this->btnDos11->TabIndex = 37;
			this->btnDos11->UseVisualStyleBackColor = false;
			this->btnDos11->Click += gcnew System::EventHandler(this, &Act1DosAlta::btnDos11_Click);
			// 
			// btnDos10
			// 
			this->btnDos10->BackColor = System::Drawing::Color::White;
			this->btnDos10->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnDos10->Location = System::Drawing::Point(1098, 606);
			this->btnDos10->Name = L"btnDos10";
			this->btnDos10->Size = System::Drawing::Size(77, 72);
			this->btnDos10->TabIndex = 36;
			this->btnDos10->UseVisualStyleBackColor = false;
			this->btnDos10->Click += gcnew System::EventHandler(this, &Act1DosAlta::btnDos10_Click);
			// 
			// btnDos9
			// 
			this->btnDos9->BackColor = System::Drawing::Color::White;
			this->btnDos9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnDos9->Location = System::Drawing::Point(1022, 606);
			this->btnDos9->Name = L"btnDos9";
			this->btnDos9->Size = System::Drawing::Size(77, 72);
			this->btnDos9->TabIndex = 35;
			this->btnDos9->UseVisualStyleBackColor = false;
			this->btnDos9->Click += gcnew System::EventHandler(this, &Act1DosAlta::btnDos9_Click);
			// 
			// btnDos8
			// 
			this->btnDos8->BackColor = System::Drawing::Color::White;
			this->btnDos8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnDos8->Location = System::Drawing::Point(946, 606);
			this->btnDos8->Name = L"btnDos8";
			this->btnDos8->Size = System::Drawing::Size(77, 72);
			this->btnDos8->TabIndex = 34;
			this->btnDos8->UseVisualStyleBackColor = false;
			this->btnDos8->Click += gcnew System::EventHandler(this, &Act1DosAlta::btnDos8_Click);
			// 
			// btnDos7
			// 
			this->btnDos7->BackColor = System::Drawing::Color::White;
			this->btnDos7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnDos7->Location = System::Drawing::Point(870, 606);
			this->btnDos7->Name = L"btnDos7";
			this->btnDos7->Size = System::Drawing::Size(77, 72);
			this->btnDos7->TabIndex = 33;
			this->btnDos7->UseVisualStyleBackColor = false;
			this->btnDos7->Click += gcnew System::EventHandler(this, &Act1DosAlta::btnDos7_Click);
			// 
			// btnDos6
			// 
			this->btnDos6->BackColor = System::Drawing::Color::White;
			this->btnDos6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnDos6->Location = System::Drawing::Point(794, 606);
			this->btnDos6->Name = L"btnDos6";
			this->btnDos6->Size = System::Drawing::Size(77, 72);
			this->btnDos6->TabIndex = 32;
			this->btnDos6->UseVisualStyleBackColor = false;
			this->btnDos6->Click += gcnew System::EventHandler(this, &Act1DosAlta::btnDos6_Click);
			// 
			// btnDos5
			// 
			this->btnDos5->BackColor = System::Drawing::Color::White;
			this->btnDos5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnDos5->Location = System::Drawing::Point(718, 606);
			this->btnDos5->Name = L"btnDos5";
			this->btnDos5->Size = System::Drawing::Size(77, 72);
			this->btnDos5->TabIndex = 31;
			this->btnDos5->UseVisualStyleBackColor = false;
			this->btnDos5->Click += gcnew System::EventHandler(this, &Act1DosAlta::btnDos5_Click);
			// 
			// btnDos4
			// 
			this->btnDos4->BackColor = System::Drawing::Color::White;
			this->btnDos4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnDos4->Location = System::Drawing::Point(642, 606);
			this->btnDos4->Name = L"btnDos4";
			this->btnDos4->Size = System::Drawing::Size(77, 72);
			this->btnDos4->TabIndex = 30;
			this->btnDos4->UseVisualStyleBackColor = false;
			this->btnDos4->Click += gcnew System::EventHandler(this, &Act1DosAlta::btnDos4_Click);
			// 
			// btnDos3
			// 
			this->btnDos3->BackColor = System::Drawing::Color::White;
			this->btnDos3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnDos3->Location = System::Drawing::Point(566, 606);
			this->btnDos3->Name = L"btnDos3";
			this->btnDos3->Size = System::Drawing::Size(77, 72);
			this->btnDos3->TabIndex = 29;
			this->btnDos3->UseVisualStyleBackColor = false;
			this->btnDos3->Click += gcnew System::EventHandler(this, &Act1DosAlta::btnDos3_Click);
			// 
			// btnDos2
			// 
			this->btnDos2->BackColor = System::Drawing::Color::White;
			this->btnDos2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnDos2->Location = System::Drawing::Point(490, 606);
			this->btnDos2->Name = L"btnDos2";
			this->btnDos2->Size = System::Drawing::Size(77, 72);
			this->btnDos2->TabIndex = 28;
			this->btnDos2->UseVisualStyleBackColor = false;
			this->btnDos2->Click += gcnew System::EventHandler(this, &Act1DosAlta::btnDos2_Click);
			// 
			// btnDos1
			// 
			this->btnDos1->BackColor = System::Drawing::Color::White;
			this->btnDos1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnDos1->Location = System::Drawing::Point(414, 606);
			this->btnDos1->Name = L"btnDos1";
			this->btnDos1->Size = System::Drawing::Size(77, 72);
			this->btnDos1->TabIndex = 27;
			this->btnDos1->UseVisualStyleBackColor = false;
			this->btnDos1->Click += gcnew System::EventHandler(this, &Act1DosAlta::btnDos1_Click);
			// 
			// btnUno20
			// 
			this->btnUno20->BackColor = System::Drawing::Color::White;
			this->btnUno20->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnUno20->Location = System::Drawing::Point(1098, 347);
			this->btnUno20->Name = L"btnUno20";
			this->btnUno20->Size = System::Drawing::Size(77, 72);
			this->btnUno20->TabIndex = 26;
			this->btnUno20->UseVisualStyleBackColor = false;
			this->btnUno20->Click += gcnew System::EventHandler(this, &Act1DosAlta::btnUno20_Click);
			// 
			// btnUno19
			// 
			this->btnUno19->BackColor = System::Drawing::Color::White;
			this->btnUno19->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnUno19->Location = System::Drawing::Point(1022, 347);
			this->btnUno19->Name = L"btnUno19";
			this->btnUno19->Size = System::Drawing::Size(77, 72);
			this->btnUno19->TabIndex = 25;
			this->btnUno19->UseVisualStyleBackColor = false;
			this->btnUno19->Click += gcnew System::EventHandler(this, &Act1DosAlta::btnUno19_Click);
			// 
			// btnUno18
			// 
			this->btnUno18->BackColor = System::Drawing::Color::White;
			this->btnUno18->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnUno18->Location = System::Drawing::Point(946, 347);
			this->btnUno18->Name = L"btnUno18";
			this->btnUno18->Size = System::Drawing::Size(77, 72);
			this->btnUno18->TabIndex = 24;
			this->btnUno18->UseVisualStyleBackColor = false;
			this->btnUno18->Click += gcnew System::EventHandler(this, &Act1DosAlta::btnUno18_Click);
			// 
			// btnUno17
			// 
			this->btnUno17->BackColor = System::Drawing::Color::White;
			this->btnUno17->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnUno17->Location = System::Drawing::Point(870, 347);
			this->btnUno17->Name = L"btnUno17";
			this->btnUno17->Size = System::Drawing::Size(77, 72);
			this->btnUno17->TabIndex = 23;
			this->btnUno17->UseVisualStyleBackColor = false;
			this->btnUno17->Click += gcnew System::EventHandler(this, &Act1DosAlta::btnUno17_Click);
			// 
			// btnUno16
			// 
			this->btnUno16->BackColor = System::Drawing::Color::White;
			this->btnUno16->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnUno16->Location = System::Drawing::Point(794, 347);
			this->btnUno16->Name = L"btnUno16";
			this->btnUno16->Size = System::Drawing::Size(77, 72);
			this->btnUno16->TabIndex = 22;
			this->btnUno16->UseVisualStyleBackColor = false;
			this->btnUno16->Click += gcnew System::EventHandler(this, &Act1DosAlta::btnUno16_Click);
			// 
			// btnUno15
			// 
			this->btnUno15->BackColor = System::Drawing::Color::White;
			this->btnUno15->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnUno15->Location = System::Drawing::Point(718, 347);
			this->btnUno15->Name = L"btnUno15";
			this->btnUno15->Size = System::Drawing::Size(77, 72);
			this->btnUno15->TabIndex = 21;
			this->btnUno15->UseVisualStyleBackColor = false;
			this->btnUno15->Click += gcnew System::EventHandler(this, &Act1DosAlta::btnUno15_Click);
			// 
			// btnUno14
			// 
			this->btnUno14->BackColor = System::Drawing::Color::White;
			this->btnUno14->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnUno14->Location = System::Drawing::Point(642, 347);
			this->btnUno14->Name = L"btnUno14";
			this->btnUno14->Size = System::Drawing::Size(77, 72);
			this->btnUno14->TabIndex = 20;
			this->btnUno14->UseVisualStyleBackColor = false;
			this->btnUno14->Click += gcnew System::EventHandler(this, &Act1DosAlta::btnUno14_Click);
			// 
			// btnUno13
			// 
			this->btnUno13->BackColor = System::Drawing::Color::White;
			this->btnUno13->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnUno13->Location = System::Drawing::Point(566, 347);
			this->btnUno13->Name = L"btnUno13";
			this->btnUno13->Size = System::Drawing::Size(77, 72);
			this->btnUno13->TabIndex = 19;
			this->btnUno13->UseVisualStyleBackColor = false;
			this->btnUno13->Click += gcnew System::EventHandler(this, &Act1DosAlta::btnUno13_Click);
			// 
			// btnUno12
			// 
			this->btnUno12->BackColor = System::Drawing::Color::White;
			this->btnUno12->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnUno12->Location = System::Drawing::Point(490, 347);
			this->btnUno12->Name = L"btnUno12";
			this->btnUno12->Size = System::Drawing::Size(77, 72);
			this->btnUno12->TabIndex = 18;
			this->btnUno12->UseVisualStyleBackColor = false;
			this->btnUno12->Click += gcnew System::EventHandler(this, &Act1DosAlta::btnUno12_Click);
			// 
			// btnUno11
			// 
			this->btnUno11->BackColor = System::Drawing::Color::White;
			this->btnUno11->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnUno11->Location = System::Drawing::Point(414, 347);
			this->btnUno11->Name = L"btnUno11";
			this->btnUno11->Size = System::Drawing::Size(77, 72);
			this->btnUno11->TabIndex = 17;
			this->btnUno11->UseVisualStyleBackColor = false;
			this->btnUno11->Click += gcnew System::EventHandler(this, &Act1DosAlta::btnUno11_Click);
			// 
			// btnUno10
			// 
			this->btnUno10->BackColor = System::Drawing::Color::White;
			this->btnUno10->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnUno10->Location = System::Drawing::Point(1098, 276);
			this->btnUno10->Name = L"btnUno10";
			this->btnUno10->Size = System::Drawing::Size(77, 72);
			this->btnUno10->TabIndex = 16;
			this->btnUno10->UseVisualStyleBackColor = false;
			this->btnUno10->Click += gcnew System::EventHandler(this, &Act1DosAlta::btnUno10_Click);
			// 
			// btnUno9
			// 
			this->btnUno9->BackColor = System::Drawing::Color::White;
			this->btnUno9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnUno9->Location = System::Drawing::Point(1022, 276);
			this->btnUno9->Name = L"btnUno9";
			this->btnUno9->Size = System::Drawing::Size(77, 72);
			this->btnUno9->TabIndex = 15;
			this->btnUno9->UseVisualStyleBackColor = false;
			this->btnUno9->Click += gcnew System::EventHandler(this, &Act1DosAlta::btnUno9_Click);
			// 
			// btnUno8
			// 
			this->btnUno8->BackColor = System::Drawing::Color::White;
			this->btnUno8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnUno8->Location = System::Drawing::Point(946, 276);
			this->btnUno8->Name = L"btnUno8";
			this->btnUno8->Size = System::Drawing::Size(77, 72);
			this->btnUno8->TabIndex = 14;
			this->btnUno8->UseVisualStyleBackColor = false;
			this->btnUno8->Click += gcnew System::EventHandler(this, &Act1DosAlta::btnUno8_Click);
			// 
			// btnUno7
			// 
			this->btnUno7->BackColor = System::Drawing::Color::White;
			this->btnUno7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnUno7->Location = System::Drawing::Point(870, 276);
			this->btnUno7->Name = L"btnUno7";
			this->btnUno7->Size = System::Drawing::Size(77, 72);
			this->btnUno7->TabIndex = 13;
			this->btnUno7->UseVisualStyleBackColor = false;
			this->btnUno7->Click += gcnew System::EventHandler(this, &Act1DosAlta::btnUno7_Click);
			// 
			// btnUno6
			// 
			this->btnUno6->BackColor = System::Drawing::Color::White;
			this->btnUno6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnUno6->Location = System::Drawing::Point(794, 276);
			this->btnUno6->Name = L"btnUno6";
			this->btnUno6->Size = System::Drawing::Size(77, 72);
			this->btnUno6->TabIndex = 12;
			this->btnUno6->UseVisualStyleBackColor = false;
			this->btnUno6->Click += gcnew System::EventHandler(this, &Act1DosAlta::btnUno6_Click);
			// 
			// btnUno5
			// 
			this->btnUno5->BackColor = System::Drawing::Color::White;
			this->btnUno5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnUno5->Location = System::Drawing::Point(718, 276);
			this->btnUno5->Name = L"btnUno5";
			this->btnUno5->Size = System::Drawing::Size(77, 72);
			this->btnUno5->TabIndex = 11;
			this->btnUno5->UseVisualStyleBackColor = false;
			this->btnUno5->Click += gcnew System::EventHandler(this, &Act1DosAlta::btnUno5_Click);
			// 
			// btnUno4
			// 
			this->btnUno4->BackColor = System::Drawing::Color::White;
			this->btnUno4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnUno4->Location = System::Drawing::Point(642, 276);
			this->btnUno4->Name = L"btnUno4";
			this->btnUno4->Size = System::Drawing::Size(77, 72);
			this->btnUno4->TabIndex = 10;
			this->btnUno4->UseVisualStyleBackColor = false;
			this->btnUno4->Click += gcnew System::EventHandler(this, &Act1DosAlta::btnUno4_Click);
			// 
			// btnUno3
			// 
			this->btnUno3->BackColor = System::Drawing::Color::White;
			this->btnUno3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnUno3->Location = System::Drawing::Point(566, 276);
			this->btnUno3->Name = L"btnUno3";
			this->btnUno3->Size = System::Drawing::Size(77, 72);
			this->btnUno3->TabIndex = 9;
			this->btnUno3->UseVisualStyleBackColor = false;
			this->btnUno3->Click += gcnew System::EventHandler(this, &Act1DosAlta::btnUno3_Click);
			// 
			// btnUno2
			// 
			this->btnUno2->BackColor = System::Drawing::Color::White;
			this->btnUno2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnUno2->Location = System::Drawing::Point(490, 276);
			this->btnUno2->Name = L"btnUno2";
			this->btnUno2->Size = System::Drawing::Size(77, 72);
			this->btnUno2->TabIndex = 8;
			this->btnUno2->UseVisualStyleBackColor = false;
			this->btnUno2->Click += gcnew System::EventHandler(this, &Act1DosAlta::btnUno2_Click);
			// 
			// btnUno1
			// 
			this->btnUno1->BackColor = System::Drawing::Color::White;
			this->btnUno1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnUno1->Location = System::Drawing::Point(414, 276);
			this->btnUno1->Name = L"btnUno1";
			this->btnUno1->Size = System::Drawing::Size(77, 72);
			this->btnUno1->TabIndex = 7;
			this->btnUno1->UseVisualStyleBackColor = false;
			this->btnUno1->Click += gcnew System::EventHandler(this, &Act1DosAlta::btnUno1_Click);
			// 
			// btnCuatro
			// 
			this->btnCuatro->BackColor = System::Drawing::Color::MediumOrchid;
			this->btnCuatro->Font = (gcnew System::Drawing::Font(L"Calibri", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCuatro->ForeColor = System::Drawing::Color::White;
			this->btnCuatro->Location = System::Drawing::Point(1227, 555);
			this->btnCuatro->Name = L"btnCuatro";
			this->btnCuatro->Size = System::Drawing::Size(262, 245);
			this->btnCuatro->TabIndex = 6;
			this->btnCuatro->Text = L"20";
			this->btnCuatro->UseVisualStyleBackColor = false;
			this->btnCuatro->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Act1DosAlta::btnCuatro_MouseDown);
			this->btnCuatro->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Act1DosAlta::btnCuatro_MouseMove);
			this->btnCuatro->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Act1DosAlta::btnCuatro_MouseUp);
			// 
			// btnTres
			// 
			this->btnTres->BackColor = System::Drawing::Color::Peru;
			this->btnTres->Font = (gcnew System::Drawing::Font(L"Calibri", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTres->ForeColor = System::Drawing::Color::White;
			this->btnTres->Location = System::Drawing::Point(1227, 227);
			this->btnTres->Name = L"btnTres";
			this->btnTres->Size = System::Drawing::Size(262, 245);
			this->btnTres->TabIndex = 5;
			this->btnTres->Text = L"11";
			this->btnTres->UseVisualStyleBackColor = false;
			this->btnTres->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Act1DosAlta::btnTres_MouseDown);
			this->btnTres->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Act1DosAlta::btnTres_MouseMove);
			this->btnTres->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Act1DosAlta::btnTres_MouseUp);
			// 
			// btnDos
			// 
			this->btnDos->BackColor = System::Drawing::Color::ForestGreen;
			this->btnDos->Font = (gcnew System::Drawing::Font(L"Calibri", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDos->ForeColor = System::Drawing::Color::White;
			this->btnDos->Location = System::Drawing::Point(133, 555);
			this->btnDos->Name = L"btnDos";
			this->btnDos->Size = System::Drawing::Size(262, 245);
			this->btnDos->TabIndex = 4;
			this->btnDos->Text = L"13";
			this->btnDos->UseVisualStyleBackColor = false;
			this->btnDos->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Act1DosAlta::btnDos_MouseDown);
			this->btnDos->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Act1DosAlta::btnDos_MouseMove);
			this->btnDos->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Act1DosAlta::btnDos_MouseUp);
			// 
			// btnUno
			// 
			this->btnUno->BackColor = System::Drawing::Color::CornflowerBlue;
			this->btnUno->Font = (gcnew System::Drawing::Font(L"Calibri", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnUno->ForeColor = System::Drawing::Color::White;
			this->btnUno->Location = System::Drawing::Point(133, 227);
			this->btnUno->Name = L"btnUno";
			this->btnUno->Size = System::Drawing::Size(262, 245);
			this->btnUno->TabIndex = 3;
			this->btnUno->Text = L"17";
			this->btnUno->UseVisualStyleBackColor = false;
			this->btnUno->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Act1DosAlta::btnUno_MouseDown);
			this->btnUno->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Act1DosAlta::btnUno_MouseMove);
			this->btnUno->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Act1DosAlta::btnUno_MouseUp);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Gold;
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel4->Location = System::Drawing::Point(1568, 860);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(262, 245);
			this->panel4->TabIndex = 2;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Gold;
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel3->Location = System::Drawing::Point(1216, 860);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(262, 245);
			this->panel3->TabIndex = 2;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Gold;
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel2->Location = System::Drawing::Point(864, 860);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(262, 245);
			this->panel2->TabIndex = 1;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Gold;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Location = System::Drawing::Point(514, 860);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(262, 245);
			this->panel1->TabIndex = 0;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe Print", 26, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(1480, 925);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(103, 137);
			this->label3->TabIndex = 89;
			this->label3->Text = L">";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe Print", 26, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(1123, 925);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(103, 137);
			this->label2->TabIndex = 88;
			this->label2->Text = L">";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 26, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(779, 925);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(103, 137);
			this->label1->TabIndex = 87;
			this->label1->Text = L">";
			// 
			// Act1DosAlta
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(14, 29);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(2386, 1228);
			this->Controls->Add(this->panelCentro);
			this->Name = L"Act1DosAlta";
			this->Opacity = 0;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Act1DosAlta";
			this->Activated += gcnew System::EventHandler(this, &Act1DosAlta::Act1DosAlta_Activated);
			this->Deactivate += gcnew System::EventHandler(this, &Act1DosAlta::Act1DosAlta_Deactivate);
			this->Load += gcnew System::EventHandler(this, &Act1DosAlta::Act1DosAlta_Load);
			this->panelCentro->ResumeLayout(false);
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnRetroceder))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnListo))->EndInit();
			this->panelInstruccion->ResumeLayout(false);
			this->panelInstruccion->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		private: System::Void inicializarPosicion();
		private: System::Void comprobarActividadCompletada();
		private: System::Void timerPantalla_Tick(System::Object^  sender, System::EventArgs^  e);
		private: System::Void Act1DosAlta_Load(System::Object^  sender, System::EventArgs^  e);
		private: System::Void Act1DosAlta_Activated(System::Object^  sender, System::EventArgs^  e);
		private: System::Void Act1DosAlta_Deactivate(System::Object^  sender, System::EventArgs^  e);
		private: System::Void btnRetroceder_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void btnListo_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void moverBoton(System::Windows::Forms::Button^ boton);
		private: System::Void btnUno1_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void btnUno2_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void btnUno3_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void btnUno4_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void btnUno5_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void btnUno6_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void btnUno7_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void btnUno8_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void btnUno9_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void btnUno10_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void btnUno11_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void btnUno12_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void btnUno13_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void btnUno14_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void btnUno15_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void btnUno16_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void btnUno17_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void btnUno18_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void btnUno19_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void btnUno20_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void btnDos20_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void btnDos19_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void btnDos18_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void btnDos17_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void btnDos16_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void btnDos15_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void btnDos14_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void btnDos13_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void btnDos12_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void btnDos11_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void btnDos10_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void btnDos9_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void btnDos8_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void btnDos7_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void btnDos6_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void btnDos5_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void btnDos4_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void btnDos3_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void btnDos2_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void btnDos1_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void btnTres1_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void btnTres19_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void btnTres18_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void btnTres17_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void btnTres16_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void btnTres15_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void btnTres14_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void btnTres13_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void btnTres12_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void btnTres11_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void btnTres10_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void btnTres9_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void btnTres8_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void btnTres7_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void btnTres6_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void btnTres5_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void btnTres4_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void btnTres3_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void btnTres2_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void btnTres20_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void btnCuatro20_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void btnCuatro19_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void btnCuatro18_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void btnCuatro17_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void btnCuatro16_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void btnCuatro15_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void btnCuatro14_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void btnCuatro13_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void btnCuatro12_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void btnCuatro11_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void btnCuatro10_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void btnCuatro9_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void btnCuatro8_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void btnCuatro7_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void btnCuatro6_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void btnCuatro5_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void btnCuatro4_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void btnCuatro3_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void btnCuatro2_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void btnCuatro1_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void btnUno_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
		private: System::Void btnDos_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
		private: System::Void btnTres_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
		private: System::Void btnCuatro_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
		private: System::Void btnUno_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
		private: System::Void btnDos_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
		private: System::Void btnTres_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
		private: System::Void btnCuatro_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
		private: System::Void btnUno_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
		private: System::Void btnDos_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
		private: System::Void btnTres_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
		private: System::Void btnCuatro_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
	};
}
