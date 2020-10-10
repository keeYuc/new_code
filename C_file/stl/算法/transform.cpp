#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;
class m1
{
public:
    int& operator()(int&a){
        return a;
    }
};
void myPrint(int& a){
    cout << a << endl;
}
bool comper(int a){
    return a > 5;
}
int main(){
    vector<int>p1;
    vector<int>p2;
    for(int i=0;i<10;++i){
        p1.push_back(i);
    }
    p2.resize(p1.size());
    transform(p1.begin(), p1.end(), p2.begin(),m1());
    p2.push_back(9);
    // for_each(p1.begin(), p1.end(), myPrint);
    // auto a = find(p2.begin(), p2.end(), 50);
    auto a = find_if(p2.begin(), p2.end(),comper);
    if(a!=p2.end()){
        cout << "zdl----" << *a << endl;
    }else{
        cout << "......................" << endl;
    }
        auto a1 = find_if(p2.begin(), p2.end(),comper);
    if(a1!=p2.end()){
        cout << "zdl----" << *a1 << endl;
    }else{
        cout << "......................" << endl;
    }
    
    return 0;
}
