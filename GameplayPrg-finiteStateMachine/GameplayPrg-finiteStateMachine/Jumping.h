#include"Animation.h"
#include"State.h"

class Jumping : public State
{
public:
	Jumping();
	~Jumping();
	void idle(Animation* a);
};

Jumping::Jumping()
{
}

inline Jumping::~Jumping()
{
}

inline void Jumping::idle(Animation * a)
{
}
