#include "head.h"




void question() {

	int a;

	while (1) {


		a = move_1(6, menuPrint_3);
		switch (a) {
			//1.
		case 1:; find_info(); continue;
		case 2:; input_info(); continue;
		case 3:; delete_info_no(); continue;
		case 4:; change_info_no(); continue;
		case 5:  print_info(); continue;
		case 0:
		default:break;
		}
		break;
	}

}

void print_info() {
	system("cls");
	char name[15] = { "test.txt" };
	ppfile(name);
	system("pause");

	}


void menuPrint_3(int a) {

	system("cls");
	char name[15] = { "menu_3.txt" };

	ppfile(name);

	switch (a) {
		//��ʾ���
	case 1:printLaugh(40, 6); break;
	case 2:printLaugh(40, 8); break;
	case 3:printLaugh(40, 10); break;
	case 4:printLaugh(40, 12); break;
	case 5:printLaugh(40, 14); break;
	case 0:printLaugh(40, 16); break;
	default:break;
	}

}

void delete_info_no() {
	system("cls");

		ifstream file("test.txt");
		string line;
		int n, count = 0;
		ofstream outfile("test2.txt", ios::out | ios::trunc);
		cout << "����Ҫɾ�������:" << endl;
		cin >> n;
		while (!file.eof()) {
			getline(file, line);
			if (count != 6*n - 6&& count != 6 * n - 5 && count != 6 * n - 4 && count != 6 * n - 3&&count != 6 * n - 2 && count != 6 * n - 1)//���Ҫ�޸����ݾ������޸�line������,�ٴ浽�ļ��о�����
				outfile << line << endl;
			count++;
		}
		outfile.close();
		file.close();
		ofstream outfile1("test.txt", ios::out | ios::trunc);
		fstream file1("test2.txt");
		while (!file1.eof()) {
			getline(file1, line);
			outfile1 << line << endl;
		}
		outfile1.close();
		file1.close();
		system("del test2.txt");//ɾ���м��ļ�
		cout << "ɾ���ɹ�";
		system("pause");
}

void change_info_no() {
	system("cls");

	ifstream file("test.txt");
	string line;
	int n, count = 0;
	ofstream outfile("test2.txt", ios::out | ios::trunc);
	cout << "����Ҫ�޸ĵ����:" << endl;
	cin >> n;

	ifstream ifs;
	vector<string> vec;
	vector<Info> info;
	readTest(ifs, vec, info);

	cout << info[n - 1].statement << endl;
	cout << info[n - 1].optionsA << endl;
	cout << info[n - 1].optionsB << endl;
	cout << info[n - 1].optionsC << endl;
	cout << info[n - 1].optionsD << endl;
	cout << info[n - 1].rightAnswer << endl;

	cout << "�������޸ĺ����Ŀ";cin >> info[n-1].statement;
	cout << "�������޸ĺ��ѡ��A";cin >> info[n-1].optionsA;
	cout << "�������޸ĺ��ѡ��B";cin >> info[n-1].optionsB;
	cout << "�������޸ĺ��ѡ��C";cin >> info[n-1].optionsC;
	cout << "�������޸ĺ��ѡ��D";cin >> info[n-1].optionsD;
	cout << "�������޸ĺ����ȷ��";cin >> info[n-1].rightAnswer;

	cout << info[n - 1].statement << endl;
	cout << info[n - 1].optionsA << endl;
	cout << info[n - 1].optionsB << endl;
	cout << info[n - 1].optionsC << endl;
	cout << info[n - 1].optionsD << endl;
	cout << info[n - 1].rightAnswer << endl;



	while (!file.eof()) {
		getline(file, line);
		if (count != 6 * n - 6 && count != 6 * n - 5 && count != 6 * n - 4 && count != 6 * n - 3 && count != 6 * n - 2 && count != 6 * n - 1)//���Ҫ�޸����ݾ������޸�line������,�ٴ浽�ļ��о�����
		{
			outfile << line << endl;
		}
		
		else if (count == 6 * n - 6) {
			outfile << info[n - 1].statement << endl;
		}
		else if (count == 6 * n - 5) {
			outfile << info[n - 1].optionsA << endl;
		}
		else if (count == 6 * n - 4) {
			outfile << info[n - 1].optionsB << endl;
		}
		else if (count == 6 * n - 3) {
			outfile << info[n - 1].optionsC << endl;
		}
		else if (count == 6 * n - 2) {
			outfile << info[n - 1].optionsD << endl;
		}
		else if (count == 6 * n - 1) {
			outfile << info[n - 1].rightAnswer << endl;
		}
		count++;
	}
	outfile.close();
	file.close();
	ofstream outfile1("test.txt", ios::out | ios::trunc);
	fstream file1("test2.txt");
	while (!file1.eof()) {
		getline(file1, line);
		outfile1 << line << endl;
	}
	outfile1.close();
	file1.close();
	system("del test2.txt");//ɾ���м��ļ�


	cout << "�޸ĳɹ�";
	system("pause");


}


