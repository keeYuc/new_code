#include<iostream>
using namespace std;


class human{
public:
    human& humanadd(){
        cout << 1 << endl;
        return *this;
    }
};

int main(){
    human liyang;
    liyang.humanadd().humanadd().humanadd();
}