#pragma once

#define ARRAY_SIZE 5

#include "Usuario.h"
#include "AgenteControlador.h"
#include "FormEstrella.h"

namespace DemoLibreria {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Act1DosMedia
	/// </summary>
	ref class Act1DosMedia : public System::Windows::Forms::Form
	{
	public:
		Act1DosMedia(Form^ formAnterior)
		{
			this->formAnterior = formAnterior;
			InitializeComponent();
			inicializarPosicion();
			this->Size = System::Drawing::Size(1050, 598);
			this->Show();
		}

		Act1DosMedia(Form^ formAnterior, Usuario^ _usuario, AgenteControlador^ _controlador)
		{
			this->formAnterior = formAnterior;
			this->usuario = _usuario;
			this->controlador = _controlador;
			InitializeComponent();
			inicializarPosicion();
			this->Size = System::Drawing::Size(1050, 598);
			this->Show();
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Act1DosMedia()
		{
			if (components)
			{
				delete components;
			}
		}
	private: int posicionBtnUno, posicionBtnDos, posicionBtnTres, posicionBtnCuatro;
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
	private: System::Windows::Forms::Panel^  panelPuestoCuatro;
	private: System::Windows::Forms::Panel^  panelPuestoTres;
	private: System::Windows::Forms::Panel^  panelPuestoDos;
	private: System::Windows::Forms::Panel^  panelPuestoUno;
	private: System::Windows::Forms::Button^  btnCuatro;
	private: System::Windows::Forms::Button^  btnTres;
	private: System::Windows::Forms::Button^  btnDos;
	private: System::Windows::Forms::Button^  btnUno;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::ComponentModel::IContainer^  components;

	private:
		Usuario^ usuario;
		AgenteControlador^ controlador;
		array<String^>^ respuestas = gcnew array<String^>(ARRAY_SIZE);


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Act1DosMedia::typeid));
			this->timerPantalla = (gcnew System::Windows::Forms::Timer(this->components));
			this->panelCentro = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panelInstruccion = (gcnew System::Windows::Forms::Panel());
			this->labelInstruccion2 = (gcnew System::Windows::Forms::Label());
			this->labelInstruccion = (gcnew System::Windows::Forms::Label());
			this->btnListo = (gcnew System::Windows::Forms::PictureBox());
			this->btnRetroceder = (gcnew System::Windows::Forms::PictureBox());
			this->btnCuatro = (gcnew System::Windows::Forms::Button());
			this->btnTres = (gcnew System::Windows::Forms::Button());
			this->btnDos = (gcnew System::Windows::Forms::Button());
			this->btnUno = (gcnew System::Windows::Forms::Button());
			this->panelPuestoCuatro = (gcnew System::Windows::Forms::Panel());
			this->panelPuestoTres = (gcnew System::Windows::Forms::Panel());
			this->panelPuestoDos = (gcnew System::Windows::Forms::Panel());
			this->panelPuestoUno = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panelCentro->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panelInstruccion->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnListo))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnRetroceder))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// timerPantalla
			// 
			this->timerPantalla->Interval = 1;
			this->timerPantalla->Tick += gcnew System::EventHandler(this, &Act1DosMedia::timerPantalla_Tick);
			// 
			// panelCentro
			// 
			this->panelCentro->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panelCentro.BackgroundImage")));
			this->panelCentro->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panelCentro->Controls->Add(this->panel1);
			this->panelCentro->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelCentro->Location = System::Drawing::Point(0, 0);
			this->panelCentro->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->panelCentro->Name = L"panelCentro";
			this->panelCentro->Size = System::Drawing::Size(687, 395);
			this->panelCentro->TabIndex = 0;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->panelInstruccion);
			this->panel1->Controls->Add(this->btnListo);
			this->panel1->Controls->Add(this->btnRetroceder);
			this->panel1->Controls->Add(this->btnCuatro);
			this->panel1->Controls->Add(this->btnTres);
			this->panel1->Controls->Add(this->btnDos);
			this->panel1->Controls->Add(this->btnUno);
			this->panel1->Controls->Add(this->panelPuestoCuatro);
			this->panel1->Controls->Add(this->panelPuestoTres);
			this->panel1->Controls->Add(this->panelPuestoDos);
			this->panel1->Controls->Add(this->panelPuestoUno);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(12, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1005, 517);
			this->panel1->TabIndex = 8;
			// 
			// panelInstruccion
			// 
			this->panelInstruccion->BackColor = System::Drawing::Color::Transparent;
			this->panelInstruccion->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panelInstruccion.BackgroundImage")));
			this->panelInstruccion->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panelInstruccion->Controls->Add(this->labelInstruccion2);
			this->panelInstruccion->Controls->Add(this->labelInstruccion);
			this->panelInstruccion->Location = System::Drawing::Point(210, 5);
			this->panelInstruccion->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->panelInstruccion->Name = L"panelInstruccion";
			this->panelInstruccion->Size = System::Drawing::Size(659, 87);
			this->panelInstruccion->TabIndex = 1;
			// 
			// labelInstruccion2
			// 
			this->labelInstruccion2->AutoSize = true;
			this->labelInstruccion2->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelInstruccion2->Location = System::Drawing::Point(61, 52);
			this->labelInstruccion2->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->labelInstruccion2->Name = L"labelInstruccion2";
			this->labelInstruccion2->Size = System::Drawing::Size(512, 33);
			this->labelInstruccion2->TabIndex = 1;
			this->labelInstruccion2->Text = L"según la cantidad de medallas que tenga cada uno.";
			this->labelInstruccion2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelInstruccion
			// 
			this->labelInstruccion->AutoSize = true;
			this->labelInstruccion->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelInstruccion->Location = System::Drawing::Point(84, 22);
			this->labelInstruccion->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->labelInstruccion->Name = L"labelInstruccion";
			this->labelInstruccion->Size = System::Drawing::Size(435, 33);
			this->labelInstruccion->TabIndex = 0;
			this->labelInstruccion->Text = L"Ordena de menor a mayor a los niños(as), ";
			this->labelInstruccion->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btnListo
			// 
			this->btnListo->BackColor = System::Drawing::Color::Transparent;
			this->btnListo->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnListo.BackgroundImage")));
			this->btnListo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnListo->Enabled = false;
			this->btnListo->Location = System::Drawing::Point(846, 425);
			this->btnListo->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->btnListo->Name = L"btnListo";
			this->btnListo->Size = System::Drawing::Size(135, 56);
			this->btnListo->TabIndex = 0;
			this->btnListo->TabStop = false;
			this->btnListo->Visible = false;
			this->btnListo->Click += gcnew System::EventHandler(this, &Act1DosMedia::btnListo_Click);
			// 
			// btnRetroceder
			// 
			this->btnRetroceder->BackColor = System::Drawing::Color::Transparent;
			this->btnRetroceder->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnRetroceder.BackgroundImage")));
			this->btnRetroceder->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnRetroceder->Location = System::Drawing::Point(52, 433);
			this->btnRetroceder->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->btnRetroceder->Name = L"btnRetroceder";
			this->btnRetroceder->Size = System::Drawing::Size(135, 56);
			this->btnRetroceder->TabIndex = 1;
			this->btnRetroceder->TabStop = false;
			this->btnRetroceder->Click += gcnew System::EventHandler(this, &Act1DosMedia::btnRetroceder_Click);
			// 
			// btnCuatro
			// 
			this->btnCuatro->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnCuatro.BackgroundImage")));
			this->btnCuatro->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnCuatro->Location = System::Drawing::Point(215, 272);
			this->btnCuatro->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->btnCuatro->Name = L"btnCuatro";
			this->btnCuatro->Size = System::Drawing::Size(135, 152);
			this->btnCuatro->TabIndex = 7;
			this->btnCuatro->UseVisualStyleBackColor = true;
			this->btnCuatro->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Act1DosMedia::btnCuatro_MouseDown);
			this->btnCuatro->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Act1DosMedia::btnCuatro_MouseMove);
			this->btnCuatro->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Act1DosMedia::btnCuatro_MouseUp);
			// 
			// btnTres
			// 
			this->btnTres->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnTres.BackgroundImage")));
			this->btnTres->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnTres->Location = System::Drawing::Point(70, 272);
			this->btnTres->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->btnTres->Name = L"btnTres";
			this->btnTres->Size = System::Drawing::Size(135, 152);
			this->btnTres->TabIndex = 6;
			this->btnTres->UseVisualStyleBackColor = true;
			this->btnTres->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Act1DosMedia::btnTres_MouseDown);
			this->btnTres->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Act1DosMedia::btnTres_MouseMove);
			this->btnTres->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Act1DosMedia::btnTres_MouseUp);
			// 
			// btnDos
			// 
			this->btnDos->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnDos.BackgroundImage")));
			this->btnDos->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnDos->Location = System::Drawing::Point(215, 109);
			this->btnDos->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->btnDos->Name = L"btnDos";
			this->btnDos->Size = System::Drawing::Size(135, 152);
			this->btnDos->TabIndex = 5;
			this->btnDos->UseVisualStyleBackColor = true;
			this->btnDos->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Act1DosMedia::btnDos_MouseDown);
			this->btnDos->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Act1DosMedia::btnDos_MouseMove);
			this->btnDos->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Act1DosMedia::btnDos_MouseUp);
			// 
			// btnUno
			// 
			this->btnUno->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnUno.BackgroundImage")));
			this->btnUno->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnUno->Location = System::Drawing::Point(70, 109);
			this->btnUno->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->btnUno->Name = L"btnUno";
			this->btnUno->Size = System::Drawing::Size(135, 152);
			this->btnUno->TabIndex = 4;
			this->btnUno->UseVisualStyleBackColor = true;
			this->btnUno->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Act1DosMedia::btnUno_MouseDown);
			this->btnUno->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Act1DosMedia::btnUno_MouseMove);
			this->btnUno->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Act1DosMedia::btnUno_MouseUp);
			// 
			// panelPuestoCuatro
			// 
			this->panelPuestoCuatro->BackColor = System::Drawing::Color::LightGray;
			this->panelPuestoCuatro->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panelPuestoCuatro->Location = System::Drawing::Point(380, 196);
			this->panelPuestoCuatro->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->panelPuestoCuatro->Name = L"panelPuestoCuatro";
			this->panelPuestoCuatro->Size = System::Drawing::Size(137, 155);
			this->panelPuestoCuatro->TabIndex = 3;
			// 
			// panelPuestoTres
			// 
			this->panelPuestoTres->BackColor = System::Drawing::Color::LightGray;
			this->panelPuestoTres->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panelPuestoTres->Location = System::Drawing::Point(518, 176);
			this->panelPuestoTres->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->panelPuestoTres->Name = L"panelPuestoTres";
			this->panelPuestoTres->Size = System::Drawing::Size(137, 155);
			this->panelPuestoTres->TabIndex = 2;
			// 
			// panelPuestoDos
			// 
			this->panelPuestoDos->BackColor = System::Drawing::Color::LightGray;
			this->panelPuestoDos->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panelPuestoDos->Location = System::Drawing::Point(656, 147);
			this->panelPuestoDos->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->panelPuestoDos->Name = L"panelPuestoDos";
			this->panelPuestoDos->Size = System::Drawing::Size(137, 155);
			this->panelPuestoDos->TabIndex = 1;
			// 
			// panelPuestoUno
			// 
			this->panelPuestoUno->BackColor = System::Drawing::Color::LightGray;
			this->panelPuestoUno->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panelPuestoUno->Location = System::Drawing::Point(798, 110);
			this->panelPuestoUno->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->panelPuestoUno->Name = L"panelPuestoUno";
			this->panelPuestoUno->Size = System::Drawing::Size(137, 155);
			this->panelPuestoUno->TabIndex = 0;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(364, 258);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(588, 168);
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			// 
			// Act1DosMedia
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(687, 395);
			this->Controls->Add(this->panelCentro);
			this->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->Name = L"Act1DosMedia";
			this->Opacity = 0;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Act1DosMedia";
			this->Activated += gcnew System::EventHandler(this, &Act1DosMedia::Act1DosMedia_Activated);
			this->Deactivate += gcnew System::EventHandler(this, &Act1DosMedia::Act1DosMedia_Deactivate);
			this->Load += gcnew System::EventHandler(this, &Act1DosMedia::Act1DosMedia_Load);
			this->panelCentro->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panelInstruccion->ResumeLayout(false);
			this->panelInstruccion->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnListo))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnRetroceder))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void inicializarPosicion();
	private: System::Void comprobarActividadCompletada();
	private: System::Void timerPantalla_Tick(System::Object^  sender, System::EventArgs^  e);
	private: System::Void Act1DosMedia_Load(System::Object^  sender, System::EventArgs^  e);
	private: System::Void Act1DosMedia_Activated(System::Object^  sender, System::EventArgs^  e);
	private: System::Void Act1DosMedia_Deactivate(System::Object^  sender, System::EventArgs^  e);
	private: System::Void btnRetroceder_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void btnListo_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void moverBoton(System::Windows::Forms::Button^ boton);
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
