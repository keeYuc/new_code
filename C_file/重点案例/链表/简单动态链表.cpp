#include<iostream>
using namespace std;

struct lianbiao{
    int zhi;
    lianbiao* ip;
};
lianbiao* note1=new lianbiao;
lianbiao* note2=new lianbiao;
lianbiao* note3=new lianbiao;
lianbiao* note4=new lianbiao;
void test(){
    note1->zhi = 10, note1->ip = note2;
    note2->zhi = 20, note2->ip = note3;
    note3->zhi = 30, note3->ip = note4;
    note4->zhi = 40, note4->ip = NULL;
    
    lianbiao* now_note = note1;
    do{
        cout << now_note->zhi << endl;
        now_note = now_note->ip;   
    } while(now_note != NULL); 
    delete note1, note2, note3, note4;
}
//注释颜色还可以啊
int main(){

    test();
    
    
    return EXIT_SUCCESS;
}