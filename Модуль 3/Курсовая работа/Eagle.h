#ifndef EAGLE_H
#define EAGLE_H

#include "AirVehicle.h"

class Eagle : public AirVehicle {
private:
	std::string name = "Îð¸ë";
public:
	Eagle (int distance) :
		AirVehicle(8, reductionDistance(distance), name)
	{}
	int reductionDistance(int distance);
};

#endif