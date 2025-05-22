#ifndef BROOM_H
#define BROOM_H

#include "AirVehicle.h"

class Broom : public AirVehicle {
private:
	std::string name = "Метла";
public:
	Broom (int distance) :
		AirVehicle(20, reductionDistance(distance), name)
	{}
	int reductionDistance(int distance);
};

#endif