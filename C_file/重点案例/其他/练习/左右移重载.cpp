#include<iostream>
#include<string>
using namespace std;



class mycar{
public:
    mycar(string a="宝马r8",int b=1000000):name(a),price(b){}
    string name;
    int price;

};
ostream& operator<<(ostream &cout,mycar& a){
    // cout << "name=" << a.name;
    cout << "name="<<a.name<<"price="<<a.price;
    return cout;
    
}
istream& operator>>(istream &cin,mycar& a){
    cin >> a.price>>a.name;


        return cin;
}
int main(){
    mycar baoma;
    int a;
    cin >> a;
    cout << a << endl;
    // mycar baoma;
    // cout << baoma <<endl;
    cin >>baoma;
    cout << baoma << endl;

    return EXIT_SUCCESS;
}