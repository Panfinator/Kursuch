#pragma once
#include "FlyMovement.hpp"
#include "SwimMovement.hpp"
#include "RideMovement.hpp"

#include "�haracteristic.hpp"
#include "Movement.hpp"

enum MovementType {
	Fly = 0,
	Ride = 1,
	Swim = 2
};

//������� ��� �������� �������
class MilitaryVehicleFactory {
public:
	virtual const char* Country() = 0;
	virtual Movement* CreateMovement(MovementType type) = 0;
	virtual �haracteristic* CreateCharacteristic(std::istream& in) = 0;
};
