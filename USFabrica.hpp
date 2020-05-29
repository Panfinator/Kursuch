#pragma once
#include "MilitaryVehicleFactory.hpp"

class USFabrica : public MilitaryVehicleFactory {
public:
	virtual const char* Country() { return "USA"; };
	//�������� ��� �����������
	virtual Movement* CreateMovement(MovementType type) {
		if (type == MovementType::Fly) {
			return new FlyMovement();
		}
		else if (type == MovementType::Ride) {
			return new RideMovement();
		}
		else if (type == MovementType::Swim) {
			return new SwimMovement();
		}
		else {
			return nullptr;
		}
	}
	virtual �haracteristic* CreateCharacteristic(std::istream& in) {
		�haracteristic* c = new �haracteristic();
		in >> *c;
		return c;
	}
};
