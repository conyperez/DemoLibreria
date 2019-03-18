#include "Hecho.h"


Hecho::Hecho()
{
	this->predicado = nullptr;
	this->argumento = gcnew Argumento();
	this->estado = NULL;
}

Hecho::Hecho(String ^ predicado, Argumento^ args, int estado)
{
	this->predicado = predicado;
	this->argumento = args;
	this->estado = estado;
}

Hecho::Hecho(String ^ predicado, Argumento^ args)
{
	this->predicado = predicado;
	this->argumento = args;
	this->estado = INDETERMINADO;
}

Hecho::~Hecho()
{
	delete this->predicado;
	delete this->argumento;
}

String ^ Hecho::getRelacion()
{
	return this->predicado;
}

void Hecho::setRelacion(String ^ relacion)
{
	this->predicado = relacion;
}

Argumento^ Hecho::getArgumento()
{
	return this->argumento;
}

void Hecho::setArgumento(Argumento ^ arg)
{
	this->argumento = arg;
}

int Hecho::getEstado()
{
	return this->estado;
}

void Hecho::setEstado(int estado)
{
	this->estado = estado;
}


bool Hecho::operator==(Hecho ^ h2)
{
	Object ^ obj = this;
	Object ^ obj2 = h2;

	if (obj == nullptr && obj2 == nullptr)
	{
		return true;
	}
	else if ((obj == nullptr && obj2 != nullptr) || (obj != nullptr && obj2 == nullptr))
	{
		return false;
	}
	else if (this->getRelacion() == h2->getRelacion())
	{
		bool iguales = true;
		if (this->argumento != h2->getArgumento()) {
			iguales = false;
		}
		return iguales;
	}

	return false;
}

bool Hecho::operator!=(Hecho ^ h2)
{
	Object ^ obj = this;
	Object ^ obj2 = h2;

	if (obj == nullptr && obj2 == nullptr)
	{
		return false;
	}
	else if ((obj == nullptr && obj2 != nullptr) || (obj != nullptr && obj2 == nullptr))
	{
		return true;
	}
	else if (this->getRelacion() == h2->getRelacion())
	{
		bool iguales = true;
		if (this->argumento != h2->getArgumento()) {
			iguales = true;
		}
		return iguales;
	}

	return true;
}

Hecho% Hecho::operator=(const Hecho% h)
{
	return *this;
}