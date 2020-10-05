#include<stdio.h>
void main(void){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b){
        if(a>c){
            printf("di yi ge shi zui zhong de%d",a);
        }else{
            printf("di san ge zuida%d",c);
        }
    }else{
        if(b>c){
            printf("di er ge zuida%d",b);
        }else{
            printf("di san ge zui da%d",c);
        }
    }
}