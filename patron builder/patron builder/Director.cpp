#include "Builder.h"

#define kBoing 1
#define kAirbus 2

class Director{
private:
	Builder* builder;
public:
	void setBuilder(int i){

		switch (i){
		case kBoing:
			builder = new BuilderBoeing;
			break;
		case kAirbus:
			builder = new BuilderAirbus;
			break;
		case default:
			cout << "No se encontro esa marca";
			break;
		}
	}

	Avion* construir(){
		return builder.crearAvion();
	}
};