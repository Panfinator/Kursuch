#pragma once
#include "Movement.hpp"
#include <string>

//����� ������������
class SwimMovement : public Movement {
public:
	const char* Name() { return "Swim"; }
};

