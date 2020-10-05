#include<iostream>
using namespace std;
class aniaml{
public:
    virtual void fuck() = 0;
};
class human:public aniaml{
    public:
    void fuck(){
        cout << "human在叫" << endl;
    }
};
class dog:public aniaml{
    public:
    void fuck(){
        cout << "dog在叫" << endl;
    }
};
void test(aniaml* a){
    a->fuck();
}
int main(){
    aniaml *p1 = new dog;
    aniaml *p2 = new human;
    test(p1);
    test(p2);
    return EXIT_SUCCESS;
}