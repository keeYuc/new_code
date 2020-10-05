#include<stdio.h>

int a=1;
void main(void){

    while(a<=100){
        
        if(a==7||a%7==0||a/10==7){
            printf("%d\n",a);
            
        }
        ++a;
    }
    do{
                printf("fuck you");
                }while(a<=50);
}