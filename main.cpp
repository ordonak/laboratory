#include <iostream>
#include "driver.h"

using namespace std;

void mainMenu();
void driverCall();

int main()
{	
	mainMenu();
}

void mainMenu(){
	enum menuEnum{ DATADRIVER = 1, QUIT = 2};
	int choice;

	while(choice != QUIT){
		cerr << "What would the user like to do?" << endl;
		cerr << "1. Data Struct Driver" << endl;
		cerr << "2. Quit " << endl;
		cin >> choice;
		switch(choice){
			case DATADRIVER:
				driverCall();
			case QUIT:
				return;
		}
	}
}

void driverCall(){
	driver dataDriver;
	dataDriver.driverMenu();
}
