#include "Animation.h"
#include "State.h"

class Idle : public State
{
public:
	Idle();
	~Idle();
	void jumping(Animation* a);
	void climbing(Animation* a);
};

inline Idle::Idle()
{
}

inline Idle::~Idle()
{
}

void Idle::jumping(Animation* a)
{
	std::cout << "Jumping" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

void Idle::climbing(Animation* a)
{
	std::cout << "Climbing" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}