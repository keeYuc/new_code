#include<iostream>
using namespace std;


struct lianbiao{
    int zhi;
    lianbiao* ip;
};

lianbiao note1 = {10,NULL};
lianbiao note2 = {20,NULL};
lianbiao note3 = {30,NULL};
lianbiao note4 = {40,NULL};

void test(){
    note1.ip = &note2;
    note2.ip = &note3;
    note3.ip = &note4;
    note4.ip = NULL;
    
    lianbiao* now_note = &note1;
    do{
        cout << now_note->zhi << endl;
        now_note = now_note->ip;   
    } while(now_note != NULL);  
}

int main(){

    test();
    
    
    return EXIT_SUCCESS;
}