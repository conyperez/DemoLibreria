#include "FormEstrella.h"
#include "EtapasActividad.h"

System::Void DemoLibreria::FormEstrella::button1_Click(System::Object^  sender, System::EventArgs^  e) {
	determinarFormHabilidad();
	this->Close();
}

System::Void DemoLibreria::FormEstrella::determinarFormHabilidad() {

	if (habilidad == "Habilidad_Uno") 
	{
		gcnew EtapasActividad(formActividad, usuario, controlador);
	}
}

System::Void DemoLibreria::FormEstrella::FormEstrella_Load(System::Object^  sender, System::EventArgs^  e) {
	if (numEstrellas == 1)
	{
		mensaje1->Visible = false;
		mensaje2->Visible = false;
		mensaje3->Visible = true;
		estrellaUno->Visible = true;
		estrellaDos->Visible = false;
		estrellaTres->Visible = false;
		estrellaDosE->Visible = true;
		estrellaTresE->Visible = true;
	}
	else if (numEstrellas == 2) {
		mensaje1->Visible = false;
		mensaje2->Visible = true;
		mensaje3->Visible = false;
		estrellaUno->Visible = true;
		estrellaDos->Visible = true;
		estrellaTres->Visible = false;
		estrellaTresE->Visible = true;
	}
	else {
		mensaje1->Visible = true;
		mensaje2->Visible = false;
		mensaje3->Visible = false;
		estrellaUno->Visible = true;
		estrellaDos->Visible = true;
		estrellaTres->Visible = true;
	}
	this->timer1->Start();
}
System::Void DemoLibreria::FormEstrella::timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
	this->Opacity += .1;
	//Detener el timer
	if (this->Opacity == 1) {
		this->timer1->Stop();
	}
}