#ifndef JUMPING_H
#define JUMPING_H


#include"State.h"
#include"Idle.h"

class Jumping : public State
{
public:
	Jumping();
	~Jumping();
	void idle(Animation* a);
	void Climbing(Animation* a);
};

Jumping::Jumping()
{
}

inline Jumping::~Jumping()
{
}

inline void Jumping::idle(Animation * a)
{
	std::cout << "Going from Jumping to Idling" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
inline void Jumping::Climbing(Animation * a)
{
	/*std::cout << "Going from Jumping to Climbing" << std::endl;
	a->setCurrent(new Climbing());
	delete this;*/
}
#endif JUMPING_H