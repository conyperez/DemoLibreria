#include "EtapasActividad.h"
#include "Etapas.h"
#include "Act1DosAlta.h"
#include "Act1DosMedia.h"
#include "Act1UnoAlta.h"
#include "Act1UnoMedia.h"

System::Void DemoLibreria::EtapasActividad::timerPantalla_Tick(System::Object^  sender, System::EventArgs^  e)
{
	this->Opacity += .05;
	if (this->Opacity == 1)
	{
		this->timerPantalla->Stop();
		this->formAnterior->Close();
	}
}

System::Void DemoLibreria::EtapasActividad::EtapasActividad_Load(System::Object^  sender, System::EventArgs^  e)
{
	this->timerPantalla->Start();
	
	// Si coloco esto aca, ahi sale la tercera actividad...
	actividad_asignada = controlador->determinarActividadDificultadHabilidad("estado");

	//veo que dificultad de le toca y que actividad
	if (actividad_asignada[1] == "Dificil")
	{
		if (this->controlador->getPercepciones()->getNumeroActividad() == 1)
		{
			this->btn3->Visible = true;
			this->btn3E->Visible = false;
		}
		else
		{
			this->btn4->Visible = true;
			this->btn4E->Visible = false;
		}
	}
	else if (actividad_asignada[1] == "Medio")
	{
		if (actividad_asignada[2] == "1")
		{
			this->btn1->Visible = true;
			this->btn1E->Visible = false;
		}
		else
		{
			this->btn2->Visible = true;
			this->btn2E->Visible = false;
		}
	}
	else //dificultad Baja
	{
		if (actividad_asignada[2] == "1")
		{
			MessageBox::Show("Esta en la dificultad Baja actividad 1");
		}
		else
		{
			MessageBox::Show("Esta en la dificultad Baja actividad 2");
		}
	}

	if (actividad_asignada[0] == "Habilidad_Dos")
	{
		MessageBox::Show("Avanza a la siguiente habilidad");
	}
}

System::Void DemoLibreria::EtapasActividad::EtapasActividad_Activated(System::Object^  sender, System::EventArgs^  e)
{
	this->timerPantalla->Start();
}

System::Void DemoLibreria::EtapasActividad::EtapasActividad_Deactivate(System::Object^  sender, System::EventArgs^  e)
{
	if (this->WindowState == FormWindowState::Minimized)
	{
		this->Opacity = 0;
	}
}

System::Void DemoLibreria::EtapasActividad::btnRetroceder_Click(System::Object^  sender, System::EventArgs^  e)
{
	gcnew Etapas(this, this->usuario, this->controlador);
}

System::Void DemoLibreria::EtapasActividad::btn1_Click(System::Object^  sender, System::EventArgs^  e) 
{
	gcnew Act1UnoMedia(this, this->usuario, this->controlador);
}

System::Void DemoLibreria::EtapasActividad::btn2_Click(System::Object^  sender, System::EventArgs^  e) 
{
	gcnew Act1DosMedia(this, this->usuario, this->controlador);
}

System::Void DemoLibreria::EtapasActividad::btn3_Click(System::Object^  sender, System::EventArgs^  e) 
{
	gcnew Act1UnoAlta(this, this->usuario, this->controlador);
}

System::Void DemoLibreria::EtapasActividad::btn4_Click(System::Object^  sender, System::EventArgs^  e) 
{
	gcnew Act1DosAlta(this, this->usuario, this->controlador);
}