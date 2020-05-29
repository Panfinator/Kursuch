#pragma once
#include "MilitaryVehicleFactory.hpp"

class RFFabrica : public MilitaryVehicleFactory {
public:
	virtual const char* Country() { return "Russia"; };
	//âûşèğàåì òèï ïåğåìåùåíèÿ
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
	virtual Ñharacteristic* CreateCharacteristic(std::istream& in) {
		Ñharacteristic* c = new Ñharacteristic();
		in >> *c;
		return c;
	}
};
