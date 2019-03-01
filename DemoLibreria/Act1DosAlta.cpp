#include "Act1DosAlta.h"
#include "Etapas.h"
#include "FormEstrella.h"

System::Void DemoLibreria::Act1DosAlta::timerPantalla_Tick(System::Object^  sender, System::EventArgs^  e)
{
	this->Opacity += .05;
	if (this->Opacity == 1)
	{
		this->timerPantalla->Stop();
		this->formAnterior->Close();
	}
}

System::Void DemoLibreria::Act1DosAlta::Act1DosAlta_Load(System::Object^  sender, System::EventArgs^  e)
{
	this->timerPantalla->Start();
}

System::Void DemoLibreria::Act1DosAlta::Act1DosAlta_Activated(System::Object^  sender, System::EventArgs^  e)
{
	this->timerPantalla->Start();
}

System::Void DemoLibreria::Act1DosAlta::Act1DosAlta_Deactivate(System::Object^  sender, System::EventArgs^  e)
{
	if (this->WindowState == FormWindowState::Minimized)
	{
		this->Opacity = 0;
	}
}

System::Void DemoLibreria::Act1DosAlta::btnRetroceder_Click(System::Object^  sender, System::EventArgs^  e)
{
	gcnew Etapas(this, this->usuario, this->controlador);
}

System::Void DemoLibreria::Act1DosAlta::btnListo_Click(System::Object^  sender, System::EventArgs^  e)
{
	vector<String^> vectRespuestas;
	vectRespuestas.push_back(Convert::ToString(this->contadorUno));
	vectRespuestas.push_back(Convert::ToString(this->contadorDos));
	vectRespuestas.push_back(Convert::ToString(this->contadorTres));
	vectRespuestas.push_back(Convert::ToString(this->contadorCuatro));
	vectRespuestas.push_back(Convert::ToString(this->posicionBtnUno));
	vectRespuestas.push_back(Convert::ToString(this->posicionBtnDos));
	vectRespuestas.push_back(Convert::ToString(this->posicionBtnTres));
	vectRespuestas.push_back(Convert::ToString(this->posicionBtnCuatro));

	controlador->evaluarActividad("Habilidad_Uno", "Alto", 2, vectRespuestas);

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

System::Void DemoLibreria::Act1DosAlta::inicializarPosicion()
{
	this->xBtnUno = this->btnUno->Location.X;					this->yBtnUno = this->btnUno->Location.Y;
	this->xBtnDos = this->btnDos->Location.X;					this->yBtnDos = this->btnDos->Location.Y;
	this->xBtnTres = this->btnTres->Location.X;					this->yBtnTres = this->btnTres->Location.Y;
	this->xBtnCuatro = this->btnCuatro->Location.X;				this->yBtnCuatro = this->btnCuatro->Location.Y;
}

System::Void DemoLibreria::Act1DosAlta::comprobarActividadCompletada()
{
	if (listoBtnUno && listoBtnDos && listoBtnTres && listoBtnCuatro)
	{
		this->btnListo->Visible = true;
	}
	else
	{
		this->btnListo->Visible = false;
	}
}

System::Void DemoLibreria::Act1DosAlta::moverBoton(System::Windows::Forms::Button^ boton)
{
	boton->Location = System::Drawing::Point(this->posMouseFormX - this->posMouseBtnX, this->posMouseFormY - this->posMouseBtnY);
	this->posActBtnX = boton->Location.X;
	this->posActBtnY = boton->Location.Y;
}

System::Void DemoLibreria::Act1DosAlta::btnUno_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
{
	this->posMouseBtnX = e->Location.X;
	this->posMouseBtnY = e->Location.Y;
	this->btnPresionado = true;
}

System::Void DemoLibreria::Act1DosAlta::btnDos_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
{
	this->posMouseBtnX = e->Location.X;
	this->posMouseBtnY = e->Location.Y;
	this->btnPresionado = true;
}

System::Void DemoLibreria::Act1DosAlta::btnTres_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
{
	this->posMouseBtnX = e->Location.X;
	this->posMouseBtnY = e->Location.Y;
	this->btnPresionado = true;
}

System::Void DemoLibreria::Act1DosAlta::btnCuatro_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
{
	this->posMouseBtnX = e->Location.X;
	this->posMouseBtnY = e->Location.Y;
	this->btnPresionado = true;
}

System::Void DemoLibreria::Act1DosAlta::btnUno_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
{
	this->posMouseFormX = this->posActBtnX + e->Location.X;
	this->posMouseFormY = this->posActBtnY + e->Location.Y;
	if (this->btnPresionado == true)
	{
		moverBoton(this->btnUno);
	}
}

System::Void DemoLibreria::Act1DosAlta::btnDos_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
{
	this->posMouseFormX = this->posActBtnX + e->Location.X;
	this->posMouseFormY = this->posActBtnY + e->Location.Y;
	if (this->btnPresionado == true)
	{
		moverBoton(this->btnDos);
	}
}

System::Void DemoLibreria::Act1DosAlta::btnTres_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
{
	this->posMouseFormX = this->posActBtnX + e->Location.X;
	this->posMouseFormY = this->posActBtnY + e->Location.Y;
	if (this->btnPresionado == true)
	{
		moverBoton(this->btnTres);
	}
}

System::Void DemoLibreria::Act1DosAlta::btnCuatro_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
{
	this->posMouseFormX = this->posActBtnX + e->Location.X;
	this->posMouseFormY = this->posActBtnY + e->Location.Y;
	if (this->btnPresionado == true)
	{
		moverBoton(this->btnCuatro);
	}
}

System::Void DemoLibreria::Act1DosAlta::btnUno_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
{
	this->btnPresionado = false;
	int x = this->btnUno->Location.X;
	int y = this->btnUno->Location.Y;

	if (x > this->panel1->Location.X && x < this->panel1->Location.X + this->panel1->Size.Width &&
		y > this->panel1->Location.Y && y < this->panel1->Location.Y + this->panel1->Size.Height)
	{
		if (this->btnDos->Location != this->panel1->Location &&
			this->btnTres->Location != this->panel1->Location &&
			this->btnCuatro->Location != this->panel1->Location)
		{
			this->btnUno->Location = System::Drawing::Point(this->panel1->Location.X, this->panel1->Location.Y);
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
	else if (x > this->panel2->Location.X && x < this->panel2->Location.X + this->panel2->Size.Width &&
		y > this->panel2->Location.Y && y < this->panel2->Location.Y + this->panel2->Size.Height)
	{
		if (this->btnDos->Location != this->panel2->Location &&
			this->btnTres->Location != this->panel2->Location &&
			this->btnCuatro->Location != this->panel2->Location)
		{
			this->btnUno->Location = System::Drawing::Point(this->panel2->Location.X, this->panel2->Location.Y);
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
	else if (x > this->panel3->Location.X && x < this->panel3->Location.X + this->panel3->Size.Width &&
		y > this->panel3->Location.Y && y < this->panel3->Location.Y + this->panel3->Size.Height)
	{
		if (this->btnDos->Location != this->panel3->Location &&
			this->btnTres->Location != this->panel3->Location &&
			this->btnCuatro->Location != this->panel3->Location)
		{
			this->btnUno->Location = System::Drawing::Point(this->panel3->Location.X, this->panel3->Location.Y);
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
	else if (x > this->panel4->Location.X && x < this->panel4->Location.X + this->panel4->Size.Width &&
		y > this->panel4->Location.Y && y < this->panel4->Location.Y + this->panel4->Size.Height)
	{
		if (this->btnDos->Location != this->panel4->Location &&
			this->btnTres->Location != this->panel4->Location &&
			this->btnCuatro->Location != this->panel4->Location)
		{
			this->btnUno->Location = System::Drawing::Point(this->panel4->Location.X, this->panel4->Location.Y);
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

System::Void DemoLibreria::Act1DosAlta::btnDos_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
{
	this->btnPresionado = false;
	int x = this->btnDos->Location.X;
	int y = this->btnDos->Location.Y;

	if (x > this->panel1->Location.X && x < this->panel1->Location.X + this->panel1->Size.Width &&
		y > this->panel1->Location.Y && y < this->panel1->Location.Y + this->panel1->Size.Height)
	{
		if (this->btnUno->Location != this->panel1->Location &&
			this->btnTres->Location != this->panel1->Location &&
			this->btnCuatro->Location != this->panel1->Location)
		{
			this->btnDos->Location = System::Drawing::Point(this->panel1->Location.X, this->panel1->Location.Y);
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
	else if (x > this->panel2->Location.X && x < this->panel2->Location.X + this->panel2->Size.Width &&
		y > this->panel2->Location.Y && y < this->panel2->Location.Y + this->panel2->Size.Height)
	{
		if (this->btnUno->Location != this->panel2->Location &&
			this->btnTres->Location != this->panel2->Location &&
			this->btnCuatro->Location != this->panel2->Location)
		{
			this->btnDos->Location = System::Drawing::Point(this->panel2->Location.X, this->panel2->Location.Y);
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
	else if (x > this->panel3->Location.X && x < this->panel3->Location.X + this->panel3->Size.Width &&
		y > this->panel3->Location.Y && y < this->panel3->Location.Y + this->panel3->Size.Height)
	{
		if (this->btnUno->Location != this->panel3->Location &&
			this->btnTres->Location != this->panel3->Location &&
			this->btnCuatro->Location != this->panel3->Location)
		{
			this->btnDos->Location = System::Drawing::Point(this->panel3->Location.X, this->panel3->Location.Y);
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
	else if (x > this->panel4->Location.X && x < this->panel4->Location.X + this->panel4->Size.Width &&
		y > this->panel4->Location.Y && y < this->panel4->Location.Y + this->panel4->Size.Height)
	{
		if (this->btnUno->Location != this->panel4->Location &&
			this->btnTres->Location != this->panel4->Location &&
			this->btnCuatro->Location != this->panel4->Location)
		{
			this->btnDos->Location = System::Drawing::Point(this->panel4->Location.X, this->panel4->Location.Y);
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

System::Void DemoLibreria::Act1DosAlta::btnTres_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
{
	this->btnPresionado = false;
	int x = this->btnTres->Location.X;
	int y = this->btnTres->Location.Y;

	if (x > this->panel1->Location.X && x < this->panel1->Location.X + this->panel1->Size.Width &&
		y > this->panel1->Location.Y && y < this->panel1->Location.Y + this->panel1->Size.Height)
	{
		if (this->btnUno->Location != this->panel1->Location &&
			this->btnDos->Location != this->panel1->Location &&
			this->btnCuatro->Location != this->panel1->Location)
		{
			this->btnTres->Location = System::Drawing::Point(this->panel1->Location.X, this->panel1->Location.Y);
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
	else if (x > this->panel2->Location.X && x < this->panel2->Location.X + this->panel2->Size.Width &&
		y > this->panel2->Location.Y && y < this->panel2->Location.Y + this->panel2->Size.Height)
	{
		if (this->btnUno->Location != this->panel2->Location &&
			this->btnDos->Location != this->panel2->Location &&
			this->btnCuatro->Location != this->panel2->Location)
		{
			this->btnTres->Location = System::Drawing::Point(this->panel2->Location.X, this->panel2->Location.Y);
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
	else if (x > this->panel3->Location.X && x < this->panel3->Location.X + this->panel3->Size.Width &&
		y > this->panel3->Location.Y && y < this->panel3->Location.Y + this->panel3->Size.Height)
	{
		if (this->btnUno->Location != this->panel3->Location &&
			this->btnDos->Location != this->panel3->Location &&
			this->btnCuatro->Location != this->panel3->Location)
		{
			this->btnTres->Location = System::Drawing::Point(this->panel3->Location.X, this->panel3->Location.Y);
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
	else if (x > this->panel4->Location.X && x < this->panel4->Location.X + this->panel4->Size.Width &&
		y > this->panel4->Location.Y && y < this->panel4->Location.Y + this->panel4->Size.Height)
	{
		if (this->btnUno->Location != this->panel4->Location &&
			this->btnDos->Location != this->panel4->Location &&
			this->btnCuatro->Location != this->panel4->Location)
		{
			this->btnTres->Location = System::Drawing::Point(this->panel4->Location.X, this->panel4->Location.Y);
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

System::Void DemoLibreria::Act1DosAlta::btnCuatro_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
{
	this->btnPresionado = false;
	int x = this->btnCuatro->Location.X;
	int y = this->btnCuatro->Location.Y;

	if (x > this->panel1->Location.X && x < this->panel1->Location.X + this->panel1->Size.Width &&
		y > this->panel1->Location.Y && y < this->panel1->Location.Y + this->panel1->Size.Height)
	{
		if (this->btnUno->Location != this->panel1->Location &&
			this->btnDos->Location != this->panel1->Location &&
			this->btnTres->Location != this->panel1->Location)
		{
			this->btnCuatro->Location = System::Drawing::Point(this->panel1->Location.X, this->panel1->Location.Y);
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
	else if (x > this->panel2->Location.X && x < this->panel2->Location.X + this->panel2->Size.Width &&
		y > this->panel2->Location.Y && y < this->panel2->Location.Y + this->panel2->Size.Height)
	{
		if (this->btnUno->Location != this->panel2->Location &&
			this->btnDos->Location != this->panel2->Location &&
			this->btnTres->Location != this->panel2->Location)
		{
			this->btnCuatro->Location = System::Drawing::Point(this->panel2->Location.X, this->panel2->Location.Y);
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
	else if (x > this->panel3->Location.X && x < this->panel3->Location.X + this->panel3->Size.Width &&
		y > this->panel3->Location.Y && y < this->panel3->Location.Y + this->panel3->Size.Height)
	{
		if (this->btnUno->Location != this->panel3->Location &&
			this->btnDos->Location != this->panel3->Location &&
			this->btnTres->Location != this->panel3->Location)
		{
			this->btnCuatro->Location = System::Drawing::Point(this->panel3->Location.X, this->panel3->Location.Y);
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
	else if (x > this->panel4->Location.X && x < this->panel4->Location.X + this->panel4->Size.Width &&
		y > this->panel4->Location.Y && y < this->panel4->Location.Y + this->panel4->Size.Height)
	{
		if (this->btnUno->Location != this->panel4->Location &&
			this->btnDos->Location != this->panel4->Location &&
			this->btnTres->Location != this->panel4->Location)
		{
			this->btnCuatro->Location = System::Drawing::Point(this->panel4->Location.X, this->panel4->Location.Y);
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

System::Void DemoLibreria::Act1DosAlta::btnUno1_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if (this->btnUno1->BackColor == Color::White)
	{
		this->btnUno1->BackColor = Color::CornflowerBlue;
		this->contadorUno++;
	}
	else
	{
		this->btnUno1->BackColor = Color::White;
		this->contadorUno--;
	}
}

System::Void DemoLibreria::Act1DosAlta::btnUno2_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if (this->btnUno2->BackColor == Color::White)
	{
		this->btnUno2->BackColor = Color::CornflowerBlue;
		this->contadorUno++;
	}
	else
	{
		this->btnUno2->BackColor = Color::White;
		this->contadorUno--;
	}
}

System::Void DemoLibreria::Act1DosAlta::btnUno3_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if (this->btnUno3->BackColor == Color::White)
	{
		this->btnUno3->BackColor = Color::CornflowerBlue;
		this->contadorUno++;
	}
	else
	{
		this->btnUno3->BackColor = Color::White;
		this->contadorUno--;
	}
}

System::Void DemoLibreria::Act1DosAlta::btnUno4_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if (this->btnUno4->BackColor == Color::White)
	{
		this->btnUno4->BackColor = Color::CornflowerBlue;
		this->contadorUno++;
	}
	else
	{
		this->btnUno4->BackColor = Color::White;
		this->contadorUno--;
	}
}

System::Void DemoLibreria::Act1DosAlta::btnUno5_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if (this->btnUno5->BackColor == Color::White)
	{
		this->btnUno5->BackColor = Color::CornflowerBlue;
		this->contadorUno++;
	}
	else
	{
		this->btnUno5->BackColor = Color::White;
		this->contadorUno--;
	}
}

System::Void DemoLibreria::Act1DosAlta::btnUno6_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if (this->btnUno6->BackColor == Color::White)
	{
		this->btnUno6->BackColor = Color::CornflowerBlue;
		this->contadorUno++;
	}
	else
	{
		this->btnUno6->BackColor = Color::White;
		this->contadorUno--;
	}
}

System::Void DemoLibreria::Act1DosAlta::btnUno7_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if (this->btnUno7->BackColor == Color::White)
	{
		this->btnUno7->BackColor = Color::CornflowerBlue;
		this->contadorUno++;
	}
	else
	{
		this->btnUno7->BackColor = Color::White;
		this->contadorUno--;
	}
}

System::Void DemoLibreria::Act1DosAlta::btnUno8_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if (this->btnUno8->BackColor == Color::White)
	{
		this->btnUno8->BackColor = Color::CornflowerBlue;
		this->contadorUno++;
	}
	else
	{
		this->btnUno8->BackColor = Color::White;
		this->contadorUno--;
	}
}

System::Void DemoLibreria::Act1DosAlta::btnUno9_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if (this->btnUno9->BackColor == Color::White)
	{
		this->btnUno9->BackColor = Color::CornflowerBlue;
		this->contadorUno++;
	}
	else
	{
		this->btnUno9->BackColor = Color::White;
		this->contadorUno--;
	}
}

System::Void DemoLibreria::Act1DosAlta::btnUno10_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if (this->btnUno10->BackColor == Color::White)
	{
		this->btnUno10->BackColor = Color::CornflowerBlue;
		this->contadorUno++;
	}
	else
	{
		this->btnUno10->BackColor = Color::White;
		this->contadorUno--;
	}
}

System::Void DemoLibreria::Act1DosAlta::btnUno11_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if (this->btnUno11->BackColor == Color::White)
	{
		this->btnUno11->BackColor = Color::CornflowerBlue;
		this->contadorUno++;
	}
	else
	{
		this->btnUno11->BackColor = Color::White;
		this->contadorUno--;
	}
}

System::Void DemoLibreria::Act1DosAlta::btnUno12_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if (this->btnUno12->BackColor == Color::White)
	{
		this->btnUno12->BackColor = Color::CornflowerBlue;
		this->contadorUno++;
	}
	else
	{
		this->btnUno12->BackColor = Color::White;
		this->contadorUno--;
	}
}

System::Void DemoLibreria::Act1DosAlta::btnUno13_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if (this->btnUno13->BackColor == Color::White)
	{
		this->btnUno13->BackColor = Color::CornflowerBlue;
		this->contadorUno++;
	}
	else
	{
		this->btnUno13->BackColor = Color::White;
		this->contadorUno--;
	}
}

System::Void DemoLibreria::Act1DosAlta::btnUno14_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if (this->btnUno14->BackColor == Color::White)
	{
		this->btnUno14->BackColor = Color::CornflowerBlue;
		this->contadorUno++;
	}
	else
	{
		this->btnUno14->BackColor = Color::White;
		this->contadorUno--;
	}
}

System::Void DemoLibreria::Act1DosAlta::btnUno15_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if (this->btnUno15->BackColor == Color::White)
	{
		this->btnUno15->BackColor = Color::CornflowerBlue;
		this->contadorUno++;
	}
	else
	{
		this->btnUno15->BackColor = Color::White;
		this->contadorUno--;
	}
}

System::Void DemoLibreria::Act1DosAlta::btnUno16_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if (this->btnUno16->BackColor == Color::White)
	{
		this->btnUno16->BackColor = Color::CornflowerBlue;
		this->contadorUno++;
	}
	else
	{
		this->btnUno16->BackColor = Color::White;
		this->contadorUno--;
	}
}

System::Void DemoLibreria::Act1DosAlta::btnUno17_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if (this->btnUno17->BackColor == Color::White)
	{
		this->btnUno17->BackColor = Color::CornflowerBlue;
		this->contadorUno++;
	}
	else
	{
		this->btnUno17->BackColor = Color::White;
		this->contadorUno--;
	}
}

System::Void DemoLibreria::Act1DosAlta::btnUno18_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if (this->btnUno18->BackColor == Color::White)
	{
		this->btnUno18->BackColor = Color::CornflowerBlue;
		this->contadorUno++;
	}
	else
	{
		this->btnUno18->BackColor = Color::White;
		this->contadorUno--;
	}
}

System::Void DemoLibreria::Act1DosAlta::btnUno19_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if (this->btnUno19->BackColor == Color::White)
	{
		this->btnUno19->BackColor = Color::CornflowerBlue;
		this->contadorUno++;
	}
	else
	{
		this->btnUno19->BackColor = Color::White;
		this->contadorUno--;
	}
}

System::Void DemoLibreria::Act1DosAlta::btnUno20_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if (this->btnUno20->BackColor == Color::White)
	{
		this->btnUno20->BackColor = Color::CornflowerBlue;
		this->contadorUno++;
	}
	else
	{
		this->btnUno20->BackColor = Color::White;
		this->contadorUno--;
	}
}

System::Void DemoLibreria::Act1DosAlta::btnDos20_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if (this->btnDos20->BackColor == Color::White)
	{
		this->btnDos20->BackColor = Color::ForestGreen;
		this->contadorDos++;
	}
	else
	{
		this->btnDos20->BackColor = Color::White;
		this->contadorDos--;
	}
}

System::Void DemoLibreria::Act1DosAlta::btnDos19_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if (this->btnDos19->BackColor == Color::White)
	{
		this->btnDos19->BackColor = Color::ForestGreen;
		this->contadorDos++;
	}
	else
	{
		this->btnDos19->BackColor = Color::White;
		this->contadorDos--;
	}
}

System::Void DemoLibreria::Act1DosAlta::btnDos18_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if (this->btnDos18->BackColor == Color::White)
	{
		this->btnDos18->BackColor = Color::ForestGreen;
		this->contadorDos++;
	}
	else
	{
		this->btnDos18->BackColor = Color::White;
		this->contadorDos--;
	}
}

System::Void DemoLibreria::Act1DosAlta::btnDos17_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if (this->btnDos17->BackColor == Color::White)
	{
		this->btnDos17->BackColor = Color::ForestGreen;
		this->contadorDos++;
	}
	else
	{
		this->btnDos17->BackColor = Color::White;
		this->contadorDos--;
	}
}

System::Void DemoLibreria::Act1DosAlta::btnDos16_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if (this->btnDos16->BackColor == Color::White)
	{
		this->btnDos16->BackColor = Color::ForestGreen;
		this->contadorDos++;
	}
	else
	{
		this->btnDos16->BackColor = Color::White;
		this->contadorDos--;
	}
}

System::Void DemoLibreria::Act1DosAlta::btnDos15_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if (this->btnDos15->BackColor == Color::White)
	{
		this->btnDos15->BackColor = Color::ForestGreen;
		this->contadorDos++;
	}
	else
	{
		this->btnDos15->BackColor = Color::White;
		this->contadorDos--;
	}
}

System::Void DemoLibreria::Act1DosAlta::btnDos14_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if (this->btnDos14->BackColor == Color::White)
	{
		this->btnDos14->BackColor = Color::ForestGreen;
		this->contadorDos++;
	}
	else
	{
		this->btnDos14->BackColor = Color::White;
		this->contadorDos--;
	}
}

System::Void DemoLibreria::Act1DosAlta::btnDos13_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if (this->btnDos13->BackColor == Color::White)
	{
		this->btnDos13->BackColor = Color::ForestGreen;
		this->contadorDos++;
	}
	else
	{
		this->btnDos13->BackColor = Color::White;
		this->contadorDos--;
	}
}

System::Void DemoLibreria::Act1DosAlta::btnDos12_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if (this->btnDos12->BackColor == Color::White)
	{
		this->btnDos12->BackColor = Color::ForestGreen;
		this->contadorDos++;
	}
	else
	{
		this->btnDos12->BackColor = Color::White;
		this->contadorDos--;
	}
}

System::Void DemoLibreria::Act1DosAlta::btnDos11_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if (this->btnDos11->BackColor == Color::White)
	{
		this->btnDos11->BackColor = Color::ForestGreen;
		this->contadorDos++;
	}
	else
	{
		this->btnDos11->BackColor = Color::White;
		this->contadorDos--;
	}
}

System::Void DemoLibreria::Act1DosAlta::btnDos10_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if (this->btnDos10->BackColor == Color::White)
	{
		this->btnDos10->BackColor = Color::ForestGreen;
		this->contadorDos++;
	}
	else
	{
		this->btnDos10->BackColor = Color::White;
		this->contadorDos--;
	}
}

System::Void DemoLibreria::Act1DosAlta::btnDos9_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if (this->btnDos9->BackColor == Color::White)
	{
		this->btnDos9->BackColor = Color::ForestGreen;
		this->contadorDos++;
	}
	else
	{
		this->btnDos9->BackColor = Color::White;
		this->contadorDos--;
	}
}

System::Void DemoLibreria::Act1DosAlta::btnDos8_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if (this->btnDos8->BackColor == Color::White)
	{
		this->btnDos8->BackColor = Color::ForestGreen;
		this->contadorDos++;
	}
	else
	{
		this->btnDos8->BackColor = Color::White;
		this->contadorDos--;
	}
}

System::Void DemoLibreria::Act1DosAlta::btnDos7_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if (this->btnDos7->BackColor == Color::White)
	{
		this->btnDos7->BackColor = Color::ForestGreen;
		this->contadorDos++;
	}
	else
	{
		this->btnDos7->BackColor = Color::White;
		this->contadorDos--;
	}
}

System::Void DemoLibreria::Act1DosAlta::btnDos6_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if (this->btnDos6->BackColor == Color::White)
	{
		this->btnDos6->BackColor = Color::ForestGreen;
		this->contadorDos++;
	}
	else
	{
		this->btnDos6->BackColor = Color::White;
		this->contadorDos--;
	}
}

System::Void DemoLibreria::Act1DosAlta::btnDos5_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if (this->btnDos5->BackColor == Color::White)
	{
		this->btnDos5->BackColor = Color::ForestGreen;
		this->contadorDos++;
	}
	else
	{
		this->btnDos5->BackColor = Color::White;
		this->contadorDos--;
	}
}

System::Void DemoLibreria::Act1DosAlta::btnDos4_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if (this->btnDos4->BackColor == Color::White)
	{
		this->btnDos4->BackColor = Color::ForestGreen;
		this->contadorDos++;
	}
	else
	{
		this->btnDos4->BackColor = Color::White;
		this->contadorDos--;
	}
}

System::Void DemoLibreria::Act1DosAlta::btnDos3_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if (this->btnDos3->BackColor == Color::White)
	{
		this->btnDos3->BackColor = Color::ForestGreen;
		this->contadorDos++;
	}
	else
	{
		this->btnDos3->BackColor = Color::White;
		this->contadorDos--;
	}
}

System::Void DemoLibreria::Act1DosAlta::btnDos2_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if (this->btnDos2->BackColor == Color::White)
	{
		this->btnDos2->BackColor = Color::ForestGreen;
		this->contadorDos++;
	}
	else
	{
		this->btnDos2->BackColor = Color::White;
		this->contadorDos--;
	}
}

System::Void DemoLibreria::Act1DosAlta::btnDos1_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if (this->btnDos1->BackColor == Color::White)
	{
		this->btnDos1->BackColor = Color::ForestGreen;
		this->contadorDos++;
	}
	else
	{
		this->btnDos1->BackColor = Color::White;
		this->contadorDos--;
	}
}

System::Void DemoLibreria::Act1DosAlta::btnTres1_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if (this->btnTres1->BackColor == Color::White)
	{
		this->btnTres1->BackColor = Color::Peru;
		this->contadorTres++;
	}
	else
	{
		this->btnTres1->BackColor = Color::White;
		this->contadorTres--;
	}
}

System::Void DemoLibreria::Act1DosAlta::btnTres19_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if (this->btnTres19->BackColor == Color::White)
	{
		this->btnTres19->BackColor = Color::Peru;
		this->contadorTres++;
	}
	else
	{
		this->btnTres19->BackColor = Color::White;
		this->contadorTres--;
	}
}

System::Void DemoLibreria::Act1DosAlta::btnTres18_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if (this->btnTres8->BackColor == Color::White)
	{
		this->btnTres18->BackColor = Color::Peru;
		this->contadorTres++;
	}
	else
	{
		this->btnTres18->BackColor = Color::White;
		this->contadorTres--;
	}
}

System::Void DemoLibreria::Act1DosAlta::btnTres17_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (this->btnTres17->BackColor == Color::White)
	{
		this->btnTres17->BackColor = Color::Peru;
		this->contadorTres++;
	}
	else
	{
		this->btnTres17->BackColor = Color::White;
		this->contadorTres--;
	}
}

System::Void DemoLibreria::Act1DosAlta::btnTres16_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (this->btnTres16->BackColor == Color::White)
	{
		this->btnTres16->BackColor = Color::Peru;
		this->contadorTres++;
	}
	else
	{
		this->btnTres16->BackColor = Color::White;
		this->contadorTres--;
	}
}

System::Void DemoLibreria::Act1DosAlta::btnTres15_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if (this->btnTres15->BackColor == Color::White)
	{
		this->btnTres15->BackColor = Color::Peru;
		this->contadorTres++;
	}
	else
	{
		this->btnTres15->BackColor = Color::White;
		this->contadorTres--;
	}
}

System::Void DemoLibreria::Act1DosAlta::btnTres14_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if (this->btnTres14->BackColor == Color::White)
	{
		this->btnTres14->BackColor = Color::Peru;
		this->contadorTres++;
	}
	else
	{
		this->btnTres14->BackColor = Color::White;
		this->contadorTres--;
	}
}

System::Void DemoLibreria::Act1DosAlta::btnTres13_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if (this->btnTres13->BackColor == Color::White)
	{
		this->btnTres13->BackColor = Color::Peru;
		this->contadorTres++;
	}
	else
	{
		this->btnTres13->BackColor = Color::White;
		this->contadorTres--;
	}
}

System::Void DemoLibreria::Act1DosAlta::btnTres12_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if (this->btnTres12->BackColor == Color::White)
	{
		this->btnTres12->BackColor = Color::Peru;
		this->contadorTres++;
	}
	else
	{
		this->btnTres12->BackColor = Color::White;
		this->contadorTres--;
	}
}

System::Void DemoLibreria::Act1DosAlta::btnTres11_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if (this->btnTres11->BackColor == Color::White)
	{
		this->btnTres11->BackColor = Color::Peru;
		this->contadorTres++;
	}
	else
	{
		this->btnTres11->BackColor = Color::White;
		this->contadorTres--;
	}
}

System::Void DemoLibreria::Act1DosAlta::btnTres10_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if (this->btnTres10->BackColor == Color::White)
	{
		this->btnTres10->BackColor = Color::Peru;
		this->contadorTres++;
	}
	else
	{
		this->btnTres10->BackColor = Color::White;
		this->contadorTres--;
	}
}

System::Void DemoLibreria::Act1DosAlta::btnTres9_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if (this->btnTres9->BackColor == Color::White)
	{
		this->btnTres9->BackColor = Color::Peru;
		this->contadorTres++;
	}
	else
	{
		this->btnTres9->BackColor = Color::White;
		this->contadorTres--;
	}
}

System::Void DemoLibreria::Act1DosAlta::btnTres8_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if (this->btnTres8->BackColor == Color::White)
	{
		this->btnTres8->BackColor = Color::Peru;
		this->contadorTres++;
	}
	else
	{
		this->btnTres8->BackColor = Color::White;
		this->contadorTres--;
	}
}

System::Void DemoLibreria::Act1DosAlta::btnTres7_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (this->btnTres7->BackColor == Color::White)
	{
		this->btnTres7->BackColor = Color::Peru;
		this->contadorTres++;
	}
	else
	{
		this->btnTres7->BackColor = Color::White;
		this->contadorTres--;
	}
}

System::Void DemoLibreria::Act1DosAlta::btnTres6_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if (this->btnTres6->BackColor == Color::White)
	{
		this->btnTres6->BackColor = Color::Peru;
		this->contadorTres++;
	}
	else
	{
		this->btnTres6->BackColor = Color::White;
		this->contadorTres--;
	}
}

System::Void DemoLibreria::Act1DosAlta::btnTres5_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if (this->btnTres5->BackColor == Color::White)
	{
		this->btnTres5->BackColor = Color::Peru;
		this->contadorTres++;
	}
	else
	{
		this->btnTres5->BackColor = Color::White;
		this->contadorTres--;
	}
}

System::Void DemoLibreria::Act1DosAlta::btnTres4_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if (this->btnTres4->BackColor == Color::White)
	{
		this->btnTres4->BackColor = Color::Peru;
		this->contadorTres++;
	}
	else
	{
		this->btnTres4->BackColor = Color::White;
		this->contadorTres--;
	}
}

System::Void DemoLibreria::Act1DosAlta::btnTres3_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if (this->btnTres3->BackColor == Color::White)
	{
		this->btnTres3->BackColor = Color::Peru;
		this->contadorTres++;
	}
	else
	{
		this->btnTres3->BackColor = Color::White;
		this->contadorTres--;
	}
}

System::Void DemoLibreria::Act1DosAlta::btnTres2_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if (this->btnTres2->BackColor == Color::White)
	{
		this->btnTres2->BackColor = Color::Peru;
		this->contadorTres++;
	}
	else
	{
		this->btnTres2->BackColor = Color::White;
		this->contadorTres--;
	}
}

System::Void DemoLibreria::Act1DosAlta::btnTres20_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if (this->btnTres20->BackColor == Color::White)
	{
		this->btnTres20->BackColor = Color::Peru;
		this->contadorTres++;
	}
	else
	{
		this->btnTres20->BackColor = Color::White;
		this->contadorTres--;
	}
}

System::Void DemoLibreria::Act1DosAlta::btnCuatro20_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if (this->btnCuatro20->BackColor == Color::White)
	{
		this->btnCuatro20->BackColor = Color::MediumOrchid;
		this->contadorCuatro++;
	}
	else
	{
		this->btnCuatro20->BackColor = Color::White;
		this->contadorCuatro--;
	}
}

System::Void DemoLibreria::Act1DosAlta::btnCuatro19_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (this->btnCuatro19->BackColor == Color::White)
	{
		this->btnCuatro19->BackColor = Color::MediumOrchid;
		this->contadorCuatro++;
	}
	else
	{
		this->btnCuatro19->BackColor = Color::White;
		this->contadorCuatro--;
	}
}

System::Void DemoLibreria::Act1DosAlta::btnCuatro18_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (this->btnCuatro18->BackColor == Color::White)
	{
		this->btnCuatro18->BackColor = Color::MediumOrchid;
		this->contadorCuatro++;
	}
	else
	{
		this->btnCuatro18->BackColor = Color::White;
		this->contadorCuatro--;
	}
}

System::Void DemoLibreria::Act1DosAlta::btnCuatro17_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (this->btnCuatro17->BackColor == Color::White)
	{
		this->btnCuatro17->BackColor = Color::MediumOrchid;
		this->contadorCuatro++;
	}
	else
	{
		this->btnCuatro17->BackColor = Color::White;
		this->contadorCuatro--;
	}
}

System::Void DemoLibreria::Act1DosAlta::btnCuatro16_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (this->btnCuatro16->BackColor == Color::White)
	{
		this->btnCuatro16->BackColor = Color::MediumOrchid;
		this->contadorCuatro++;
	}
	else
	{
		this->btnCuatro16->BackColor = Color::White;
		this->contadorCuatro--;
	}
}

System::Void DemoLibreria::Act1DosAlta::btnCuatro15_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (this->btnCuatro15->BackColor == Color::White)
	{
		this->btnCuatro15->BackColor = Color::MediumOrchid;
		this->contadorCuatro++;
	}
	else
	{
		this->btnCuatro15->BackColor = Color::White;
		this->contadorCuatro--;
	}
}

System::Void DemoLibreria::Act1DosAlta::btnCuatro14_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (this->btnCuatro14->BackColor == Color::White)
	{
		this->btnCuatro14->BackColor = Color::MediumOrchid;
		this->contadorCuatro++;
	}
	else
	{
		this->btnCuatro14->BackColor = Color::White;
		this->contadorCuatro--;
	}
}

System::Void DemoLibreria::Act1DosAlta::btnCuatro13_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (this->btnCuatro13->BackColor == Color::White)
	{
		this->btnCuatro13->BackColor = Color::MediumOrchid;
		this->contadorCuatro++;
	}
	else
	{
		this->btnCuatro13->BackColor = Color::White;
		this->contadorCuatro--;
	}
}

System::Void DemoLibreria::Act1DosAlta::btnCuatro12_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (this->btnCuatro12->BackColor == Color::White)
	{
		this->btnCuatro12->BackColor = Color::MediumOrchid;
		this->contadorCuatro++;
	}
	else
	{
		this->btnCuatro12->BackColor = Color::White;
		this->contadorCuatro--;
	}
}

System::Void DemoLibreria::Act1DosAlta::btnCuatro11_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (this->btnCuatro11->BackColor == Color::White)
	{
		this->btnCuatro11->BackColor = Color::MediumOrchid;
		this->contadorCuatro++;
	}
	else
	{
		this->btnCuatro11->BackColor = Color::White;
		this->contadorCuatro--;
	}
}

System::Void DemoLibreria::Act1DosAlta::btnCuatro10_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (this->btnCuatro10->BackColor == Color::White)
	{
		this->btnCuatro10->BackColor = Color::MediumOrchid;
		this->contadorCuatro++;
	}
	else
	{
		this->btnCuatro10->BackColor = Color::White;
		this->contadorCuatro--;
	}
}

System::Void DemoLibreria::Act1DosAlta::btnCuatro9_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (this->btnCuatro9->BackColor == Color::White)
	{
		this->btnCuatro9->BackColor = Color::MediumOrchid;
		this->contadorCuatro++;
	}
	else
	{
		this->btnCuatro9->BackColor = Color::White;
		this->contadorCuatro--;
	}
}

System::Void DemoLibreria::Act1DosAlta::btnCuatro8_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (this->btnCuatro8->BackColor == Color::White)
	{
		this->btnCuatro8->BackColor = Color::MediumOrchid;
		this->contadorCuatro++;
	}
	else
	{
		this->btnCuatro8->BackColor = Color::White;
		this->contadorCuatro--;
	}
}

System::Void DemoLibreria::Act1DosAlta::btnCuatro7_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (this->btnCuatro7->BackColor == Color::White)
	{
		this->btnCuatro7->BackColor = Color::MediumOrchid;
		this->contadorCuatro++;
	}
	else
	{
		this->btnCuatro7->BackColor = Color::White;
		this->contadorCuatro--;
	}
}

System::Void DemoLibreria::Act1DosAlta::btnCuatro6_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (this->btnCuatro6->BackColor == Color::White)
	{
		this->btnCuatro6->BackColor = Color::MediumOrchid;
		this->contadorCuatro++;
	}
	else
	{
		this->btnCuatro6->BackColor = Color::White;
		this->contadorCuatro--;
	}
}

System::Void DemoLibreria::Act1DosAlta::btnCuatro5_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (this->btnCuatro5->BackColor == Color::White)
	{
		this->btnCuatro5->BackColor = Color::MediumOrchid;
		this->contadorCuatro++;
	}
	else
	{
		this->btnCuatro5->BackColor = Color::White;
		this->contadorCuatro--;
	}
}

System::Void DemoLibreria::Act1DosAlta::btnCuatro4_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (this->btnCuatro4->BackColor == Color::White)
	{
		this->btnCuatro4->BackColor = Color::MediumOrchid;
		this->contadorCuatro++;
	}
	else
	{
		this->btnCuatro4->BackColor = Color::White;
		this->contadorCuatro--;
	}
}

System::Void DemoLibreria::Act1DosAlta::btnCuatro3_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (this->btnCuatro3->BackColor == Color::White)
	{
		this->btnCuatro3->BackColor = Color::MediumOrchid;
		this->contadorCuatro++;
	}
	else
	{
		this->btnCuatro3->BackColor = Color::White;
		this->contadorCuatro--;
	}
}

System::Void DemoLibreria::Act1DosAlta::btnCuatro2_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (this->btnCuatro2->BackColor == Color::White)
	{
		this->btnCuatro2->BackColor = Color::MediumOrchid;
		this->contadorCuatro++;
	}
	else
	{
		this->btnCuatro2->BackColor = Color::White;
		this->contadorCuatro--;
	}
}

System::Void DemoLibreria::Act1DosAlta::btnCuatro1_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (this->btnCuatro1->BackColor == Color::White)
	{
		this->btnCuatro1->BackColor = Color::MediumOrchid;
		this->contadorCuatro++;
	}
	else
	{
		this->btnCuatro1->BackColor = Color::White;
		this->contadorCuatro--;
	}
}
