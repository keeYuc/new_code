#include<stdio.h>
int a=100;
void main(void){
    do{
        int g,s,b;
        g=a%10,s=(a/10)%10,b=a/100;
        if(g*g*g+s*s*s+b*b*b==a){
            printf("这是个水仙花数%d\n",a);
        }
        a++;
    }while(a<=999);


}