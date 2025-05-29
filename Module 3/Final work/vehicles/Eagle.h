#ifndef EAGLE_H
#define EAGLE_H

#include "AirVehicle.h"

class Eagle : public AirVehicle {
public:
	Eagle (int distance) :
		AirVehicle(8, reductionDistance(distance), "����")
	{}
	int reductionDistance(int distance);
};

#endif