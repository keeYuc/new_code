#include<iostream>

using namespace std;
class myint{
public:
    void operator()(){
        cout<<"正在使用伪函数，函数符号重载"<<endl;
        
    }
};
int main(){
    myint()();
    return EXIT_SUCCESS;
}