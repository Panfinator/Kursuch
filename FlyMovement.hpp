#pragma once
#include "Movement.hpp"
#include <string>

//����� ������������
class FlyMovement : public Movement {
public:
	const char* Name() { return "Fly"; }
};
