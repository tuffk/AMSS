#pragma once
#include <iostream>
#include "Alas.h"
#include "Motor.h"
#include <string>

class Avion{
private:
	Alas * alas;
	Motor * motor;
	std::string marca;
	std::string modelo;
	int noSerie;

public:
	Avion() :alas(NULL), motor(NULL), modelo(""), marca(""), noSerie(0){}
	~Avion();

	Alas * getAlas(){
		return alas;
	}
	Motor * getMotor(){
		return motor;
	}

	void setAlas(Alas * alas){
		this->alas = alas;
	}

	void setMotor(Motor * motor){
		this->motor = motor;
	}

	std::string getMarca(){
		return marca;
	}
	std::string getModelo(){
		return modelo;
	}
	int getNoSerie(){
		return noSerie;
	}
	void setMarca(std::string marca){
		this->marca = marca;
	}
	void setModelo(std::string modelo){
		this->modelo = modelo;
	}
	void setNoSerie(int noSerie){
		this->noSerie = noSerie;
	}
};