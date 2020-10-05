#include<iostream>
using namespace std;

//!虚继承为了解决菱形继承带来的代码重复

class animal{
    public:
    animal(){
        size = 550;
    }
    int size;
};
class yang :virtual public animal{};
class luotuo :virtual public animal{};
class yangtuo :public yang, public luotuo{
};
int main(){
    yangtuo a1;
    a1.size;
    return EXIT_SUCCESS;
}