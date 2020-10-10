#include<functional>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;



class person
{
public:
    person(string a = "fuck") :name(a) {}
    void showName()
    {
        cout << this->name << endl;
    }


    string name;
};

int main()
{
    person p1("日狗者");
    person p2;
    vector<person>v1;
    v1.push_back(p1);
    v1.push_back(p2);
    for_each(v1.begin(), v1.end(),mem_fun_ref(&person::showName));
    
    




    return 0;
}