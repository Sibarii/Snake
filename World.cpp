#include "World.h"
#include <iostream>
#include "GoTo.h"
#include "ClearConsole.h"

using namespace std;

void world(int x, int y) {
	ClearConsole();
	for (int i = 0; i < y; i++) {
		for (int a = 0; a < x; a++) {
			gotoXY(43 + a, 5);
			cout << "#";
			gotoXY(43 + a, y + 4);
			cout << "#";
		}
		gotoXY(43, 5 + i);
		cout << "#";
		gotoXY(x + 43, 5 + i);
		cout << "#" << endl;
	}
}