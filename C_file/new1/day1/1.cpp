#include<iostream>
using namespace std;
extern const int a123;

int main(){
    double b = 1;
    for(int i=0;i<19;i++){
        b *= 1.1;
    }
    cout << b << endl;
    system("pause");
}