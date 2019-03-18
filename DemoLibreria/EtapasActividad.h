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
	/// Resumen de EtapasActividad
	/// </summary>
	ref class EtapasActividad : public System::Windows::Forms::Form
	{
	public:
		EtapasActividad(Form^ formAnterior)
		{
			this->formAnterior = formAnterior;
			InitializeComponent();
			this->Size = System::Drawing::Size(1050, 598);
			this->Show();
		}
		EtapasActividad(Form^ formAnterior, Usuario^ _usuario, AgenteControlador^ _controlador)
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
		~EtapasActividad()
		{
			if (components)
			{
				delete components;
			}
		}
	private: int num_actividad;
	private: Usuario^ usuario;
	private: AgenteControlador^ controlador;
	private: vector<String^> actividad_asignada;
	private: System::Windows::Forms::Form^ formAnterior;
	private: System::Windows::Forms::Timer^  timerPantalla;
	private: System::Windows::Forms::PictureBox^  btnRetroceder;
	private: System::Windows::Forms::PictureBox^  btn1E;
	private: System::Windows::Forms::PictureBox^  btn2E;
	private: System::Windows::Forms::PictureBox^  btn3E;
	private: System::Windows::Forms::PictureBox^  btn4E;
	private: System::Windows::Forms::PictureBox^  btn4;
	private: System::Windows::Forms::PictureBox^  btn3;
	private: System::Windows::Forms::PictureBox^  btn2;
	private: System::Windows::Forms::PictureBox^  btn1;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(EtapasActividad::typeid));
			this->timerPantalla = (gcnew System::Windows::Forms::Timer(this->components));
			this->btnRetroceder = (gcnew System::Windows::Forms::PictureBox());
			this->btn1E = (gcnew System::Windows::Forms::PictureBox());
			this->btn2E = (gcnew System::Windows::Forms::PictureBox());
			this->btn3E = (gcnew System::Windows::Forms::PictureBox());
			this->btn4E = (gcnew System::Windows::Forms::PictureBox());
			this->btn4 = (gcnew System::Windows::Forms::PictureBox());
			this->btn3 = (gcnew System::Windows::Forms::PictureBox());
			this->btn2 = (gcnew System::Windows::Forms::PictureBox());
			this->btn1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnRetroceder))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn1E))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn2E))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn3E))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn4E))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn1))->BeginInit();
			this->SuspendLayout();
			// 
			// timerPantalla
			// 
			this->timerPantalla->Interval = 1;
			this->timerPantalla->Tick += gcnew System::EventHandler(this, &EtapasActividad::timerPantalla_Tick);
			// 
			// btnRetroceder
			// 
			this->btnRetroceder->BackColor = System::Drawing::Color::Transparent;
			this->btnRetroceder->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnRetroceder.BackgroundImage")));
			this->btnRetroceder->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnRetroceder->Location = System::Drawing::Point(56, 1055);
			this->btnRetroceder->Name = L"btnRetroceder";
			this->btnRetroceder->Size = System::Drawing::Size(335, 137);
			this->btnRetroceder->TabIndex = 1;
			this->btnRetroceder->TabStop = false;
			this->btnRetroceder->Click += gcnew System::EventHandler(this, &EtapasActividad::btnRetroceder_Click);
			// 
			// btn1E
			// 
			this->btn1E->BackColor = System::Drawing::Color::Transparent;
			this->btn1E->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn1E.BackgroundImage")));
			this->btn1E->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn1E->Location = System::Drawing::Point(147, 34);
			this->btn1E->Name = L"btn1E";
			this->btn1E->Size = System::Drawing::Size(275, 880);
			this->btn1E->TabIndex = 2;
			this->btn1E->TabStop = false;
			// 
			// btn2E
			// 
			this->btn2E->BackColor = System::Drawing::Color::Transparent;
			this->btn2E->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn2E.BackgroundImage")));
			this->btn2E->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn2E->Location = System::Drawing::Point(632, 147);
			this->btn2E->Name = L"btn2E";
			this->btn2E->Size = System::Drawing::Size(460, 691);
			this->btn2E->TabIndex = 2;
			this->btn2E->TabStop = false;
			// 
			// btn3E
			// 
			this->btn3E->BackColor = System::Drawing::Color::Transparent;
			this->btn3E->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn3E.BackgroundImage")));
			this->btn3E->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn3E->Location = System::Drawing::Point(1268, 365);
			this->btn3E->Name = L"btn3E";
			this->btn3E->Size = System::Drawing::Size(439, 662);
			this->btn3E->TabIndex = 3;
			this->btn3E->TabStop = false;
			// 
			// btn4E
			// 
			this->btn4E->BackColor = System::Drawing::Color::Transparent;
			this->btn4E->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn4E.BackgroundImage")));
			this->btn4E->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn4E->Location = System::Drawing::Point(1848, 12);
			this->btn4E->Name = L"btn4E";
			this->btn4E->Size = System::Drawing::Size(386, 792);
			this->btn4E->TabIndex = 4;
			this->btn4E->TabStop = false;
			// 
			// btn4
			// 
			this->btn4->BackColor = System::Drawing::Color::Transparent;
			this->btn4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn4.BackgroundImage")));
			this->btn4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn4->Location = System::Drawing::Point(1848, 12);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(386, 792);
			this->btn4->TabIndex = 12;
			this->btn4->TabStop = false;
			this->btn4->Visible = false;
			this->btn4->Click += gcnew System::EventHandler(this, &EtapasActividad::btn4_Click);
			// 
			// btn3
			// 
			this->btn3->BackColor = System::Drawing::Color::Transparent;
			this->btn3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn3.BackgroundImage")));
			this->btn3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn3->Location = System::Drawing::Point(1268, 365);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(439, 662);
			this->btn3->TabIndex = 11;
			this->btn3->TabStop = false;
			this->btn3->Visible = false;
			this->btn3->Click += gcnew System::EventHandler(this, &EtapasActividad::btn3_Click);
			// 
			// btn2
			// 
			this->btn2->BackColor = System::Drawing::Color::Transparent;
			this->btn2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn2.BackgroundImage")));
			this->btn2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn2->Location = System::Drawing::Point(632, 147);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(460, 691);
			this->btn2->TabIndex = 9;
			this->btn2->TabStop = false;
			this->btn2->Visible = false;
			this->btn2->Click += gcnew System::EventHandler(this, &EtapasActividad::btn2_Click);
			// 
			// btn1
			// 
			this->btn1->BackColor = System::Drawing::Color::Transparent;
			this->btn1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn1.BackgroundImage")));
			this->btn1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn1->Location = System::Drawing::Point(147, 34);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(275, 880);
			this->btn1->TabIndex = 10;
			this->btn1->TabStop = false;
			this->btn1->Visible = false;
			this->btn1->Click += gcnew System::EventHandler(this, &EtapasActividad::btn1_Click);
			// 
			// EtapasActividad
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(14, 29);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(2386, 1228);
			this->Controls->Add(this->btn4);
			this->Controls->Add(this->btn3);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->btn1);
			this->Controls->Add(this->btn4E);
			this->Controls->Add(this->btn3E);
			this->Controls->Add(this->btn2E);
			this->Controls->Add(this->btn1E);
			this->Controls->Add(this->btnRetroceder);
			this->Name = L"EtapasActividad";
			this->Opacity = 0;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"EtapasActividad";
			this->Activated += gcnew System::EventHandler(this, &EtapasActividad::EtapasActividad_Activated);
			this->Deactivate += gcnew System::EventHandler(this, &EtapasActividad::EtapasActividad_Deactivate);
			this->Load += gcnew System::EventHandler(this, &EtapasActividad::EtapasActividad_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnRetroceder))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn1E))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn2E))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn3E))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn4E))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void timerPantalla_Tick(System::Object^  sender, System::EventArgs^  e);
	private: System::Void EtapasActividad_Load(System::Object^  sender, System::EventArgs^  e);
	private: System::Void EtapasActividad_Activated(System::Object^  sender, System::EventArgs^  e);
	private: System::Void EtapasActividad_Deactivate(System::Object^  sender, System::EventArgs^  e);
	private: System::Void btnRetroceder_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void btn1_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void btn2_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void btn3_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void btn4_Click(System::Object^  sender, System::EventArgs^  e);
	};
}
