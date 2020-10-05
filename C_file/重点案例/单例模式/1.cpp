#include<iostream>
using namespace std;


class power_huang{
public:
    static  power_huang* getinstance(){
        return power_mimi;
    }
    static void gettudi(){
        cout << tudi << endl;
    }
    static void tudi_up(){
        tudi++;
    }
private:
    power_huang(){
        
        cout << "构造函数调用" << endl;
    }
    power_huang(power_huang&){ }
    static power_huang* power_mimi;//!编译阶段分配内存
    static int tudi;
};
power_huang* power_huang::power_mimi = new power_huang;//* 指定私有作用域可以被动调用私有构造函数
//!在main函数前就会调用
int main(){
    // power_huang::tudi_up();
    // power_huang* p1 = power_huang::getinstance();
    // // p1->tudi_up();
    // // p1->gettudi();
    
    // power_huang* p2 = power_huang::getinstance();
    // cout << p1 << endl;
    // cout << p2 << endl;


    return EXIT_SUCCESS;
}