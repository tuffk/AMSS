#pragma once
class Motor
{
private:
	int potencia;
	int numSerie;
public:
	void setPotencia(int p);
	void setNumSerie(int n);

	int getPotencia();
	int getNumSerie();

	Motor() :potencia(0), numSerie(0){}
	~Motor();
};