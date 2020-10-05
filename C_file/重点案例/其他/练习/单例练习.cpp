
#include<iostream>
using namespace std;

class Priner1{
public:
    void useit(){
        cout<<"正在使用"<<endl;
        ++usings;
    }
    static Priner1* getinsdance(){
        return priner;
    }
private:
    Priner1(){ 
        cout<<"构造完成"<<endl;
        usings = 0;
        
    }
    Priner1(Priner1&){ }
    int usings;
    static Priner1* priner;

};
Priner1* Priner1::priner = new Priner1;

int main(){
    auto a = Priner1::getinsdance();
    cout << a << endl;
    
    
    
}