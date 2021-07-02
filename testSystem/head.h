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
	string rightAnswer;//正确选项
	string optionsA;//选项A
	string optionsB;//选项B
	string optionsC;//选项C
	string optionsD;//选项D
	string statement;//题目描述

};

class User {
public:
	string no;//用户学号
	string name;//用户名
	string password;//用户密码
};

//main.cpp
void ppfile(char name[15]);                        //输出txt界面
int main(void);                                    //主程序
int move_1(int num, void (*p)(int));               //光标参数
void menuPrint(int a);                             //初始界面
void printLaugh(int x, int y);                     //显示光标
void goto_pos(int x, int y);                       //光标移动

//admin.cpp

void showtest();                                                     //输出试题
int sign_in();                                                       //登录
void admin();
void menuPrint_2(int a);                                             //管理员界面
void question_admin();                                               //管理员选项函数
void change_admin_password();                                        //修改管理员密码

//question.cpp
void question();                                   //试题处理选项                                    
void menuPrint_3(int a);                                            
void input_info();                                
void print_info();                                //输出试题
void delete_info_no(); //删除试题
void change_info_no(); //修改试题
//find_info.cpp

void find_info(); //查找试题
void find_info_no();

//admin_user.cpp
void input_user();//用户注册
void print_user_solo(User user);//打印用户数据
void write_user(User user);//写入用户

//user.cpp
void read(ifstream& ifs, vector<string>& vec, vector<User>& user);   //读取用户
void readTest(ifstream& ifs, vector<string>& vec, vector<Info>& info);//读取试题
void user();//登录识别
void user_login(User user);//用户选项
void menuPrint_7(int a);
void printRectangle(int x, int y);
void exam(User user);//考试