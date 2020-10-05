#include"user.h"


void main(){
    int a;
    
    system("pause");
    while(1){
        while(_kbhit()){
            a = getch();
            putchar(a);
            putchar('\n');
            
        }
    }
}
