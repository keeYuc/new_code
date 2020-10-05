#include<iostream>
using namespace std;



void mysweap(int&a,int&b){
    int temp = a;
    a = b;
    b = temp;

}
int main(){
    int a = 10, b = 20;
    mysweap(a, b);
    cout <<a<<"-----"<<b<< endl;
    
    return EXIT_SUCCESS;
}