#include"head.h"
#include<iostream>
#include <fstream>
#include <Windows.h>
#include <string>
#include"conio.h"

using namespace std;

void input_user() {

	int i;
	User user;

	for (i = 0; i < 3; i++) {

		system("cls");
		char name[15] = { "�û�ע��1.txt" };
		ppfile(name);
		fflush(stdin);
		goto_pos(28, 3);
	    std::cin >> user.no;
		fflush(stdin);
		goto_pos(28, 5);
		std::cin >> user.name;
		goto_pos(28, 7);
		std::cin >> user.password;

		vector<User> user1;
		ifstream ifs;
		vector<string> vec;
		read(ifs, vec, user1);

		int boo=0;
		int ii;
		for (ii = 0; ii < user1.size(); ii++) {
			if (user1[ii].no == (user.no)) {
				boo=1;
				break;
			}
		}

		if (!boo) {
			goto_pos(28, 21);
				std::cout<<"ע��ɹ�!";
			
			char name[15] = "user1.txt";
			ofstream outfile(name, std::ios::app);


			if (!outfile.is_open()) {
				std::cout << "cannot open";
				exit(0);
			}
			outfile << user.no << " ";
			outfile << user.name << " ";
			outfile << user.password << endl;

			outfile.close();
			Sleep(1800);
			return ;
		}
		else {
			goto_pos(13, 16);
			std::cout << "ע��ʧ�� ������ע��"<<endl;
			goto_pos(13, 18);
			if (boo==1)
			std::cout << "�˺��Ѿ���ע��";
			Sleep(2100);
		}
	}
}

void write_user(User user) {

	char name[15] = "user.txt";
	ofstream outfile(name);

	if (!outfile.is_open()) {
		printf("cannot open %s\n", name);
		exit(0);
	}
	outfile << user.no << " ";
	outfile << user.name << " ";
	outfile << user.password << endl;
	outfile.close();

}

void print_user_solo(User user) {
		int i;
		
		{	//������Ϣ
			cout << "ѧ��:\t" << user.no<<endl;
			cout << "����:\t" << user.name << endl;
			cout << "����:\t" << user.password << endl;
			cout <<endl;
			cout << endl;
}
	}



