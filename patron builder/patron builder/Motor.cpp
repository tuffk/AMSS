#include "Motor.h"

void Motor::setPotencia(int p){
	potencia = p;
}
void Motor::setNumSerie(int n){
	numSerie = n;
}

int Motor::getPotencia(){
	return potencia;
}
int Motor::getNumSerie(){
	return numSerie;
}

Motor::Motor(int s, int p) : numSerie(s), potencia(p){

}

Motor::~Motor(){

}