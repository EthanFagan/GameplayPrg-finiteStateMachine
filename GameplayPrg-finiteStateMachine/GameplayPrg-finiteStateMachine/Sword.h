#ifndef SWORD_H
#define SWORD_H


#include"State.h"
#include"Idle.h"

class Sword : public State
{
public:
	Sword();
	~Sword();
	void idle(Animation* a);
};

Sword::Sword()
{
}

inline Sword::~Sword()
{
}

inline void Sword::idle(Animation * a)
{
	std::cout << "Going from Swinging a sword to Idling" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
#endif SWORD_H
