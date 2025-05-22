#ifndef ALLTERRAINBOOTS_H
#define ALLTERRAINBOOTS_H

#include "GroundVehicle.h"

class AllTerrainBoots : public GroundVehicle {
private:
	std::string name = "Ботинки-вездеходы";
public:
	AllTerrainBoots(int distance) : GroundVehicle(6, 60, 10, 5, 5, distance, name) {}
};

#endif