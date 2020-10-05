#include <stdio.h>

void swep(int* a, int* b){
    int temp = *b;
    *b = *a;
    *a = temp;
    char arr [] = "sadadadad";
}
void putarrcha(char* a){
    putchar(*(a + 1));
}
int fucyou(){
    return 1;
}
void fuyou1(){
    putchar('s');
}
void main(void){
    char arr [] = "fsssssuck you";
    int a = 10, b = 20;
    swep(&a, &b);
    printf("a is %d\nb is %d\n", a, b);
    putarrcha(arr);
    if(1){
        putchar('a');
    } else if(2){
        putchar('s');
    } else{
        putchar('s');
    }
    switch(a){
        case 1:
            putchar('s');
        case 2:
            putchar('s');
    }
}