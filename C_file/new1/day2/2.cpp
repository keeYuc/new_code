#include<iostream>
using namespace std;

class zfx{
private:
    double high;
    double s;
public:
    double jisuan_s(){
        s = high * 4;
        return s;
    }
    void set_s(double a){
        high = a;
    }
};

int main(){
    zfx x1;
    x1.set_s(20);
    cout << "------" << x1.jisuan_s() << endl;

    
    cout << "------" << x1.jisuan_s() << endl;
    return EXIT_SUCCESS;
}