#include<iostream>
using namespace std;

void test(){
    
    
    
    const int a = 10;
    cout << a << endl;
    *((int*)&a) = 20;
    // int* p = (int*)&a;
    // int* p = const_cast<int*>(&a);
    // *p = 100;
    cout << a << endl;
    
    
    
}


int main(){
    
    test();
    
    return EXIT_SUCCESS;
}