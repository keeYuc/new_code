#include<functional>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;






class myprint :public binary_function<int, int, void>
{
public:
    void operator()(int a, int b)const
    {
        cout << a << endl;
        cout << "diao--------" << b << endl;
    }
};
class comparyThan:public unary_function<int,bool>
{
public:
    bool operator()(int a)const
    {
        return a > 5;
    }

};


int main()
{
    // negate<int>p1;
    vector<int>p1;
    for (int i = 0;i < 10;++i)
    {
        p1.push_back(i);
    }

    for_each(p1.begin(), p1.end(), bind2nd(myprint(), 2));
    // auto a = find_if(p1.begin(), p1.end(), not1(comparyThan()));
    auto a = find_if(p1.begin(), p1.end(), not1(bind2nd(less_equal<int>(), 5)));
    if (a != p1.end())
    {
        cout << "找到了" << *a<< endl;
    }

    return 0;
}