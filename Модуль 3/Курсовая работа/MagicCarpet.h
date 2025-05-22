#ifndef MAGICCARPET_H
#define MAGICCARPET_H

#include "AirVehicle.h"

class MagicCarpet : public AirVehicle {
private:
	std::string name = "Ковер-самолёт";
public:
	MagicCarpet(int distance) : 
		AirVehicle(10, reductionDistance(distance), name) 
	{}
	int reductionDistance(int distance);
};

#endif