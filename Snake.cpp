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

using namespace std;

bool snakeDie() {
	bool die = false;

	return die;
}

int snake(int x, int y) {
	gotoXY(43 + x, 5 + y);
	cout << "o";
	move();

	return x, y;
}

int move(/*const char* prompt*/) {
	//puts(prompt);
	int x, y = 0;

	int ch = _getch();
	switch (ch)
	{
	case UP:
		cout << "wdvb";
		Sleep(500);
		return x, y + 1;
	case DOWN:
		return x, y - 1;
	}

}