#include "Act1UnoMedia.h"
#include "Act1DosMedia.h"
#include "Etapas.h"

System::Void DemoLibreria::Act1UnoMedia::timerPantalla_Tick(System::Object^  sender, System::EventArgs^  e)
{
	this->Opacity += .05;
	if (this->Opacity == 1)
	{
		this->timerPantalla->Stop();
		this->formAnterior->Close();
	}
}

System::Void DemoLibreria::Act1UnoMedia::Act1UnoMedia_Load(System::Object^  sender, System::EventArgs^  e)
{
	this->timerPantalla->Start();
}

System::Void DemoLibreria::Act1UnoMedia::Act1UnoMedia_Activated(System::Object^  sender, System::EventArgs^  e)
{
	this->timerPantalla->Start();
}

System::Void DemoLibreria::Act1UnoMedia::Act1UnoMedia_Deactivate(System::Object^  sender, System::EventArgs^  e)
{
	if (this->WindowState == FormWindowState::Minimized)
	{
		this->Opacity = 0;
	}
}

System::Void DemoLibreria::Act1UnoMedia::btnRetroceder_Click(System::Object^  sender, System::EventArgs^  e) 
{
	gcnew Etapas(this);
}

System::Void DemoLibreria::Act1UnoMedia::btnListo_Click(System::Object^  sender, System::EventArgs^  e) 
{
	gcnew Act1DosMedia(this);
}

System::Void DemoLibreria::Act1UnoMedia::inicializarPosicion()
{
	this->xBolsaUno = this->bolsaUno->Location.X;					this->yBolsaUno = this->bolsaUno->Location.Y;
	this->xBolsaDos = this->bolsaDos->Location.X;					this->yBolsaDos = this->bolsaDos->Location.Y;
	this->xBolsaTres = this->bolsaTres->Location.X;					this->yBolsaTres = this->bolsaTres->Location.Y;
	this->xBolsaCuatro = this->bolsaCuatro->Location.X;				this->yBolsaCuatro = this->bolsaCuatro->Location.Y;
	this->xBolsaCinco = this->bolsaCinco->Location.X;				this->yBolsaCinco = this->bolsaCinco->Location.Y;
}

System::Void DemoLibreria::Act1UnoMedia::comprobarActividadCompletada()
{
	if (listoBtnUno && listoBtnDos && listoBtnTres && listoBtnCuatro && listoBtnCinco)
	{
		this->btnListo->Enabled = true;
		this->btnListo->Visible = true;
	}
	else
	{
		this->btnListo->Enabled = false;
		this->btnListo->Visible = false;
	}
}

System::Void DemoLibreria::Act1UnoMedia::moverBoton(System::Windows::Forms::Button^ boton)
{
	boton->Location = System::Drawing::Point(this->posMouseFormX - this->posMouseBtnX, this->posMouseFormY - this->posMouseBtnY);
	this->posActBtnX = boton->Location.X;
	this->posActBtnY = boton->Location.Y;
}

System::Void DemoLibreria::Act1UnoMedia::bolsaUno_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
{
	this->posMouseBtnX = e->Location.X;
	this->posMouseBtnY = e->Location.Y;
	this->btnPresionado = true;
}

System::Void DemoLibreria::Act1UnoMedia::bolsaDos_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
{
	this->posMouseBtnX = e->Location.X;
	this->posMouseBtnY = e->Location.Y;
	this->btnPresionado = true;
}

System::Void DemoLibreria::Act1UnoMedia::bolsaTres_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
{
	this->posMouseBtnX = e->Location.X;
	this->posMouseBtnY = e->Location.Y;
	this->btnPresionado = true;
}

System::Void DemoLibreria::Act1UnoMedia::bolsaCuatro_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
{
	this->posMouseBtnX = e->Location.X;
	this->posMouseBtnY = e->Location.Y;
	this->btnPresionado = true;
}

System::Void DemoLibreria::Act1UnoMedia::bolsaCinco_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
{
	this->posMouseBtnX = e->Location.X;
	this->posMouseBtnY = e->Location.Y;
	this->btnPresionado = true;
}

System::Void DemoLibreria::Act1UnoMedia::bolsaUno_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
{
	this->posMouseFormX = this->posActBtnX + e->Location.X;
	this->posMouseFormY = this->posActBtnY + e->Location.Y;
	if (this->btnPresionado == true)
	{
		moverBoton(this->bolsaUno);
	}
}

System::Void DemoLibreria::Act1UnoMedia::bolsaDos_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
{
	this->posMouseFormX = this->posActBtnX + e->Location.X;
	this->posMouseFormY = this->posActBtnY + e->Location.Y;
	if (this->btnPresionado == true)
	{
		moverBoton(this->bolsaDos);
	}
}

System::Void DemoLibreria::Act1UnoMedia::bolsaTres_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
{
	this->posMouseFormX = this->posActBtnX + e->Location.X;
	this->posMouseFormY = this->posActBtnY + e->Location.Y;
	if (this->btnPresionado == true)
	{
		moverBoton(this->bolsaTres);
	}
}

System::Void DemoLibreria::Act1UnoMedia::bolsaCuatro_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
{
	this->posMouseFormX = this->posActBtnX + e->Location.X;
	this->posMouseFormY = this->posActBtnY + e->Location.Y;
	if (this->btnPresionado == true)
	{
		moverBoton(this->bolsaCuatro);
	}
}

System::Void DemoLibreria::Act1UnoMedia::bolsaCinco_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
{
	this->posMouseFormX = this->posActBtnX + e->Location.X;
	this->posMouseFormY = this->posActBtnY + e->Location.Y;
	if (this->btnPresionado == true)
	{
		moverBoton(this->bolsaCinco);
	}
}

System::Void DemoLibreria::Act1UnoMedia::bolsaUno_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
{
	this->btnPresionado = false;
	int x = this->bolsaUno->Location.X;
	int y = this->bolsaUno->Location.Y;

	if (x > this->panelCajaRoja->Location.X && x < this->panelCajaRoja->Location.X + this->panelCajaRoja->Size.Width && 
		y > this->panelCajaRoja->Location.Y && y < this->panelCajaRoja->Location.Y + this->panelCajaRoja->Size.Height) 
	{
		this->bolsaUno->Visible = false;
		this->listoBtnUno = true;
		this->bolsaUnoCaja = 1;
	}
	else if (x > this->panelCajaAzul->Location.X && x < this->panelCajaAzul->Location.X + this->panelCajaAzul->Size.Width && 
			 y > this->panelCajaAzul->Location.Y && y < this->panelCajaAzul->Location.Y + this->panelCajaAzul->Size.Height) 
	{
		this->bolsaUno->Visible = false;
		this->listoBtnUno = true;
		this->bolsaUnoCaja = 2;
	}
	else {
		this->bolsaUno->Location = System::Drawing::Point(this->xBolsaUno, this->yBolsaUno);
		this->listoBtnUno = false;
	}
	comprobarActividadCompletada();
}

System::Void DemoLibreria::Act1UnoMedia::bolsaDos_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
{
	this->btnPresionado = false;
	int x = this->bolsaDos->Location.X;
	int y = this->bolsaDos->Location.Y;

	if (x > this->panelCajaRoja->Location.X && x < this->panelCajaRoja->Location.X + this->panelCajaRoja->Size.Width &&
		y > this->panelCajaRoja->Location.Y && y < this->panelCajaRoja->Location.Y + this->panelCajaRoja->Size.Height)
	{
		this->bolsaDos->Visible = false;
		this->listoBtnDos = true;
		this->bolsaDosCaja = 1;
	}
	else if (x > this->panelCajaAzul->Location.X && x < this->panelCajaAzul->Location.X + this->panelCajaAzul->Size.Width &&
		y > this->panelCajaAzul->Location.Y && y < this->panelCajaAzul->Location.Y + this->panelCajaAzul->Size.Height)
	{
		this->bolsaDos->Visible = false;
		this->listoBtnDos = true;
		this->bolsaDosCaja = 2;
	}
	else {
		this->bolsaDos->Location = System::Drawing::Point(this->xBolsaDos, this->yBolsaDos);
		this->listoBtnDos = false;
	}
	comprobarActividadCompletada();
}

System::Void DemoLibreria::Act1UnoMedia::bolsaTres_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
{
	this->btnPresionado = false;
	int x = this->bolsaTres->Location.X;
	int y = this->bolsaTres->Location.Y;

	if (x > this->panelCajaRoja->Location.X && x < this->panelCajaRoja->Location.X + this->panelCajaRoja->Size.Width &&
		y > this->panelCajaRoja->Location.Y && y < this->panelCajaRoja->Location.Y + this->panelCajaRoja->Size.Height)
	{
		this->bolsaTres->Visible = false;
		this->listoBtnTres = true;
		this->bolsaTresCaja = 1;
	}
	else if (x > this->panelCajaAzul->Location.X && x < this->panelCajaAzul->Location.X + this->panelCajaAzul->Size.Width &&
		y > this->panelCajaAzul->Location.Y && y < this->panelCajaAzul->Location.Y + this->panelCajaAzul->Size.Height)
	{
		this->bolsaTres->Visible = false;
		this->listoBtnTres = true;
		this->bolsaTresCaja = 2;
	}
	else {
		this->bolsaTres->Location = System::Drawing::Point(this->xBolsaTres, this->yBolsaTres);
		this->listoBtnTres = false;
	}
	comprobarActividadCompletada();
}

System::Void DemoLibreria::Act1UnoMedia::bolsaCuatro_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
{
	this->btnPresionado = false;
	int x = this->bolsaCuatro->Location.X;
	int y = this->bolsaCuatro->Location.Y;

	if (x > this->panelCajaRoja->Location.X && x < this->panelCajaRoja->Location.X + this->panelCajaRoja->Size.Width &&
		y > this->panelCajaRoja->Location.Y && y < this->panelCajaRoja->Location.Y + this->panelCajaRoja->Size.Height)
	{
		this->bolsaCuatro->Visible = false;
		this->listoBtnCuatro = true;
		this->bolsaCuatroCaja = 1;
	}
	else if (x > this->panelCajaAzul->Location.X && x < this->panelCajaAzul->Location.X + this->panelCajaAzul->Size.Width &&
		y > this->panelCajaAzul->Location.Y && y < this->panelCajaAzul->Location.Y + this->panelCajaAzul->Size.Height)
	{
		this->bolsaCuatro->Visible = false;
		this->listoBtnCuatro = true;
		this->bolsaCuatroCaja = 2;
	}
	else {
		this->bolsaCuatro->Location = System::Drawing::Point(this->xBolsaCuatro, this->yBolsaCuatro);
		this->listoBtnCuatro = false;
	}
	comprobarActividadCompletada();
}

System::Void DemoLibreria::Act1UnoMedia::bolsaCinco_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
{
	this->btnPresionado = false;
	int x = this->bolsaCinco->Location.X;
	int y = this->bolsaCinco->Location.Y;

	if (x > this->panelCajaRoja->Location.X && x < this->panelCajaRoja->Location.X + this->panelCajaRoja->Size.Width &&
		y > this->panelCajaRoja->Location.Y && y < this->panelCajaRoja->Location.Y + this->panelCajaRoja->Size.Height)
	{
		this->bolsaCinco->Visible = false;
		this->listoBtnCinco = true;
		this->bolsaCincoCaja = 1;
	}
	else if (x > this->panelCajaAzul->Location.X && x < this->panelCajaAzul->Location.X + this->panelCajaAzul->Size.Width &&
		y > this->panelCajaAzul->Location.Y && y < this->panelCajaAzul->Location.Y + this->panelCajaAzul->Size.Height)
	{
		this->bolsaCinco->Visible = false;
		this->listoBtnCinco = true;
		this->bolsaCincoCaja = 2;
	}
	else {
		this->bolsaCinco->Location = System::Drawing::Point(this->xBolsaCinco, this->yBolsaCinco);
		this->listoBtnCinco = false;
	}
	comprobarActividadCompletada();
}