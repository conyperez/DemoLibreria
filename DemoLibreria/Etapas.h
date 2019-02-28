#pragma once

#include "Usuario.h"
#include "AgenteControlador.h"

namespace DemoLibreria {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Etapas
	/// </summary>
	ref class Etapas : public System::Windows::Forms::Form
	{
	public:
		Etapas(Form^ formAnterior)
		{
			this->formAnterior = formAnterior;
			InitializeComponent();
			this->Size = System::Drawing::Size(1050, 598);
			this->Show();
		}

		Etapas(Form^ formAnterior, Usuario^ _usuario, AgenteControlador^ _controlador)
		{
			this->formAnterior = formAnterior;
			this->usuario = _usuario;
			this->controlador = _controlador;
			InitializeComponent();
			this->Size = System::Drawing::Size(1050, 598);
			this->Show();
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Etapas()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Form^ formAnterior;
	private: System::Windows::Forms::Timer^  timerPantalla;

	private: System::Windows::Forms::PictureBox^  btnHabilidadDos;
	private: System::Windows::Forms::PictureBox^  btnHabilidadUno;
	private: System::Windows::Forms::PictureBox^  btnHabilidadDosN;

	private: System::Windows::Forms::PictureBox^  btnHabilidadUnoN;
	private: System::Windows::Forms::PictureBox^  btnHabilidadDosE;


	private: System::ComponentModel::IContainer^  components;

	private:
		int num_actividad;
		Usuario^ usuario;
		AgenteControlador^ controlador;
		vector<String^> actividad_asignada;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Etapas::typeid));
			this->timerPantalla = (gcnew System::Windows::Forms::Timer(this->components));
			this->btnHabilidadDos = (gcnew System::Windows::Forms::PictureBox());
			this->btnHabilidadUno = (gcnew System::Windows::Forms::PictureBox());
			this->btnHabilidadDosN = (gcnew System::Windows::Forms::PictureBox());
			this->btnHabilidadUnoN = (gcnew System::Windows::Forms::PictureBox());
			this->btnHabilidadDosE = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnHabilidadDos))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnHabilidadUno))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnHabilidadDosN))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnHabilidadUnoN))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnHabilidadDosE))->BeginInit();
			this->SuspendLayout();
			// 
			// timerPantalla
			// 
			this->timerPantalla->Interval = 1;
			this->timerPantalla->Tick += gcnew System::EventHandler(this, &Etapas::timerPantalla_Tick);
			// 
			// btnHabilidadDos
			// 
			this->btnHabilidadDos->BackColor = System::Drawing::Color::Transparent;
			this->btnHabilidadDos->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnHabilidadDos.BackgroundImage")));
			this->btnHabilidadDos->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnHabilidadDos->Location = System::Drawing::Point(512, 168);
			this->btnHabilidadDos->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->btnHabilidadDos->Name = L"btnHabilidadDos";
			this->btnHabilidadDos->Size = System::Drawing::Size(225, 109);
			this->btnHabilidadDos->TabIndex = 1;
			this->btnHabilidadDos->TabStop = false;
			this->btnHabilidadDos->Visible = false;
			this->btnHabilidadDos->Click += gcnew System::EventHandler(this, &Etapas::btnHabilidadDos_Click);
			this->btnHabilidadDos->MouseLeave += gcnew System::EventHandler(this, &Etapas::btnHabilidadDos_MouseLeave);
			// 
			// btnHabilidadUno
			// 
			this->btnHabilidadUno->BackColor = System::Drawing::Color::Transparent;
			this->btnHabilidadUno->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnHabilidadUno.BackgroundImage")));
			this->btnHabilidadUno->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnHabilidadUno->Location = System::Drawing::Point(273, 51);
			this->btnHabilidadUno->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->btnHabilidadUno->Name = L"btnHabilidadUno";
			this->btnHabilidadUno->Size = System::Drawing::Size(225, 109);
			this->btnHabilidadUno->TabIndex = 0;
			this->btnHabilidadUno->TabStop = false;
			this->btnHabilidadUno->Visible = false;
			this->btnHabilidadUno->Click += gcnew System::EventHandler(this, &Etapas::btnHabilidadUno_Click);
			this->btnHabilidadUno->MouseLeave += gcnew System::EventHandler(this, &Etapas::btnHabilidadUno_MouseLeave);
			// 
			// btnHabilidadDosN
			// 
			this->btnHabilidadDosN->BackColor = System::Drawing::Color::Transparent;
			this->btnHabilidadDosN->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnHabilidadDosN.BackgroundImage")));
			this->btnHabilidadDosN->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnHabilidadDosN->Location = System::Drawing::Point(512, 168);
			this->btnHabilidadDosN->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->btnHabilidadDosN->Name = L"btnHabilidadDosN";
			this->btnHabilidadDosN->Size = System::Drawing::Size(225, 109);
			this->btnHabilidadDosN->TabIndex = 3;
			this->btnHabilidadDosN->TabStop = false;
			this->btnHabilidadDosN->Visible = false;
			this->btnHabilidadDosN->MouseHover += gcnew System::EventHandler(this, &Etapas::btnHabilidadDosN_MouseHover);
			// 
			// btnHabilidadUnoN
			// 
			this->btnHabilidadUnoN->BackColor = System::Drawing::Color::Transparent;
			this->btnHabilidadUnoN->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnHabilidadUnoN.BackgroundImage")));
			this->btnHabilidadUnoN->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnHabilidadUnoN->Location = System::Drawing::Point(273, 51);
			this->btnHabilidadUnoN->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->btnHabilidadUnoN->Name = L"btnHabilidadUnoN";
			this->btnHabilidadUnoN->Size = System::Drawing::Size(225, 109);
			this->btnHabilidadUnoN->TabIndex = 2;
			this->btnHabilidadUnoN->TabStop = false;
			this->btnHabilidadUnoN->MouseHover += gcnew System::EventHandler(this, &Etapas::btnHabilidadUnoN_MouseHover);
			// 
			// btnHabilidadDosE
			// 
			this->btnHabilidadDosE->BackColor = System::Drawing::Color::Transparent;
			this->btnHabilidadDosE->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnHabilidadDosE.BackgroundImage")));
			this->btnHabilidadDosE->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnHabilidadDosE->Location = System::Drawing::Point(512, 168);
			this->btnHabilidadDosE->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->btnHabilidadDosE->Name = L"btnHabilidadDosE";
			this->btnHabilidadDosE->Size = System::Drawing::Size(225, 109);
			this->btnHabilidadDosE->TabIndex = 4;
			this->btnHabilidadDosE->TabStop = false;
			// 
			// Etapas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(687, 395);
			this->Controls->Add(this->btnHabilidadDosE);
			this->Controls->Add(this->btnHabilidadDosN);
			this->Controls->Add(this->btnHabilidadUnoN);
			this->Controls->Add(this->btnHabilidadDos);
			this->Controls->Add(this->btnHabilidadUno);
			this->Margin = System::Windows::Forms::Padding(1, 1, 1, 1);
			this->Name = L"Etapas";
			this->Opacity = 0;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Etapas";
			this->Activated += gcnew System::EventHandler(this, &Etapas::Etapas_Activated);
			this->Deactivate += gcnew System::EventHandler(this, &Etapas::Etapas_Deactivate);
			this->Load += gcnew System::EventHandler(this, &Etapas::Etapas_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnHabilidadDos))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnHabilidadUno))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnHabilidadDosN))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnHabilidadUnoN))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnHabilidadDosE))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void timerPantalla_Tick(System::Object^  sender, System::EventArgs^  e);
	private: System::Void Etapas_Load(System::Object^  sender, System::EventArgs^  e);
	private: System::Void Etapas_Activated(System::Object^  sender, System::EventArgs^  e);
	private: System::Void Etapas_Deactivate(System::Object^  sender, System::EventArgs^  e);
	private: System::Void btnHabilidadUno_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void btnHabilidadUnoN_MouseHover(System::Object^  sender, System::EventArgs^  e);
	private: System::Void btnHabilidadDos_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void btnHabilidadDosN_MouseHover(System::Object^  sender, System::EventArgs^  e);
	private: System::Void btnHabilidadUno_MouseLeave(System::Object^  sender, System::EventArgs^  e);
	private: System::Void btnHabilidadDos_MouseLeave(System::Object^  sender, System::EventArgs^  e);
	};
}
