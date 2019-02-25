#include "Act1DosMedia.h"
#include "Act1UnoAlta.h"
#include "Etapas.h"

System::Void DemoLibreria::Act1DosMedia::timerPantalla_Tick(System::Object^  sender, System::EventArgs^  e)
{
	this->Opacity += .05;
	if (this->Opacity == 1)
	{
		this->timerPantalla->Stop();
		this->formAnterior->Close();
	}
}

System::Void DemoLibreria::Act1DosMedia::Act1DosMedia_Load(System::Object^  sender, System::EventArgs^  e)
{
	this->timerPantalla->Start();
}

System::Void DemoLibreria::Act1DosMedia::Act1DosMedia_Activated(System::Object^  sender, System::EventArgs^  e)
{
	this->timerPantalla->Start();
}

System::Void DemoLibreria::Act1DosMedia::Act1DosMedia_Deactivate(System::Object^  sender, System::EventArgs^  e)
{
	if (this->WindowState == FormWindowState::Minimized)
	{
		this->Opacity = 0;
	}
}

System::Void DemoLibreria::Act1DosMedia::btnRetroceder_Click(System::Object^  sender, System::EventArgs^  e)
{
	gcnew Etapas(this);
}

System::Void DemoLibreria::Act1DosMedia::btnListo_Click(System::Object^  sender, System::EventArgs^  e)
{
	gcnew Act1UnoAlta(this);
}

System::Void DemoLibreria::Act1DosMedia::inicializarPosicion()
{
	this->xBtnUno = this->btnUno->Location.X;					this->yBtnUno = this->btnUno->Location.Y;
	this->xBtnDos = this->btnDos->Location.X;					this->yBtnDos = this->btnDos->Location.Y;
	this->xBtnTres = this->btnTres->Location.X;					this->yBtnTres = this->btnTres->Location.Y;
	this->xBtnCuatro = this->btnCuatro->Location.X;				this->yBtnCuatro = this->btnCuatro->Location.Y;
}

System::Void DemoLibreria::Act1DosMedia::comprobarActividadCompletada()
{
	if (listoBtnUno && listoBtnDos && listoBtnTres && listoBtnCuatro)
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

System::Void DemoLibreria::Act1DosMedia::moverBoton(System::Windows::Forms::Button^ boton)
{
	boton->Location = System::Drawing::Point(this->posMouseFormX - this->posMouseBtnX, this->posMouseFormY - this->posMouseBtnY);
	this->posActBtnX = boton->Location.X;
	this->posActBtnY = boton->Location.Y;
}

System::Void DemoLibreria::Act1DosMedia::btnUno_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
{
	this->posMouseBtnX = e->Location.X;
	this->posMouseBtnY = e->Location.Y;
	this->btnPresionado = true;
}

System::Void DemoLibreria::Act1DosMedia::btnDos_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
{
	this->posMouseBtnX = e->Location.X;
	this->posMouseBtnY = e->Location.Y;
	this->btnPresionado = true;
}

System::Void DemoLibreria::Act1DosMedia::btnTres_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
{
	this->posMouseBtnX = e->Location.X;
	this->posMouseBtnY = e->Location.Y;
	this->btnPresionado = true;
}

System::Void DemoLibreria::Act1DosMedia::btnCuatro_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
{
	this->posMouseBtnX = e->Location.X;
	this->posMouseBtnY = e->Location.Y;
	this->btnPresionado = true;
}

System::Void DemoLibreria::Act1DosMedia::btnUno_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
{
	this->posMouseFormX = this->posActBtnX + e->Location.X;
	this->posMouseFormY = this->posActBtnY + e->Location.Y;
	if (this->btnPresionado == true)
	{
		moverBoton(this->btnUno);
	}
}

System::Void DemoLibreria::Act1DosMedia::btnDos_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
{
	this->posMouseFormX = this->posActBtnX + e->Location.X;
	this->posMouseFormY = this->posActBtnY + e->Location.Y;
	if (this->btnPresionado == true)
	{
		moverBoton(this->btnDos);
	}
}

System::Void DemoLibreria::Act1DosMedia::btnTres_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
{
	this->posMouseFormX = this->posActBtnX + e->Location.X;
	this->posMouseFormY = this->posActBtnY + e->Location.Y;
	if (this->btnPresionado == true)
	{
		moverBoton(this->btnTres);
	}
}

System::Void DemoLibreria::Act1DosMedia::btnCuatro_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
{
	this->posMouseFormX = this->posActBtnX + e->Location.X;
	this->posMouseFormY = this->posActBtnY + e->Location.Y;
	if (this->btnPresionado == true)
	{
		moverBoton(this->btnCuatro);
	}
}

System::Void DemoLibreria::Act1DosMedia::btnUno_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
{
	this->btnPresionado = false;
	int x = this->btnUno->Location.X;
	int y = this->btnUno->Location.Y;

	if (x > this->panelPuestoUno->Location.X && x < this->panelPuestoUno->Location.X + this->panelPuestoUno->Size.Width &&
		y > this->panelPuestoUno->Location.Y && y < this->panelPuestoUno->Location.Y + this->panelPuestoUno->Size.Height)
	{
		if (this->btnDos->Location != this->panelPuestoUno->Location && 
			this->btnTres->Location != this->panelPuestoUno->Location && 
			this->btnCuatro->Location != this->panelPuestoUno->Location) 
		{
			this->btnUno->Location = System::Drawing::Point(this->panelPuestoUno->Location.X, this->panelPuestoUno->Location.Y);
			this->listoBtnUno = true;
			this->posicionBtnUno = 1;
		}
		else 
		{
			this->btnUno->Location = System::Drawing::Point(this->xBtnUno, this->yBtnUno);
			this->listoBtnUno = false;
			this->posicionBtnUno = 0;
		}
	}
	else if (x > this->panelPuestoDos->Location.X && x < this->panelPuestoDos->Location.X + this->panelPuestoDos->Size.Width &&
		y > this->panelPuestoDos->Location.Y && y < this->panelPuestoDos->Location.Y + this->panelPuestoDos->Size.Height)
	{
		if (this->btnDos->Location != this->panelPuestoDos->Location &&
			this->btnTres->Location != this->panelPuestoDos->Location &&
			this->btnCuatro->Location != this->panelPuestoDos->Location)
		{
			this->btnUno->Location = System::Drawing::Point(this->panelPuestoDos->Location.X, this->panelPuestoDos->Location.Y);
			this->listoBtnUno = true;
			this->posicionBtnUno = 2;
		}
		else
		{
			this->btnUno->Location = System::Drawing::Point(this->xBtnUno, this->yBtnUno);
			this->listoBtnUno = false;
			this->posicionBtnUno = 0;
		}
	}
	else if (x > this->panelPuestoTres->Location.X && x < this->panelPuestoTres->Location.X + this->panelPuestoTres->Size.Width &&
		y > this->panelPuestoTres->Location.Y && y < this->panelPuestoTres->Location.Y + this->panelPuestoTres->Size.Height)
	{
		if (this->btnDos->Location != this->panelPuestoTres->Location &&
			this->btnTres->Location != this->panelPuestoTres->Location &&
			this->btnCuatro->Location != this->panelPuestoTres->Location)
		{
			this->btnUno->Location = System::Drawing::Point(this->panelPuestoTres->Location.X, this->panelPuestoTres->Location.Y);
			this->listoBtnUno = true;
			this->posicionBtnUno = 3;
		}
		else
		{
			this->btnUno->Location = System::Drawing::Point(this->xBtnUno, this->yBtnUno);
			this->listoBtnUno = false;
			this->posicionBtnUno = 0;
		}
	}
	else if (x > this->panelPuestoCuatro->Location.X && x < this->panelPuestoCuatro->Location.X + this->panelPuestoCuatro->Size.Width &&
		y > this->panelPuestoCuatro->Location.Y && y < this->panelPuestoCuatro->Location.Y + this->panelPuestoCuatro->Size.Height)
	{
		if (this->btnDos->Location != this->panelPuestoCuatro->Location &&
			this->btnTres->Location != this->panelPuestoCuatro->Location &&
			this->btnCuatro->Location != this->panelPuestoCuatro->Location)
		{
			this->btnUno->Location = System::Drawing::Point(this->panelPuestoCuatro->Location.X, this->panelPuestoCuatro->Location.Y);
			this->listoBtnUno = true;
			this->posicionBtnUno = 4;
		}
		else
		{
			this->btnUno->Location = System::Drawing::Point(this->xBtnUno, this->yBtnUno);
			this->listoBtnUno = false;
			this->posicionBtnUno = 0;
		}
	}
	else {
		this->btnUno->Location = System::Drawing::Point(this->xBtnUno, this->yBtnUno);
		this->listoBtnUno = false;
		this->posicionBtnUno = 0;
	}
	comprobarActividadCompletada();
}

System::Void DemoLibreria::Act1DosMedia::btnDos_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
{
	this->btnPresionado = false;
	int x = this->btnDos->Location.X;
	int y = this->btnDos->Location.Y;

	if (x > this->panelPuestoUno->Location.X && x < this->panelPuestoUno->Location.X + this->panelPuestoUno->Size.Width &&
		y > this->panelPuestoUno->Location.Y && y < this->panelPuestoUno->Location.Y + this->panelPuestoUno->Size.Height)
	{
		if (this->btnUno->Location != this->panelPuestoUno->Location &&
			this->btnTres->Location != this->panelPuestoUno->Location &&
			this->btnCuatro->Location != this->panelPuestoUno->Location)
		{
			this->btnDos->Location = System::Drawing::Point(this->panelPuestoUno->Location.X, this->panelPuestoUno->Location.Y);
			this->listoBtnDos = true;
			this->posicionBtnDos = 1;
		}
		else
		{
			this->btnDos->Location = System::Drawing::Point(this->xBtnDos, this->yBtnDos);
			this->listoBtnDos = false;
			this->posicionBtnDos = 0;
		}
	}
	else if (x > this->panelPuestoDos->Location.X && x < this->panelPuestoDos->Location.X + this->panelPuestoDos->Size.Width &&
		y > this->panelPuestoDos->Location.Y && y < this->panelPuestoDos->Location.Y + this->panelPuestoDos->Size.Height)
	{
		if (this->btnUno->Location != this->panelPuestoDos->Location &&
			this->btnTres->Location != this->panelPuestoDos->Location &&
			this->btnCuatro->Location != this->panelPuestoDos->Location)
		{
			this->btnDos->Location = System::Drawing::Point(this->panelPuestoDos->Location.X, this->panelPuestoDos->Location.Y);
			this->listoBtnDos = true;
			this->posicionBtnDos = 2;
		}
		else
		{
			this->btnDos->Location = System::Drawing::Point(this->xBtnDos, this->yBtnDos);
			this->listoBtnDos = false;
			this->posicionBtnDos = 0;
		}
	}
	else if (x > this->panelPuestoTres->Location.X && x < this->panelPuestoTres->Location.X + this->panelPuestoTres->Size.Width &&
		y > this->panelPuestoTres->Location.Y && y < this->panelPuestoTres->Location.Y + this->panelPuestoTres->Size.Height)
	{
		if (this->btnUno->Location != this->panelPuestoTres->Location &&
			this->btnTres->Location != this->panelPuestoTres->Location &&
			this->btnCuatro->Location != this->panelPuestoTres->Location)
		{
			this->btnDos->Location = System::Drawing::Point(this->panelPuestoTres->Location.X, this->panelPuestoTres->Location.Y);
			this->listoBtnDos = true;
			this->posicionBtnDos = 3;
		}
		else
		{
			this->btnDos->Location = System::Drawing::Point(this->xBtnDos, this->yBtnDos);
			this->listoBtnDos = false;
			this->posicionBtnDos = 0;
		}
	}
	else if (x > this->panelPuestoCuatro->Location.X && x < this->panelPuestoCuatro->Location.X + this->panelPuestoCuatro->Size.Width &&
		y > this->panelPuestoCuatro->Location.Y && y < this->panelPuestoCuatro->Location.Y + this->panelPuestoCuatro->Size.Height)
	{
		if (this->btnUno->Location != this->panelPuestoCuatro->Location &&
			this->btnTres->Location != this->panelPuestoCuatro->Location &&
			this->btnCuatro->Location != this->panelPuestoCuatro->Location)
		{
			this->btnDos->Location = System::Drawing::Point(this->panelPuestoCuatro->Location.X, this->panelPuestoCuatro->Location.Y);
			this->listoBtnDos = true;
			this->posicionBtnDos = 4;
		}
		else
		{
			this->btnDos->Location = System::Drawing::Point(this->xBtnDos, this->yBtnDos);
			this->listoBtnDos = false;
			this->posicionBtnDos = 0;
		}
	}
	else {
		this->btnDos->Location = System::Drawing::Point(this->xBtnDos, this->yBtnDos);
		this->listoBtnDos = false;
		this->posicionBtnDos = 0;
	}
	comprobarActividadCompletada();
}

System::Void DemoLibreria::Act1DosMedia::btnTres_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
{
	this->btnPresionado = false;
	int x = this->btnTres->Location.X;
	int y = this->btnTres->Location.Y;

	if (x > this->panelPuestoUno->Location.X && x < this->panelPuestoUno->Location.X + this->panelPuestoUno->Size.Width &&
		y > this->panelPuestoUno->Location.Y && y < this->panelPuestoUno->Location.Y + this->panelPuestoUno->Size.Height)
	{
		if (this->btnUno->Location != this->panelPuestoUno->Location &&
			this->btnDos->Location != this->panelPuestoUno->Location &&
			this->btnCuatro->Location != this->panelPuestoUno->Location)
		{
			this->btnTres->Location = System::Drawing::Point(this->panelPuestoUno->Location.X, this->panelPuestoUno->Location.Y);
			this->listoBtnTres = true;
			this->posicionBtnTres = 1;
		}
		else
		{
			this->btnTres->Location = System::Drawing::Point(this->xBtnTres, this->yBtnTres);
			this->listoBtnTres = false;
			this->posicionBtnTres = 0;
		}
	}
	else if (x > this->panelPuestoDos->Location.X && x < this->panelPuestoDos->Location.X + this->panelPuestoDos->Size.Width &&
		y > this->panelPuestoDos->Location.Y && y < this->panelPuestoDos->Location.Y + this->panelPuestoDos->Size.Height)
	{
		if (this->btnUno->Location != this->panelPuestoDos->Location &&
			this->btnDos->Location != this->panelPuestoDos->Location &&
			this->btnCuatro->Location != this->panelPuestoDos->Location)
		{
			this->btnTres->Location = System::Drawing::Point(this->panelPuestoDos->Location.X, this->panelPuestoDos->Location.Y);
			this->listoBtnTres = true;
			this->posicionBtnTres = 2;
		}
		else
		{
			this->btnTres->Location = System::Drawing::Point(this->xBtnTres, this->yBtnTres);
			this->listoBtnTres = false;
			this->posicionBtnTres = 0;
		}
	}
	else if (x > this->panelPuestoTres->Location.X && x < this->panelPuestoTres->Location.X + this->panelPuestoTres->Size.Width &&
		y > this->panelPuestoTres->Location.Y && y < this->panelPuestoTres->Location.Y + this->panelPuestoTres->Size.Height)
	{
		if (this->btnUno->Location != this->panelPuestoTres->Location &&
			this->btnDos->Location != this->panelPuestoTres->Location &&
			this->btnCuatro->Location != this->panelPuestoTres->Location)
		{
			this->btnTres->Location = System::Drawing::Point(this->panelPuestoTres->Location.X, this->panelPuestoTres->Location.Y);
			this->listoBtnTres = true;
			this->posicionBtnTres = 3;
		}
		else
		{
			this->btnTres->Location = System::Drawing::Point(this->xBtnTres, this->yBtnTres);
			this->listoBtnTres = false;
			this->posicionBtnTres = 0;
		}
	}
	else if (x > this->panelPuestoCuatro->Location.X && x < this->panelPuestoCuatro->Location.X + this->panelPuestoCuatro->Size.Width &&
		y > this->panelPuestoCuatro->Location.Y && y < this->panelPuestoCuatro->Location.Y + this->panelPuestoCuatro->Size.Height)
	{
		if (this->btnUno->Location != this->panelPuestoCuatro->Location &&
			this->btnDos->Location != this->panelPuestoCuatro->Location &&
			this->btnCuatro->Location != this->panelPuestoCuatro->Location)
		{
			this->btnTres->Location = System::Drawing::Point(this->panelPuestoCuatro->Location.X, this->panelPuestoCuatro->Location.Y);
			this->listoBtnTres = true;
			this->posicionBtnTres = 4;
		}
		else
		{
			this->btnTres->Location = System::Drawing::Point(this->xBtnTres, this->yBtnTres);
			this->listoBtnTres = false;
			this->posicionBtnTres = 0;
		}
	}
	else {
		this->btnTres->Location = System::Drawing::Point(this->xBtnTres, this->yBtnTres);
		this->listoBtnTres = false;
		this->posicionBtnTres = 0;
	}
	comprobarActividadCompletada();
}

System::Void DemoLibreria::Act1DosMedia::btnCuatro_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
{
	this->btnPresionado = false;
	int x = this->btnCuatro->Location.X;
	int y = this->btnCuatro->Location.Y;

	if (x > this->panelPuestoUno->Location.X && x < this->panelPuestoUno->Location.X + this->panelPuestoUno->Size.Width &&
		y > this->panelPuestoUno->Location.Y && y < this->panelPuestoUno->Location.Y + this->panelPuestoUno->Size.Height)
	{
		if (this->btnUno->Location != this->panelPuestoUno->Location &&
			this->btnDos->Location != this->panelPuestoUno->Location &&
			this->btnTres->Location != this->panelPuestoUno->Location)
		{
			this->btnCuatro->Location = System::Drawing::Point(this->panelPuestoUno->Location.X, this->panelPuestoUno->Location.Y);
			this->listoBtnCuatro = true;
			this->posicionBtnCuatro = 1;
		}
		else
		{
			this->btnCuatro->Location = System::Drawing::Point(this->xBtnCuatro, this->yBtnCuatro);
			this->listoBtnCuatro = false;
			this->posicionBtnCuatro = 0;
		}
	}
	else if (x > this->panelPuestoDos->Location.X && x < this->panelPuestoDos->Location.X + this->panelPuestoDos->Size.Width &&
		y > this->panelPuestoDos->Location.Y && y < this->panelPuestoDos->Location.Y + this->panelPuestoDos->Size.Height)
	{
		if (this->btnUno->Location != this->panelPuestoDos->Location &&
			this->btnDos->Location != this->panelPuestoDos->Location &&
			this->btnTres->Location != this->panelPuestoDos->Location)
		{
			this->btnCuatro->Location = System::Drawing::Point(this->panelPuestoDos->Location.X, this->panelPuestoDos->Location.Y);
			this->listoBtnCuatro = true;
			this->posicionBtnCuatro = 2;
		}
		else
		{
			this->btnCuatro->Location = System::Drawing::Point(this->xBtnCuatro, this->yBtnCuatro);
			this->listoBtnCuatro = false;
			this->posicionBtnCuatro = 0;
		}
	}
	else if (x > this->panelPuestoTres->Location.X && x < this->panelPuestoTres->Location.X + this->panelPuestoTres->Size.Width &&
		y > this->panelPuestoTres->Location.Y && y < this->panelPuestoTres->Location.Y + this->panelPuestoTres->Size.Height)
	{
		if (this->btnUno->Location != this->panelPuestoTres->Location &&
			this->btnDos->Location != this->panelPuestoTres->Location &&
			this->btnTres->Location != this->panelPuestoTres->Location)
		{
			this->btnCuatro->Location = System::Drawing::Point(this->panelPuestoTres->Location.X, this->panelPuestoTres->Location.Y);
			this->listoBtnCuatro = true;
			this->posicionBtnCuatro = 3;
		}
		else
		{
			this->btnCuatro->Location = System::Drawing::Point(this->xBtnCuatro, this->yBtnCuatro);
			this->listoBtnCuatro = false;
			this->posicionBtnCuatro = 0;
		}
	}
	else if (x > this->panelPuestoCuatro->Location.X && x < this->panelPuestoCuatro->Location.X + this->panelPuestoCuatro->Size.Width &&
		y > this->panelPuestoCuatro->Location.Y && y < this->panelPuestoCuatro->Location.Y + this->panelPuestoCuatro->Size.Height)
	{
		if (this->btnUno->Location != this->panelPuestoCuatro->Location &&
			this->btnDos->Location != this->panelPuestoCuatro->Location &&
			this->btnTres->Location != this->panelPuestoCuatro->Location)
		{
			this->btnCuatro->Location = System::Drawing::Point(this->panelPuestoCuatro->Location.X, this->panelPuestoCuatro->Location.Y);
			this->listoBtnCuatro = true;
			this->posicionBtnCuatro = 4;
		}
		else
		{
			this->btnCuatro->Location = System::Drawing::Point(this->xBtnCuatro, this->yBtnCuatro);
			this->listoBtnCuatro = false;
			this->posicionBtnCuatro = 0;
		}
	}
	else {
		this->btnCuatro->Location = System::Drawing::Point(this->xBtnCuatro, this->yBtnCuatro);
		this->listoBtnCuatro = false;
		this->posicionBtnCuatro = 0;
	}
	comprobarActividadCompletada();
}