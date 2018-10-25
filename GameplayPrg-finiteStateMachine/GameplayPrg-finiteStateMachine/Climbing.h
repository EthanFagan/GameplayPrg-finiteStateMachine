#ifndef CLIMBING_H
#define CLIMBING_H



#include "State.h"
#include "Idle.h"

class Climbing : public State
{
public:
	Climbing();
	~Climbing();
	void idle(Animation* a)
	{
		std::cout << "Going from Climbing to Idling" << std::endl;
		a->setCurrent(new Idle());
		delete this;
	}
};

Climbing::Climbing()
{
}

inline Climbing::~Climbing()
{
}
#endif CLIMBING_H