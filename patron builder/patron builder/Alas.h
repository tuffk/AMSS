#pragma once
class Alas
{
public:
	void setSpoilers(int);
	int getSpoilers();
	void setHSustentadores(bool);
	bool getHSustentadres();
	void setSerie(int);
	int getSerie();
	Alas() :spoilers(0), hipersustentaodres(false), serie(0){}
	~Alas();
private:
	int spoilers;
	bool hipersustentaodres;
	int serie;
};
