#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>

class Vehicle {
private:
	std::string type;
	bool registered;
	int speed;
	int distance;
	std::string name;
public:
	Vehicle(int speed, std::string type, int distance, std::string &name) : 
		speed(speed), 
		type(type), 
		registered(false), 
		distance(distance),
		name(name)
		{}
	double getSpeed();
	int getDistance();
	std::wstring getName();
	bool regist();
};

#endif
