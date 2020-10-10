#include<algorithm>
#include<vector>
#include<functional>
#include<iostream>
using namespace std;



void fuck(int a,int b)
{
    cout << a << endl;
    cout << b << endl;
}
int main()
{
    std::vector<int>p1;
    for (int i = 0;i < 10;++i)
    {
        p1.push_back(i);
    }
    for_each(p1.begin(), p1.end(),bind2nd(ptr_fun(fuck),2) );



    return 0;
}