#ifndef CENTAUR_H
#define CENTAUR_H

#include "GroundVehicle.h"

class Centaur : public GroundVehicle {
private:
	std::string name = "Кентавр";
public:
	Centaur(int distance) : GroundVehicle(15, 8, 2, 2, 2, distance, name) {}
};

#endif