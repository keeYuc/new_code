#include<iostream>
using namespace std;
//*来波前置和后置加加
class myint{
public:
    myint(){
        zhi = 0;
    }
    myint& operator++(){
        ++this->zhi;
        return *this;
    }
    myint operator++(int){
        myint temp;
        temp.zhi = this->zhi;
        ++this->zhi;
        return temp;
    }
    int zhi;
};
int main(){
    myint a;
    ++(++a);
    cout << a.zhi << endl;
    cout << a++.zhi << endl;
    cout << a.zhi << endl;
    return EXIT_SUCCESS;
}