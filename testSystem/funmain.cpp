#include"head.h"
#include<iostream>
#include <fstream>
#include <Windows.h>
#include"conio.h"

using namespace std;

void menuPrint(int a) {

	system("cls");
	char name[15] = { "menu_1.txt" };
	ppfile(name);

	switch (a) {
		//显示光标
	case 1:printLaugh(60, 6); break;
	case 2:printLaugh(60, 8); break;
	case 3:printLaugh(60, 10); break;
	case 0:printLaugh(60, 12); break;
	default:break;
	}

}

int move_1(int num, void (*p)(int)) {

	int a = 1;
	int key = 1;

	while (1) {

		(*p)(a);
		fflush(stdin);
		key = _getch();
		if (key == 244 || key == 0)
			key = _getch();
		if (key == 72)
			a--;//up
		else if (key == 80)
			a++;
		else if (key >= 48 && key <= 57)
			return key - 48;
		else if (key == 27)
			return 0;//Esc
		else if (key == 13)
			return a;
		else;
		if (a == num)
			a = 0;
		if (a == -1)
			a = num - 1;
	}
}

void goto_pos(int x, int y) {
	//(列,行)
	COORD coord = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);

}

void printLaugh(int x, int y) {

	goto_pos(x, y);
	cout << "<<--";
	goto_pos(x + 3, y);

}


void ppfile(char name[15]) {
	system("cls");
	

	ifstream readfile(name);

	if (!readfile.is_open()) {
		printf("cannot open %s\n", name);
		exit(0);
	}

	const int LINE_LENGTH = 200;
	char str[LINE_LENGTH];
	while (readfile.getline(str, LINE_LENGTH))
	{
		cout << str << endl;
	}
	readfile.close();

}