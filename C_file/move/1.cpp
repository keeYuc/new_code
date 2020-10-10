#include<iostream>
#include<string>
using namespace std;

class person11
{

public:
    person11()
    {
        name = "caoni";
    }
    person11(string a)
    {
        name = a;
    }
    person11(person11&& a)noexcept
        : name(a.name)
    {
        cout << "调用移动构造" << endl;

    }
    // void operator=(person11 &&a)noexcept{
    //     name = a.name;
    //     a.name = NULL;
    // }

    string name;
};


int main()
{
    person11 mrsLi("李小龙");
    person11 ll = move(mrsLi);

    cout << "mrsLi name----" << mrsLi.name << endl;
    cout << "rg name----" << ll.name << endl;






    return 0;
}