#include<iostream>
using namespace std;
//* 来一波智能指针 fuck you  感觉自己实现这个不是那么智能
//!正确版本在下面托管 new出来的堆区空间 
// class car{
// public:
//     car(){
//         cout<<"调用car构造"<<endl;
//         price = 1000;
//     }
//     int price;
// };
// class smart_pointer{
// public:


//     smart_pointer(car& old){
//         baoma = new car;
//         baoma->price = old.price;
//     }
//     ~smart_pointer(){
//         cout<<"调用智能指针堆区释放构析"<<endl;
//         delete baoma;
//         baoma = NULL;



//     }
// private:
//     car* baoma;
// };
// int main(){
//     auto a = car();
//     smart_pointer p1(a);


//     return EXIT_SUCCESS;
// }

//!看新版本智能指针 用来托管new出来的堆区空间
class car{
public:
    car(){
        cout << "调用car构造" << endl;
        price = 1000;
    }
    int price;
};
class smart_pointer{
public:
    smart_pointer(car* a){
        this->baoma = a;
    }
    ~smart_pointer(){
        cout << "调用智能指针堆区释放构析" << endl;
        delete this->baoma;
        baoma = NULL;
    }
    car* operator->(){
        return this->baoma;
    }
    car& operator*(){
        return *this->baoma;
    }
private:
    car* baoma;
};
int main(){
    smart_pointer sp = (new car);
    
    cout << sp->price << endl;
    cout << (*sp).price<< endl;
    return EXIT_SUCCESS;
}
