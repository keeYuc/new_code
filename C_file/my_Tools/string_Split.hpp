#pragma once
#include<string>
#include<vector>
using namespace std;
vector<string> string_Split(string str,string yuans)
{//! 将字符串按 “:”分割然后返回每一段至容器中   返回一个string型vector  如果没有返回原字符串
    vector <string>p1;
    int i = 0, j = 0,z=0;//*分别为起始位 返回标识位 总长度
         //*将原字符串 按照 传进来的子字符串进行切割 加入容器中  没有则返回整个串
    z = str.end() - str.begin();
    while((j=str.find(yuans,i))!=-1){
        // p1.push_back(str.substr(i, j));
        p1.push_back(str.substr(i, j-i)) ;
        ++j;
        i = j;
    }
    p1.push_back(str.substr(i,z-i)) ;
    return p1;
};