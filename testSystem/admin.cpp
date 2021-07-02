#include"head.h"



int sign_in() {

	int i;

	char name[10] = "admin";
	ifstream readfile("admin.txt");

	if (!readfile.is_open()) {
		std::cout << "cannot open";
		exit(0);
	}

	int h = 0;
	const int LINE_LENGTH = 20;
	char str[LINE_LENGTH];
	readfile.getline(str, LINE_LENGTH);
	readfile.close();

	char get_1[10], get_2[10];
	for (i = 0; i < 3; i++) {
		
		char name1[15] = "mu1.txt";
		ppfile(name1);
		fflush(stdin);
		goto_pos(16, 6);
		cin >> get_1;
		fflush(stdin);
		goto_pos(16, 10);
		cin >> get_2;

		if (strcmp(name, get_1) == 0 && strcmp(str, get_2) == 0) {
			goto_pos(11, 17);
			std::cout << "登录成功!";
			Sleep(800);
			return 0;
		}
		else {
			goto_pos(11, 17);
			std::cout << "密码错误  请重新输入";
			Sleep(1300);
		}
	}
	exit(-1);
}


void admin() {

	if (sign_in() == -1)//如果登录失败则退出
		return;
	int a;

	while (1) {
		a= move_1(4, menuPrint_2);
		switch (a) {
			//1.
		case 1:; question_admin(); continue;
		case 2:; showtest(); continue;
		case 3:; change_admin_password(); continue;
		case 0:
		default:break;
		}
		break;
	}

}

void menuPrint_2(int a) {

	system("cls");
	char name[15] = { "menu_2.txt" };
	ppfile(name);

	switch (a) {
		//显示光标
	case 1:printLaugh(40, 6); break;
	case 2:printLaugh(40, 8); break;
	case 3:printLaugh(40, 10); break;
	case 0:printLaugh(40, 12); break;

	default:break;
	}

}

void change_admin_password() {

	int i;

	ifstream readfile("admin.txt");

	if (!readfile.is_open()) {
		printf("cannot open");
		exit(0);
	}

	int h = 0;
	const int LINE_LENGTH = 20;
	char str[LINE_LENGTH];
	readfile.getline(str, LINE_LENGTH);
	readfile.close();
	
	char get_2[10];
	for (i = 0; i < 3; i++) {
		system("cls");
		char name2[15] = "mu2.txt";
		ppfile(name2);
		goto_pos(14, 6);
		std::cout << str;
		fflush(stdin);
		goto_pos(14, 10);
		cin >> get_2;
		if (strlen(get_2) >=5) {
			goto_pos(10, 17);
			ofstream outfile("admin.txt", ios::out);
			outfile<<get_2;
			outfile.close();
			std::cout << "修改成功!";
			Sleep(800);
			return;
		}
		else {
			goto_pos(8, 17);
			std::cout << "密码过于简单 请重新输入";
			Sleep(1300);
		}
	}
	exit(-1);

}

void question_admin() {

	question(); // ->question.cpp

}

void showtest() {
	system("cls");
	char name[15] = { "成绩统计1.txt" };

	ppfile(name);

	system("pause");
}







