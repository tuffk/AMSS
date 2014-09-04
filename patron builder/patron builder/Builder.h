#pragma once
#include "Avion.h"

class Builder{
protected:
	Avion* miAvion;

public:
	virtual void setSerie() = 0;
	virtual void setMarca() = 0;
	virtual void setModelo() = 0;

	Avion* crearAvion()
	{
		return new Avion;
	}

	virtual Motor* crearMotor() = 0;
	virtual Alas* crearAlas() = 0;
};

class BuilderAirbus : public Builder
{
public:
	void setMarca()
	{
		miAvion->setMarca("Airbus");
	}

	virtual void setModelo()
	{
		miAvion->setModelo("A320");
	}
};


class BuilderBoeing : public Builder{
public:

	void setMarca(){
		miAvion->setMarca("Boeing")
	}//termina metodo

	void setModelo(){
		miAvion->setModelo("787")

	}//termina metodo

};//temrina Boeing 