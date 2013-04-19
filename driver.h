#ifndef DRIVER_H
#define DRIVER_H

#include <iostream>

using namespace std;


class driver{
	private:
		enum menuEnum{LL = 1, BST, STK, QUIT};
	
	public:
		driver();
		void driverMenu();
		void linkedListRun();
		void bstRun();
		void stackRun();
		void queueRun();
};

#endif
