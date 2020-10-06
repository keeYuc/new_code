
#include"string_Split.hpp"
#include<iostream>
#include<string.h>

class human
{
public:
    string name;
    int attack;
};
int main(){
    human lxl;
    vector<string> p1;
    p1=string_Split("李小龙:100",":");
    lxl.name = p1.back();
    lxl.attack = stoi(p1.back()) ;
    return EXIT_SUCCESS;
}