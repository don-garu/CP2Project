#include <process.h>
#include <iostream>
#include "KeyEvent.h"
using namespace std;

unsigned int __stdcall myThread(void*) {
	int i = 0;
	while (1) {
		cout << GetCurrentThreadId() << ": " << i++ << endl;
		Sleep(500);
	}
	return 0;
}
unsigned int __stdcall keyEvent(void *) {
	KeyEvent k;
	int i;
	while (1) {
		i = k.getKey();
		switch (i) {
		case 37: cout << "Left Key is pressed" << endl; break;
		case 38: cout << "Up Key is pressed" << endl; break;
		case 39: cout << "Right Key is pressed" << endl; break;
		case 40: cout << "Down Key is pressed" << endl; break;
		}
	}
	return 0;
}