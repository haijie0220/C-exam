#include"head.h"

void find_info() {
	find_info_no();

}

void find_info_no() {
	system("cls");

	int i;
	ifstream ifs;
	vector<string> vec;
	vector<Info> info;
	readTest(ifs, vec, info);
	cout << "请输入题号";
	cin >> i;

	cout << info[i - 1].statement << endl;
	cout << info[i - 1].optionsA << endl;
	cout << info[i - 1].optionsB << endl;
	cout << info[i - 1].optionsC << endl;
	cout << info[i - 1].optionsD << endl;
	cout << info[i - 1].rightAnswer << endl;
	system("pause");

}


void input_info(){
	system("cls");
	Info info;
	char name[15] = "test.txt";
    ofstream outfile(name, std::ios::app);


         if (!outfile.is_open()) {
		cout << "cannot open";
	       
	       exit(0);
}

		 cout << "请输入题目";cin >> info.statement;
		 cout << "请输入选项A";cin >> info.optionsA;
		 cout << "请输入选项B";cin >> info.optionsB;
		 cout << "请输入选项C";cin >> info.optionsC;
		 cout << "请输入选项D";cin >> info.optionsD;
		 cout << "请输入正确答案";cin >> info.rightAnswer;
outfile << info.statement << endl;
outfile << info.optionsA << endl;
outfile << info.optionsB << endl;
outfile << info.optionsC << endl;
outfile << info.optionsD << endl;
outfile << info.rightAnswer << endl;

outfile.close();
Sleep(1800);
return;



}