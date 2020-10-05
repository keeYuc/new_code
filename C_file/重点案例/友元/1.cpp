#include<iostream>
using namespace std;
#include<string>
class iphone{
    friend class human;
    // friend void human::vist2();
    // friend void human::vist2();
    

public:
    string laji;
    iphone(){
        xinghao = "iphone10x";
        laji = "fuck you ";
    }
private:
    string xinghao;
};



class human{
public:
    // human(){
    //     this->human_iphone;
    // }
    void vist(){

        cout << "正在访问" << this->human_iphone.laji << endl;
    }
    void vist2(){
        this->human_iphone.xinghao;

    }
    iphone human_iphone;
};

human lihan;

void test(){

};
int main(){


    lihan.vist2();



    return EXIT_SUCCESS;
}