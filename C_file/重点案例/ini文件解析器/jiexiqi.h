#pragma once
#include<iostream>
#include<string>
#include<fstream>
using namespace std;
class user_Config//*配置文件类
{
public:
    user_Config(int id, string name, int attack);
    int id;
    string name;
    int attack;
};
//*读取文件内容函数
void read_File(ifstream &p1);