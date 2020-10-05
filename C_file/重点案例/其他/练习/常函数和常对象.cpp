#include<iostream>
#include<string>
using namespace std;
class car{
public:
    car(string s="宝马",int i=10):name(s),price(i){}
    void get_name_price()const{

        cout << name << "------" << price << endl;
    }
    string name;
    int  price;

};
int main(){
    car baoma;
    baoma.get_name_price();





    return EXIT_SUCCESS;
}