#include <iostream>
#include "KeyEvent.h"
#include <process.h>  
#include "MiniGame.h"
#include "Frame.h"

Game* game = new Game();
unsigned int __stdcall myThread(void*) {
	int i = 0;
	while (1) {
		game->move();
		Sleep(500);
	}
	return 0;
}
unsigned int __stdcall keyEvent(void *) {
	KeyEvent k;
	int i;
	while (1) {
		i = k.getKey();
		if (i != -1) {
			game->setDirection(i);
		}
	}
	return 0;
}

/*
unsigned int __stdcall myThread(void*);
unsigned int __stdcall keyEvent(void *);
*/
int main() {
	/*
	HANDLE handleA, handleB;

	handleA = (HANDLE)_beginthreadex(0,0,&myThread,(void*)0,0,0);
	handleB = (HANDLE)_beginthreadex(0, 0, &keyEvent, (void*)0, 0, 0);

	WaitForSingleObject(handleA, INFINITE);
	WaitForSingleObject(handleB, INFINITE);

	CloseHandle(handleA);
	CloseHandle(handleB);
	*/

	try {
		Frame* f1 = new Frame();
		Frame* f2 = new Frame[10];

		delete f1;
		delete[] f2;
	}
	catch (string s) {
		cerr << "Error msg : " << s << endl;
	}

	
	return 0;
}

