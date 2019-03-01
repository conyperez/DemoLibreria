#include "Act1UnoAlta.h"
#include "Act1DosAlta.h"
#include "FormEstrella.h"
#include "EtapasActividad.h"

System::Void DemoLibreria::Act1UnoAlta::timerPantalla_Tick(System::Object^  sender, System::EventArgs^  e)
{
	this->Opacity += .05;
	if (this->Opacity == 1)
	{
		this->timerPantalla->Stop();
		this->formAnterior->Close();
	}
}

System::Void DemoLibreria::Act1UnoAlta::Act1UnoAlta_Load(System::Object^  sender, System::EventArgs^  e)
{
	this->timerPantalla->Start();
}

System::Void DemoLibreria::Act1UnoAlta::Act1UnoAlta_Activated(System::Object^  sender, System::EventArgs^  e)
{
	this->timerPantalla->Start();
}

System::Void DemoLibreria::Act1UnoAlta::Act1UnoAlta_Deactivate(System::Object^  sender, System::EventArgs^  e)
{
	if (this->WindowState == FormWindowState::Minimized)
	{
		this->Opacity = 0;
	}
}

System::Void DemoLibreria::Act1UnoAlta::btnRetroceder_Click(System::Object^  sender, System::EventArgs^  e)
{
	gcnew EtapasActividad(this, this->usuario, this->controlador);
}

System::Void DemoLibreria::Act1UnoAlta::btnListo_Click(System::Object^  sender, System::EventArgs^ e)
{
	vector<String^> vectRespuestas;
	vectRespuestas.push_back(Convert::ToString(this->marcaUno1));
	vectRespuestas.push_back(Convert::ToString(this->marcaUno2));
	vectRespuestas.push_back(Convert::ToString(this->marcaUno3));
	vectRespuestas.push_back(Convert::ToString(this->marcaDos1));
	vectRespuestas.push_back(Convert::ToString(this->marcaDos2));
	vectRespuestas.push_back(Convert::ToString(this->marcaDos3));
	vectRespuestas.push_back(Convert::ToString(this->marcaTres1));
	vectRespuestas.push_back(Convert::ToString(this->marcaTres2));
	vectRespuestas.push_back(Convert::ToString(this->marcaTres3));
	vectRespuestas.push_back(Convert::ToString(this->marcaCuatro1));
	vectRespuestas.push_back(Convert::ToString(this->marcaCuatro2));
	vectRespuestas.push_back(Convert::ToString(this->marcaCuatro3));

	controlador->evaluarActividad("Habilidad_Uno", "Dificil", 1, vectRespuestas);

	MessageBox::Show("Nivel de Logro: " + controlador->obtenerNivelLogro());

	controlador->determinarNivelDeActuacion();

	int cantidad;
	if (controlador->getUsuario()->getNivel_actuacion() == "Alto")
	{
		cantidad = 3;
	}
	else if (controlador->getUsuario()->getNivel_actuacion() == "Medio")
	{
		cantidad = 2;
	}
	else if (controlador->getUsuario()->getNivel_actuacion() == "Bajo")
	{
		cantidad = 1;
	}

	//Muestro el nivel de actuacion
	MessageBox::Show("Nivel de Actuacion: " + controlador->getUsuario()->getNivel_actuacion());

	FormEstrella^ form_estrella = gcnew FormEstrella("Habilidad_Uno", this, cantidad, this->usuario, this->controlador);
	form_estrella->ShowDialog();
}

System::Void DemoLibreria::Act1UnoAlta::numUno1_Click(System::Object^  sender, System::EventArgs^ e)
{
	this->numUno1->Visible = false;
	this->numUno1M->Visible = true;
	this->marcaUno1 = true;
}

System::Void DemoLibreria::Act1UnoAlta::numUno2_Click(System::Object^  sender, System::EventArgs^ e)
{
	this->numUno2->Visible = false;
	this->numUno2M->Visible = true;
	this->marcaUno2 = true;
}

System::Void DemoLibreria::Act1UnoAlta::numUno3_Click(System::Object^  sender, System::EventArgs^ e)
{
	this->numUno3->Visible = false;
	this->numUno3M->Visible = true;
	this->marcaUno3 = true;
}

System::Void DemoLibreria::Act1UnoAlta::numDos1_Click(System::Object^  sender, System::EventArgs^ e)
{
	this->numDos1->Visible = false;
	this->numDos1M->Visible = true;
	this->marcaDos1 = true;
}

System::Void DemoLibreria::Act1UnoAlta::numDos2_Click(System::Object^  sender, System::EventArgs^ e)
{
	this->numDos2->Visible = false;
	this->numDos2M->Visible = true;
	this->marcaDos2 = true;
}

System::Void DemoLibreria::Act1UnoAlta::numDos3_Click(System::Object^  sender, System::EventArgs^ e)
{
	this->numDos3->Visible = false;
	this->numDos3M->Visible = true;
	this->marcaDos3 = true;
}

System::Void DemoLibreria::Act1UnoAlta::numTres1_Click(System::Object^  sender, System::EventArgs^ e)
{
	this->numTres1->Visible = false;
	this->numTres1M->Visible = true;
	this->marcaTres1 = true;
}

System::Void DemoLibreria::Act1UnoAlta::numTres2_Click(System::Object^  sender, System::EventArgs^ e)
{
	this->numTres2->Visible = false;
	this->numTres2M->Visible = true;
	this->marcaTres2 = true;
}

System::Void DemoLibreria::Act1UnoAlta::numTres3_Click(System::Object^  sender, System::EventArgs^ e)
{
	this->numTres3->Visible = false;
	this->numTres3M->Visible = true;
	this->marcaTres3 = true;
}

System::Void DemoLibreria::Act1UnoAlta::numCuatro1_Click(System::Object^  sender, System::EventArgs^ e) 
{
	this->numCuatro1->Visible = false;
	this->numCuatro1M->Visible = true;
	this->marcaCuatro1 = true;
}

System::Void DemoLibreria::Act1UnoAlta::numCuatro2_Click(System::Object^  sender, System::EventArgs^ e) 
{
	this->numCuatro2->Visible = false;
	this->numCuatro2M->Visible = true;
	this->marcaCuatro2 = true;
}

System::Void DemoLibreria::Act1UnoAlta::numCuatro3_Click(System::Object^  sender, System::EventArgs^ e) 
{
	this->numCuatro3->Visible = false;
	this->numCuatro3M->Visible = true;
	this->marcaCuatro3 = true;
}

System::Void DemoLibreria::Act1UnoAlta::numUno1M_Click(System::Object^  sender, System::EventArgs^  e) 
{
	this->numUno1->Visible = true;
	this->numUno1M->Visible = false;
	this->marcaUno1 = false;
}

System::Void DemoLibreria::Act1UnoAlta::numUno2M_Click(System::Object^  sender, System::EventArgs^  e)
{
	this->numUno2->Visible = true;
	this->numUno2M->Visible = false;
	this->marcaUno2 = false;
}

System::Void DemoLibreria::Act1UnoAlta::numUno3M_Click(System::Object^  sender, System::EventArgs^  e) 
{
	this->numUno3->Visible = true;
	this->numUno3M->Visible = false;
	this->marcaUno3 = false;
}

System::Void DemoLibreria::Act1UnoAlta::numDos1M_Click(System::Object^  sender, System::EventArgs^  e) 
{
	this->numDos1->Visible = true;
	this->numDos1M->Visible = false;
	this->marcaDos1 = false;
}

System::Void DemoLibreria::Act1UnoAlta::numDos2M_Click(System::Object^  sender, System::EventArgs^  e) 
{
	this->numDos2->Visible = true;
	this->numDos2M->Visible = false;
	this->marcaDos2 = false;
}

System::Void DemoLibreria::Act1UnoAlta::numDos3M_Click(System::Object^  sender, System::EventArgs^  e) 
{
	this->numDos3->Visible = true;
	this->numDos3M->Visible = false;
	this->marcaDos3 = false;
}

System::Void DemoLibreria::Act1UnoAlta::numTres1M_Click(System::Object^  sender, System::EventArgs^  e) 
{
	this->numTres1->Visible = true;
	this->numTres1M->Visible = false;
	this->marcaTres1 = false;
}

System::Void DemoLibreria::Act1UnoAlta::numTres2M_Click(System::Object^  sender, System::EventArgs^  e) 
{
	this->numTres2->Visible = true;
	this->numTres2M->Visible = false;
	this->marcaTres2 = false;
}

System::Void DemoLibreria::Act1UnoAlta::numTres3M_Click(System::Object^  sender, System::EventArgs^  e) 
{
	this->numTres3->Visible = true;
	this->numTres3M->Visible = false;
	this->marcaTres3 = false;
}

System::Void DemoLibreria::Act1UnoAlta::numCuatro1M_Click(System::Object^  sender, System::EventArgs^  e) 
{
	this->numCuatro1->Visible = true;
	this->numCuatro1M->Visible = false;
	this->marcaCuatro1 = false;
}

System::Void DemoLibreria::Act1UnoAlta::numCuatro2M_Click(System::Object^  sender, System::EventArgs^  e) 
{
	this->numCuatro2->Visible = true;
	this->numCuatro2M->Visible = false;
	this->marcaCuatro2 = false;
}

System::Void DemoLibreria::Act1UnoAlta::numCuatro3M_Click(System::Object^  sender, System::EventArgs^  e) 
{
	this->numCuatro3->Visible = true;
	this->numCuatro3M->Visible = false;
	this->marcaCuatro3 = false;
}
