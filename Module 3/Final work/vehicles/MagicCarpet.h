#ifndef MAGICCARPET_H
#define MAGICCARPET_H

#include "AirVehicle.h"

class MagicCarpet : public AirVehicle {
public:
	MagicCarpet(int distance) : 
		AirVehicle(10, reductionDistance(distance), "�����-�������")
	{}
	int reductionDistance(int distance);
};

#endif