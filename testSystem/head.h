#pragma once
#include <stdio.h>
#include <time.h>
#include <math.h>
#include <windows.h>
#include <stdlib.h>
#include <conio.h>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;


class Info {
public:
	string rightAnswer;//��ȷѡ��
	string optionsA;//ѡ��A
	string optionsB;//ѡ��B
	string optionsC;//ѡ��C
	string optionsD;//ѡ��D
	string statement;//��Ŀ����

};

class User {
public:
	string no;//�û�ѧ��
	string name;//�û���
	string password;//�û�����
};

//main.cpp
void ppfile(char name[15]);                        //���txt����
int main(void);                                    //������
int move_1(int num, void (*p)(int));               //������
void menuPrint(int a);                             //��ʼ����
void printLaugh(int x, int y);                     //��ʾ���
void goto_pos(int x, int y);                       //����ƶ�

//admin.cpp

void showtest();                                                     //�������
int sign_in();                                                       //��¼
void admin();
void menuPrint_2(int a);                                             //����Ա����
void question_admin();                                               //����Աѡ���
void change_admin_password();                                        //�޸Ĺ���Ա����

//question.cpp
void question();                                   //���⴦��ѡ��                                    
void menuPrint_3(int a);                                            
void input_info();                                
void print_info();                                //�������
void delete_info_no(); //ɾ������
void change_info_no(); //�޸�����
//find_info.cpp

void find_info(); //��������
void find_info_no();

//admin_user.cpp
void input_user();//�û�ע��
void print_user_solo(User user);//��ӡ�û�����
void write_user(User user);//д���û�

//user.cpp
void read(ifstream& ifs, vector<string>& vec, vector<User>& user);   //��ȡ�û�
void readTest(ifstream& ifs, vector<string>& vec, vector<Info>& info);//��ȡ����
void user();//��¼ʶ��
void user_login(User user);//�û�ѡ��
void menuPrint_7(int a);
void printRectangle(int x, int y);
void exam(User user);//����