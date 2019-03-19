#include "Inicio.h"
#include "Etapas.h"
#include "Hecho.h"
#include "Regla.h"
#include "Argumento.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Threading;

[STAThread]
void Main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	DemoLibreria::Inicio form;
	form.Size = System::Drawing::Size(1050, 598);
	Application::Run(%form);
}

System::Void DemoLibreria::Inicio::timerPantalla_Tick(System::Object^  sender, System::EventArgs^  e)
{
	this->Opacity += .05;
	if (this->Opacity == 1)
	{
		this->timerPantalla->Stop();
	}
}

System::Void DemoLibreria::Inicio::Inicio_Load(System::Object^  sender, System::EventArgs^  e)
{


	this->timerPantalla->Start();

}

System::Void DemoLibreria::Inicio::Inicio_Activated(System::Object^  sender, System::EventArgs^  e)
{
	this->timerPantalla->Start();
}

System::Void DemoLibreria::Inicio::Inicio_Deactivate(System::Object^  sender, System::EventArgs^  e)
{
	if (this->WindowState == FormWindowState::Minimized)
	{
		this->Opacity = 0;
	}
}

System::Void DemoLibreria::Inicio::btnComenzar_Click(System::Object^  sender, System::EventArgs^  e)
{
	//Inicializo las componentes

	vector<String^> habilidades;

	habilidades.push_back("Habilidad_Uno");
	habilidades.push_back("Habilidad_Dos");

	vector<String^> dificultades;

	dificultades.push_back("Facil");
	dificultades.push_back("Medio");
	dificultades.push_back("Dificil");

	this->usuario->setHabilidades(habilidades);
	this->usuario->setDificultades(dificultades);
	this->usuario->setTotalActividades(2);

	//Ingreso los datos iniciales del usuario
	//****como no hay un lobby de habilidad y actividades de dificultad baja**
	this->usuario->setHabilidad("Habilidad_Uno");
	this->usuario->setDificultad("Facil");
	this->usuario->setNumero_actividad(2);
	vector<Hecho^> cuerpo_nivelActuacion;
	cuerpo_nivelActuacion.push_back(gcnew Hecho("rangoActuacion", gcnew Argumento("80-100"), VERDADERO));
	cuerpo_nivelActuacion.push_back(gcnew Hecho("peso", gcnew Argumento("50"), VERDADERO));

	this->usuario->setReglaNivActuacion(gcnew Regla(gcnew Hecho("nivelActuacion", gcnew Argumento("Alto"), VERDADERO), cuerpo_nivelActuacion));
	this->usuario->setHizo_actividad(true);

	this->controlador = gcnew AgenteControlador(usuario, "Base_de_conocimiento/Base_de_Conocimiento.txt", "Usuario",29,69,100);


	gcnew Etapas(this, usuario, controlador);
}

