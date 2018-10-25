#ifndef WALKING_H
#define WALKING_H

#include"State.h"
#include"Idle.h"

class Walking : public State
{
public:
	Walking();
	~Walking();
	void idle(Animation* a);
};

Walking::Walking()
{
}

inline Walking::~Walking()
{
}

inline void Walking::idle(Animation * a)
{
	std::cout << "Going from Walking to Idling" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
#endif WALKING_H
