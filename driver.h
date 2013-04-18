#ifndef DRIVER_H
#define DRIVER_H

#include <iostream>

using namespace std;


class driver{
	private:
		enum menuEnum{LL = 1, BST = 2, QUIT = 3};
	
	public:
		driver();
		void driverMenu();
		void linkedListRun();
		void bstRun();
};

#endif
