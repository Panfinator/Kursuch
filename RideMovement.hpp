#pragma once
#include "Movement.hpp"
#include <string>

//����� ������������
class RideMovement : public Movement {
public:
	const char* Name() { return "Ride"; }
};
