#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;

void myPrint(int a,int b)
{
    cout << a << b<<endl;
}


int main(){
    
    vector<int>p1;
    for (int i = 0;i < 9;++i)
    {
        p1.push_back(i);
    }
    for_each(p1.begin(), p1.end(),bind2nd( ptr_fun(myPrint),2));//!ptr_fun 将函数配成函数对象
    
    
    return 0;
}