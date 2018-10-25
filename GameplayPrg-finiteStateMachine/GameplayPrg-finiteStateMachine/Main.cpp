#include "Animation.h"
#include <chrono>
#include <thread>


int main()
{
	Animation fsm; int i = 0;
	

	while (true) {
		std::cout << "Press 1 to jump or 2 to climb" << std::endl;
		std::cin >> i;


		if (i == 1) {
			fsm.jumping();
			std::this_thread::sleep_for(std::chrono::milliseconds::duration(1000));
			i = 0;
		}
		if(i == 2){
			fsm.climbing();
			std::this_thread::sleep_for(std::chrono::milliseconds::duration(1000));
			i = 0;
		}

		fsm.idle();
		std::this_thread::sleep_for(std::chrono::milliseconds::duration(1000));
	}
}