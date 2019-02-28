#include "Etapas.h"
#include "Act1UnoMedia.h"
#include "Act1DosMedia.h"
#include "Act1UnoAlta.h"
#include "Act1DosAlta.h"

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

	num_actividad = Convert::ToInt32(actividad_asignada[2]);
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
	//veo que dificultad de le toca y que actividad
	if (actividad_asignada[1] == "Dificil")
	{
		if (num_actividad == 1)
		{
			gcnew Act1UnoAlta(this);
		}
		else
		{
			gcnew Act1DosAlta(this);
		}
	}
	else if (actividad_asignada[1] == "Medio")
	{
		if (num_actividad == 1)
		{
			gcnew Act1UnoMedia(this, usuario, controlador);
		}
		else
		{
			gcnew Act1DosMedia(this);
		}
	}
	else //dificultad Baja
	{
		if (num_actividad == 1)
		{
			MessageBox::Show("Esta en la dificultad Baja actividad 1");
		}
		else
		{
			MessageBox::Show("Esta en la dificultad Baja actividad 2");
		}
	}
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