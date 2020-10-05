#include<iostream>
using namespace std;


class dwu{
    public:
    int age;
};

class yang:public dwu{
    
};

int main(){
    
    yang a;
    cout << a.age << endl;
    
    return EXIT_SUCCESS;
}