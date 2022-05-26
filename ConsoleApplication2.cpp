#include <iostream>
#include <windows.h>
#include "ClearConsole.h"
#include "GoTo.h"
#include "Snake.h"
#include "World.h"

using namespace std;

int main() {
	ClearConsole();
	cout.flush();
	while (snakeDie) {
		world(30, 10);
		snake(8, 4);
		move();
		cout.flush();
		Sleep(500);
	}
	return 0;
}