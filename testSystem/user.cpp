
#include "head.h"
#include <iostream>
#include <fstream>
#include <Windows.h>
#include <string>
#include <vector>
#include<cstdlib>

using namespace std;


void read(ifstream& ifs, vector<string>& vec, vector<User>& user)
{
	
	User user_1;
	ifs.open("user1.txt");
	string str;
	char c;
	int i = 0;
	while (ifs.get(c))
	{

		if (c != ' ' && c != ',' && c != '.' && c != '\n')
			str += c;
		else
		{
			if (str != "") {
				vec.push_back(str);
				i += 1;
				if (i == 1) {
					
					user_1.no = (str);
					
				}
				if (i == 2) {

					user_1.name = (str);
				}
				if (i == 3) {
					user_1.password = str;
					user.push_back(user_1);
				}
				if (i == 3) {
					
					i = 0;
				}
				str = "";
			}

			
		}

	}

	if (ifs.is_open())
		ifs.close();

}
void user() {

	while (1) {

		int i;

		string get_1, get_2;
		for (i = 0; i < 1; i++) {

			system("cls");
			char name[15] = { "ѧ����¼1.txt" };
			ppfile(name);
			fflush(stdin);
			goto_pos(30, 3);
			fflush(stdin);
			cin >> get_1;
			fflush(stdin);
			goto_pos(30, 7);
			cin >> get_2;

		}

		system("cls");
		vector<User> user;
		ifstream ifs;
		vector<string> vec;
		read(ifs, vec, user);

		int ii;
		for (ii = 0; ii < user.size(); ii++) {
			if (user[ii].no == (get_1)) {
				cout << "ʶ��ɹ�";
				break;
			}
		}
		if (user[ii].password == get_2) {
			system("cls");
			cout << "��¼�ɹ�";
			Sleep(800);
			
			user_login(user[ii]);
			break;
		}

		else {
			goto_pos(11, 17);
			cout << "ʶ��ɹ�";
			printf("�������");
			Sleep(1300);
		}
	}
}

void user_login(User user) {

	int a;
	while (1) {
		a = move_1(3, menuPrint_7);
		switch (a) {
		case 1:
			exam(user);
			continue;
		case 2:
			system("cls");
			print_user_solo(user);
			system("pause");
			continue;
		case 0:
		default:break;
		}
		break;
	}
	  
}





void menuPrint_7(int a) {
	

	system("cls");
	char name[15] = { "menu_7.txt" };
	ppfile(name);
	switch (a) {
		//��ʾ���
	case 1:printRectangle(27, 5); break;
	case 2:printRectangle(27, 9); break;
	case 0:printRectangle(27, 13); break;
	default:break;
	}

}
void printRectangle(int x, int y) {

	
	goto_pos(x, y);
	cout << "---------------";
	goto_pos(x, y + 1);
	cout << "|";
	goto_pos(x + 14, y + 1);
	cout << "|";
	goto_pos(x, y + 2);
	cout << "---------------";
	goto_pos(x + 2, y + 1);
	

}


void exam(User user) {
	system("cls");
	ifstream ifs;
	vector<string> vec;
	vector<Info> info;
	
	readTest(ifs, vec, info);
	


	int key, num, a, b;
	int i = 0, lever = 100, right = 0;
	float score = 0;

	char ch[100];
	char n[100];
	a = strlen(n);
	b = strlen(n);

	cout << "---------����---------"<<endl;
	cout << "��������Ŀ����: ";
	fflush(stdin);
	cin >> num;

	int aa[] = { 0,1,2,3,4,5,6,7,8,9};
	int nn = 10;
	int ii, jj, T = 1000, tm;
	srand(unsigned(time(NULL)));

	while (T--)
	{
		ii = rand() % nn;
		jj = rand() % nn;
		tm = aa[ii];
		aa[ii] = aa[jj];
		aa[jj] = tm;
	}

	cout << "����������Կ�ʼ!"<<endl;
	

	key = cin.get();
	if (key == 0 || key == 224 || key == -32)
		key = cin.get();
	//��ʼ
	while (i < num)
	{
		cout << "��"<<i+1<<"��";
		
		cout << info[aa[i]].statement<<endl;
		cout << info[aa[i]].optionsA<<endl;
		cout << info[aa[i]].optionsB << endl;
		cout << info[aa[i]].optionsC << endl;
		cout << info[aa[i]].optionsD << endl;
		string answer;
		cout << "***������:";
		
		cin >> answer;

     		if (answer == info[i].rightAnswer) {
			score += (float)(100.0 / num);
			
			cout << "����ȷ!"<< endl;
			}
			else {
				cout << "�𰸴���!" << endl;
			}
			cout << "---------��ǰ����:"<<score<<"��------" << endl;

		   Sleep(1800);
		   i ++;

	}
	cout << "�������!" << endl;
	cout << "��ķ�����" <<score<< endl;

	//using namespace std;

   // ���ڵ�ǰϵͳ�ĵ�ǰ����/ʱ��
	time_t now = time(0);

	// �� now ת��Ϊ�ַ�����ʽ
	char* dt = ctime(&now);



	char name[15] = "�ɼ�ͳ��1.txt";
	ofstream outfile(name, std::ios::app);


	if (!outfile.is_open()) {
		cout << "cannot open";
		
		exit(0);
	}

	outfile <<"ѧ�ţ�" <<user.no << " ";
	outfile << "���Գɼ���"<<score << " ";
	outfile <<"����ʱ�䣺"<< (dt);

	outfile.close();
	Sleep(1800);

	system("pause");
}

void readTest(ifstream& ifs, vector<string>& vec, vector<Info>& info)
{

	Info info_1;

	char c;
	string str;
	ifs.open("test.txt");
	int i = 0;
	while (!ifs.eof())
	{
		getline(ifs, str);
		if (str != "") {
			vec.push_back(str);
			i += 1;
			if (i == 1) {
				info_1.statement = str;
				
			}
			if (i == 2) {
				info_1.optionsA = str;
				
			}
			if (i == 3) {
				info_1.optionsB = str;

			}
			if (i == 4) {
				info_1.optionsC = str;

			}
			if (i == 5) {
				info_1.optionsD = str;

			}
			if (i == 6) {
				info_1.rightAnswer = str;
				
			}
			if (i == 6) {
				//ifs.get();
				info.push_back(info_1);
				i = 0;
			}
			str = "";
		}
	}
		if (ifs.is_open())
			ifs.close();

	
}