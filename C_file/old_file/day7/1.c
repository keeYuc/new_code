#include<stdio.h>
#include<stdlib.h>




//内存爆炸术
void main(){
    int* p = (int*)malloc(sizeof(int) * 1024*1024*1024);
    int a = 0;
    while(1){
        p[a] = a;
        a++;
    }
    system("pause");
    putchar('0');
}