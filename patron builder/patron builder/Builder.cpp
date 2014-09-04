#include "Builder.h"


Avion BuilderAirbus::crearAvion(){
	Avion a = new Avion;
	a.setNoSerie(1);
	return a;

}
Motor BuilderAirbus::crearMotor(){ return new Motor; }
Alas  BuilderAirbus::crearAlas(){ return new Alas; }



Avion BuilderBoeing::crearAvion(){
	return new Avion();

}//termina avion

Motor BuilderBoeing::crearMotor(){
	return new Motor();

}//termina motor

Alas BuilderBoeing::crearAlas(){
	return new Alas();

}//termina alas


