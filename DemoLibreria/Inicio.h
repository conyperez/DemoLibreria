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
	/// Resumen de Inicio
	/// </summary>
	public ref class Inicio : public System::Windows::Forms::Form
	{
	public:
		Inicio(void)
		{
			this->usuario = gcnew Usuario();

			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Inicio()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnComenzar;
	private: System::ComponentModel::BackgroundWorker^  backgroundWorker1;
	private: System::Windows::Forms::Timer^  timerPantalla;
	private: System::ComponentModel::IContainer^  components;


	private:
		Usuario^ usuario;
		AgenteControlador^ controlador;



#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Inicio::typeid));
			this->btnComenzar = (gcnew System::Windows::Forms::Button());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->timerPantalla = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// btnComenzar
			// 
			this->btnComenzar->BackColor = System::Drawing::Color::CornflowerBlue;
			this->btnComenzar->Font = (gcnew System::Drawing::Font(L"Malgun Gothic", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnComenzar->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnComenzar->Location = System::Drawing::Point(824, 317);
			this->btnComenzar->Name = L"btnComenzar";
			this->btnComenzar->Size = System::Drawing::Size(776, 142);
			this->btnComenzar->TabIndex = 0;
			this->btnComenzar->Text = L"Comenzar a jugar";
			this->btnComenzar->UseVisualStyleBackColor = false;
			this->btnComenzar->Click += gcnew System::EventHandler(this, &Inicio::btnComenzar_Click);
			// 
			// timerPantalla
			// 
			this->timerPantalla->Interval = 1;
			this->timerPantalla->Tick += gcnew System::EventHandler(this, &Inicio::timerPantalla_Tick);
			// 
			// Inicio
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(14, 29);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(2386, 1228);
			this->Controls->Add(this->btnComenzar);
			this->DoubleBuffered = true;
			this->Name = L"Inicio";
			this->Opacity = 0;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Inicio";
			this->Activated += gcnew System::EventHandler(this, &Inicio::Inicio_Activated);
			this->Deactivate += gcnew System::EventHandler(this, &Inicio::Inicio_Deactivate);
			this->Load += gcnew System::EventHandler(this, &Inicio::Inicio_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void timerPantalla_Tick(System::Object^  sender, System::EventArgs^  e);
	private: System::Void btnComenzar_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void Inicio_Load(System::Object^  sender, System::EventArgs^  e);
	private: System::Void Inicio_Activated(System::Object^  sender, System::EventArgs^  e);
	private: System::Void Inicio_Deactivate(System::Object^  sender, System::EventArgs^  e);
	};
}
