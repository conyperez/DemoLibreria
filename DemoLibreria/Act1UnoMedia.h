#pragma once

namespace DemoLibreria {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Act1UnoMedia
	/// </summary>
	public ref class Act1UnoMedia : public System::Windows::Forms::Form
	{
	public:
		Act1UnoMedia(Form^ formAnterior)
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
		~Act1UnoMedia()
		{
			if (components)
			{
				delete components;
			}
		}
	private: int bolsaUnoCaja, bolsaDosCaja, bolsaTresCaja, bolsaCuatroCaja, bolsaCincoCaja;		// 1 = Roja, 2 = Azul
	private: bool listoBtnUno = false, listoBtnDos = false, listoBtnTres = false, listoBtnCuatro = false, listoBtnCinco = false;
	private: bool btnPresionado = false;
	private: int posMouseFormX, posMouseFormY, posMouseBtnX, posMouseBtnY, posActBtnX, posActBtnY;
	private: int xBolsaUno, yBolsaUno, xBolsaDos, yBolsaDos, xBolsaTres, yBolsaTres, xBolsaCuatro, yBolsaCuatro, xBolsaCinco, yBolsaCinco;
	private: System::Windows::Forms::Form^ formAnterior;
	private: System::Windows::Forms::Timer^  timerPantalla;
	private: System::Windows::Forms::Panel^  panelCentro;
	private: System::Windows::Forms::Label^  labelInstruccion2;
	private: System::Windows::Forms::Label^  labelInstruccion;
	private: System::Windows::Forms::Button^  bolsaCinco;
	private: System::Windows::Forms::Button^  bolsaCuatro;
	private: System::Windows::Forms::Button^  bolsaTres;
	private: System::Windows::Forms::Button^  bolsaDos;
	private: System::Windows::Forms::Button^  bolsaUno;
	private: System::Windows::Forms::Panel^  panelCajaAzul;
	private: System::Windows::Forms::PictureBox^  cajaAzul;
	private: System::Windows::Forms::Panel^  panelCajaRoja;
	private: System::Windows::Forms::PictureBox^  cajaRoja;
	private: System::Windows::Forms::PictureBox^  btnRetroceder;
	private: System::Windows::Forms::PictureBox^  btnListo;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Panel^  panel2;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Act1UnoMedia::typeid));
			this->timerPantalla = (gcnew System::Windows::Forms::Timer(this->components));
			this->panelCentro = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->labelInstruccion = (gcnew System::Windows::Forms::Label());
			this->labelInstruccion2 = (gcnew System::Windows::Forms::Label());
			this->bolsaCinco = (gcnew System::Windows::Forms::Button());
			this->btnListo = (gcnew System::Windows::Forms::PictureBox());
			this->btnRetroceder = (gcnew System::Windows::Forms::PictureBox());
			this->bolsaCuatro = (gcnew System::Windows::Forms::Button());
			this->bolsaTres = (gcnew System::Windows::Forms::Button());
			this->bolsaDos = (gcnew System::Windows::Forms::Button());
			this->bolsaUno = (gcnew System::Windows::Forms::Button());
			this->panelCajaAzul = (gcnew System::Windows::Forms::Panel());
			this->cajaAzul = (gcnew System::Windows::Forms::PictureBox());
			this->panelCajaRoja = (gcnew System::Windows::Forms::Panel());
			this->cajaRoja = (gcnew System::Windows::Forms::PictureBox());
			this->panelCentro->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnListo))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnRetroceder))->BeginInit();
			this->panelCajaAzul->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cajaAzul))->BeginInit();
			this->panelCajaRoja->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cajaRoja))->BeginInit();
			this->SuspendLayout();
			// 
			// timerPantalla
			// 
			this->timerPantalla->Interval = 1;
			this->timerPantalla->Tick += gcnew System::EventHandler(this, &Act1UnoMedia::timerPantalla_Tick);
			// 
			// panelCentro
			// 
			this->panelCentro->BackColor = System::Drawing::Color::Transparent;
			this->panelCentro->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panelCentro.BackgroundImage")));
			this->panelCentro->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panelCentro->Controls->Add(this->panel2);
			this->panelCentro->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelCentro->Location = System::Drawing::Point(0, 0);
			this->panelCentro->Name = L"panelCentro";
			this->panelCentro->Size = System::Drawing::Size(2386, 1228);
			this->panelCentro->TabIndex = 0;
			// 
			// panel2
			// 
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel2->Controls->Add(this->panel1);
			this->panel2->Controls->Add(this->bolsaCinco);
			this->panel2->Controls->Add(this->btnListo);
			this->panel2->Controls->Add(this->btnRetroceder);
			this->panel2->Controls->Add(this->bolsaCuatro);
			this->panel2->Controls->Add(this->bolsaTres);
			this->panel2->Controls->Add(this->bolsaDos);
			this->panel2->Controls->Add(this->bolsaUno);
			this->panel2->Controls->Add(this->panelCajaAzul);
			this->panel2->Controls->Add(this->panelCajaRoja);
			this->panel2->Location = System::Drawing::Point(12, 28);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(2350, 1147);
			this->panel2->TabIndex = 21;
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->labelInstruccion);
			this->panel1->Controls->Add(this->labelInstruccion2);
			this->panel1->Location = System::Drawing::Point(330, 98);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1812, 180);
			this->panel1->TabIndex = 20;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Location = System::Drawing::Point(1583, 49);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(66, 64);
			this->pictureBox2->TabIndex = 6;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(413, 105);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(66, 64);
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			// 
			// labelInstruccion
			// 
			this->labelInstruccion->AutoSize = true;
			this->labelInstruccion->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelInstruccion->Location = System::Drawing::Point(147, 49);
			this->labelInstruccion->Name = L"labelInstruccion";
			this->labelInstruccion->Size = System::Drawing::Size(1451, 75);
			this->labelInstruccion->TabIndex = 9;
			this->labelInstruccion->Text = L"Arrastra las bolsas que tengan menos de 5 elementos a la caja    ,";
			this->labelInstruccion->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelInstruccion2
			// 
			this->labelInstruccion2->AutoSize = true;
			this->labelInstruccion2->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelInstruccion2->Location = System::Drawing::Point(151, 103);
			this->labelInstruccion2->Name = L"labelInstruccion2";
			this->labelInstruccion2->Size = System::Drawing::Size(1432, 75);
			this->labelInstruccion2->TabIndex = 12;
			this->labelInstruccion2->Text = L"y a la caja     arrastra las bolsas que tengan más de 5 elementos.";
			this->labelInstruccion2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// bolsaCinco
			// 
			this->bolsaCinco->BackColor = System::Drawing::Color::Transparent;
			this->bolsaCinco->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bolsaCinco.BackgroundImage")));
			this->bolsaCinco->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bolsaCinco->Location = System::Drawing::Point(1756, 337);
			this->bolsaCinco->Name = L"bolsaCinco";
			this->bolsaCinco->Size = System::Drawing::Size(235, 379);
			this->bolsaCinco->TabIndex = 17;
			this->bolsaCinco->TabStop = false;
			this->bolsaCinco->UseVisualStyleBackColor = false;
			this->bolsaCinco->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Act1UnoMedia::bolsaCinco_MouseDown);
			this->bolsaCinco->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Act1UnoMedia::bolsaCinco_MouseMove);
			this->bolsaCinco->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Act1UnoMedia::bolsaCinco_MouseUp);
			// 
			// btnListo
			// 
			this->btnListo->BackColor = System::Drawing::Color::Transparent;
			this->btnListo->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnListo.BackgroundImage")));
			this->btnListo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnListo->Enabled = false;
			this->btnListo->Location = System::Drawing::Point(1977, 941);
			this->btnListo->Name = L"btnListo";
			this->btnListo->Size = System::Drawing::Size(316, 124);
			this->btnListo->TabIndex = 11;
			this->btnListo->TabStop = false;
			this->btnListo->Visible = false;
			this->btnListo->Click += gcnew System::EventHandler(this, &Act1UnoMedia::btnListo_Click);
			// 
			// btnRetroceder
			// 
			this->btnRetroceder->BackColor = System::Drawing::Color::Transparent;
			this->btnRetroceder->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnRetroceder.BackgroundImage")));
			this->btnRetroceder->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnRetroceder->Location = System::Drawing::Point(123, 951);
			this->btnRetroceder->Name = L"btnRetroceder";
			this->btnRetroceder->Size = System::Drawing::Size(316, 124);
			this->btnRetroceder->TabIndex = 14;
			this->btnRetroceder->TabStop = false;
			this->btnRetroceder->Click += gcnew System::EventHandler(this, &Act1UnoMedia::btnRetroceder_Click);
			// 
			// bolsaCuatro
			// 
			this->bolsaCuatro->BackColor = System::Drawing::Color::Transparent;
			this->bolsaCuatro->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bolsaCuatro.BackgroundImage")));
			this->bolsaCuatro->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bolsaCuatro->Location = System::Drawing::Point(1426, 337);
			this->bolsaCuatro->Name = L"bolsaCuatro";
			this->bolsaCuatro->Size = System::Drawing::Size(235, 379);
			this->bolsaCuatro->TabIndex = 16;
			this->bolsaCuatro->TabStop = false;
			this->bolsaCuatro->UseVisualStyleBackColor = false;
			this->bolsaCuatro->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Act1UnoMedia::bolsaCuatro_MouseDown);
			this->bolsaCuatro->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Act1UnoMedia::bolsaCuatro_MouseMove);
			this->bolsaCuatro->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Act1UnoMedia::bolsaCuatro_MouseUp);
			// 
			// bolsaTres
			// 
			this->bolsaTres->BackColor = System::Drawing::Color::Transparent;
			this->bolsaTres->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bolsaTres.BackgroundImage")));
			this->bolsaTres->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bolsaTres->Location = System::Drawing::Point(1082, 337);
			this->bolsaTres->Name = L"bolsaTres";
			this->bolsaTres->Size = System::Drawing::Size(235, 379);
			this->bolsaTres->TabIndex = 15;
			this->bolsaTres->TabStop = false;
			this->bolsaTres->UseVisualStyleBackColor = false;
			this->bolsaTres->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Act1UnoMedia::bolsaTres_MouseDown);
			this->bolsaTres->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Act1UnoMedia::bolsaTres_MouseMove);
			this->bolsaTres->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Act1UnoMedia::bolsaTres_MouseUp);
			// 
			// bolsaDos
			// 
			this->bolsaDos->BackColor = System::Drawing::Color::Transparent;
			this->bolsaDos->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bolsaDos.BackgroundImage")));
			this->bolsaDos->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bolsaDos->Location = System::Drawing::Point(750, 337);
			this->bolsaDos->Name = L"bolsaDos";
			this->bolsaDos->Size = System::Drawing::Size(235, 379);
			this->bolsaDos->TabIndex = 13;
			this->bolsaDos->TabStop = false;
			this->bolsaDos->UseVisualStyleBackColor = false;
			this->bolsaDos->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Act1UnoMedia::bolsaDos_MouseDown);
			this->bolsaDos->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Act1UnoMedia::bolsaDos_MouseMove);
			this->bolsaDos->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Act1UnoMedia::bolsaDos_MouseUp);
			// 
			// bolsaUno
			// 
			this->bolsaUno->BackColor = System::Drawing::Color::Transparent;
			this->bolsaUno->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bolsaUno.BackgroundImage")));
			this->bolsaUno->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bolsaUno->ForeColor = System::Drawing::Color::Black;
			this->bolsaUno->Location = System::Drawing::Point(431, 337);
			this->bolsaUno->Name = L"bolsaUno";
			this->bolsaUno->Size = System::Drawing::Size(235, 379);
			this->bolsaUno->TabIndex = 10;
			this->bolsaUno->TabStop = false;
			this->bolsaUno->UseVisualStyleBackColor = false;
			this->bolsaUno->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Act1UnoMedia::bolsaUno_MouseDown);
			this->bolsaUno->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Act1UnoMedia::bolsaUno_MouseMove);
			this->bolsaUno->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Act1UnoMedia::bolsaUno_MouseUp);
			// 
			// panelCajaAzul
			// 
			this->panelCajaAzul->Controls->Add(this->cajaAzul);
			this->panelCajaAzul->Location = System::Drawing::Point(1278, 758);
			this->panelCajaAzul->Name = L"panelCajaAzul";
			this->panelCajaAzul->Size = System::Drawing::Size(357, 301);
			this->panelCajaAzul->TabIndex = 19;
			// 
			// cajaAzul
			// 
			this->cajaAzul->BackColor = System::Drawing::Color::Transparent;
			this->cajaAzul->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cajaAzul.BackgroundImage")));
			this->cajaAzul->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->cajaAzul->Location = System::Drawing::Point(11, 1);
			this->cajaAzul->Name = L"cajaAzul";
			this->cajaAzul->Size = System::Drawing::Size(334, 288);
			this->cajaAzul->TabIndex = 6;
			this->cajaAzul->TabStop = false;
			// 
			// panelCajaRoja
			// 
			this->panelCajaRoja->Controls->Add(this->cajaRoja);
			this->panelCajaRoja->Location = System::Drawing::Point(787, 759);
			this->panelCajaRoja->Name = L"panelCajaRoja";
			this->panelCajaRoja->Size = System::Drawing::Size(345, 302);
			this->panelCajaRoja->TabIndex = 18;
			// 
			// cajaRoja
			// 
			this->cajaRoja->BackColor = System::Drawing::Color::Transparent;
			this->cajaRoja->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cajaRoja.BackgroundImage")));
			this->cajaRoja->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->cajaRoja->Location = System::Drawing::Point(2, 1);
			this->cajaRoja->Name = L"cajaRoja";
			this->cajaRoja->Size = System::Drawing::Size(334, 288);
			this->cajaRoja->TabIndex = 5;
			this->cajaRoja->TabStop = false;
			// 
			// Act1UnoMedia
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(14, 29);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(2386, 1228);
			this->Controls->Add(this->panelCentro);
			this->DoubleBuffered = true;
			this->Name = L"Act1UnoMedia";
			this->Opacity = 0;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Act1UnoMedia";
			this->Activated += gcnew System::EventHandler(this, &Act1UnoMedia::Act1UnoMedia_Activated);
			this->Deactivate += gcnew System::EventHandler(this, &Act1UnoMedia::Act1UnoMedia_Deactivate);
			this->Load += gcnew System::EventHandler(this, &Act1UnoMedia::Act1UnoMedia_Load);
			this->panelCentro->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnListo))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnRetroceder))->EndInit();
			this->panelCajaAzul->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cajaAzul))->EndInit();
			this->panelCajaRoja->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cajaRoja))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		private: System::Void inicializarPosicion();
		private: System::Void comprobarActividadCompletada();
		private: System::Void timerPantalla_Tick(System::Object^  sender, System::EventArgs^  e);
		private: System::Void Act1UnoMedia_Load(System::Object^  sender, System::EventArgs^  e);
		private: System::Void Act1UnoMedia_Activated(System::Object^  sender, System::EventArgs^  e);
		private: System::Void Act1UnoMedia_Deactivate(System::Object^  sender, System::EventArgs^  e);
		private: System::Void btnRetroceder_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void btnListo_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void moverBoton(System::Windows::Forms::Button^ boton);
		private: System::Void bolsaUno_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
		private: System::Void bolsaDos_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
		private: System::Void bolsaTres_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
		private: System::Void bolsaCuatro_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
		private: System::Void bolsaCinco_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
		private: System::Void bolsaUno_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
		private: System::Void bolsaDos_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
		private: System::Void bolsaTres_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
		private: System::Void bolsaCuatro_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
		private: System::Void bolsaCinco_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
		private: System::Void bolsaUno_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
		private: System::Void bolsaDos_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
		private: System::Void bolsaTres_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
		private: System::Void bolsaCuatro_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
		private: System::Void bolsaCinco_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
	};
}
