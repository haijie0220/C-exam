#include"head.h"
#include<iostream>
#include <fstream>
#include <Windows.h>
#include"conio.h"


using namespace std;



int main() {


	while (1) {
		int a=move_1(4, menuPrint);
		switch (a) {
		case 1:
			admin();
			continue;
		case 2:
			user();
			continue;
		case 3:
			input_user();
			continue;
		case 0:exit(0);
		default:break;

		}

	}
	return 0;
}



