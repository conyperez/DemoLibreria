#include "Inicio.h"
#include "Etapas.h"

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
	gcnew Etapas(this);
}

