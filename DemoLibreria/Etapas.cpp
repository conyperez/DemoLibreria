#include "Etapas.h"
#include "EtapasActividad.h"

System::Void DemoLibreria::Etapas::timerPantalla_Tick(System::Object^  sender, System::EventArgs^  e)
{
	this->Opacity += .05;
	if (this->Opacity == 1)
	{
		this->timerPantalla->Stop();
		this->formAnterior->Hide();
	}
}

System::Void DemoLibreria::Etapas::Etapas_Load(System::Object^  sender, System::EventArgs^  e)
{
	this->btnHabilidadUno->Enabled = false;
	this->btnHabilidadUnoN->Enabled = false;

	this->btnHabilidadDos->Enabled = false;
	this->btnHabilidadDosN->Enabled = false;
	this->timerPantalla->Start();


	actividad_asignada = controlador->determinarActividadDificultadHabilidad("estado");

	if (actividad_asignada[0] == "Habilidad_Uno")
	{
		//Desbloqueo los botones
		this->btnHabilidadUno->Enabled = true;
		this->btnHabilidadUnoN->Enabled = true;

	}
	else if (actividad_asignada[0] == "Habilidad_Dos")
	{
		//Desbloqueo los botones
		this->btnHabilidadDos->Enabled = true;
		this->btnHabilidadDosE->Visible = false;
		this->btnHabilidadDos->Visible = true;
		this->btnHabilidadDosN->Visible = true;
		this->btnHabilidadDosE->Enabled = true;
		this->btnHabilidadDosN->Enabled = true;

		MessageBox::Show("Avanzo a la siguiente habilidad");
	}
}

System::Void DemoLibreria::Etapas::Etapas_Activated(System::Object^  sender, System::EventArgs^  e)
{
	this->timerPantalla->Start();
}

System::Void DemoLibreria::Etapas::Etapas_Deactivate(System::Object^  sender, System::EventArgs^  e)
{
	if (this->WindowState == FormWindowState::Minimized)
	{
		this->Opacity = 0;
	}
}

System::Void DemoLibreria::Etapas::btnHabilidadUno_Click(System::Object^  sender, System::EventArgs^  e)
{
	gcnew EtapasActividad(this, this->usuario, this->controlador);
}

System::Void DemoLibreria::Etapas::btnHabilidadUnoN_MouseHover(System::Object^  sender, System::EventArgs^  e)
{
	this->btnHabilidadUno->Visible = true;
	this->btnHabilidadUnoN->Visible = false;
}

System::Void DemoLibreria::Etapas::btnHabilidadDosN_MouseHover(System::Object^  sender, System::EventArgs^  e)
{
	this->btnHabilidadDos->Visible = true;
	this->btnHabilidadDosN->Visible = false;
}

System::Void DemoLibreria::Etapas::btnHabilidadDos_Click(System::Object^  sender, System::EventArgs^  e)
{
	MessageBox::Show("Habilidad Dos");
}

System::Void DemoLibreria::Etapas::btnHabilidadUno_MouseLeave(System::Object^  sender, System::EventArgs^  e)
{
	this->btnHabilidadUnoN->Visible = true;
	this->btnHabilidadUno->Visible = false;
}

System::Void DemoLibreria::Etapas::btnHabilidadDos_MouseLeave(System::Object^  sender, System::EventArgs^  e)
{
	this->btnHabilidadDosN->Visible = true;
	this->btnHabilidadDos->Visible = false;
}