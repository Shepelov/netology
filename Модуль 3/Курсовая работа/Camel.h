#ifndef CAMEL_H
#define CAMEL_H

#include "GroundVehicle.h"

class Camel : public GroundVehicle {
private:
	std::string name = "Верблюд";
public:
	Camel(int distance) : GroundVehicle(10, 30, 5, 8, 8, distance, name) {}
};

#endif