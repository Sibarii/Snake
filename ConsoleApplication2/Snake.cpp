#include "Snake.h"
#include "GoTo.h"
#include <iostream>
#include <windows.h>

#include <stdio.h>
#include <conio.h>
#include <ctype.h>

#define ESC   27
#define UP	72
#define LEFT  75
#define RIGHT 77
#define DOWN  80

bool moveOn;

using namespace std;

bool snakeDie() {
	bool die = false;

	return die;
}

int snake(int x, int y) {
	moveOn = true;
	move();
	gotoXY(43 + x, 5 + y);
	cout << "o";

	return x, y;
}

int move() {
	int x, y = 0;
	int ch = _getch();

	if (moveOn) {
		switch (ch)
		{
		case UP:
			cout << "wdvb";
			moveOn = false;
			return x, y + 1;
		case DOWN:
			return x, y - 1;
		}
	}

}