#include<iostream>





int main(){
    int b = 10;
    
    int c=[=](int a)mutable->int{
        b = 100;
        std::cout << a << std::endl;
        return 100;
    }(5);
    
    std::cout << c << std::endl;
    return 0;
}