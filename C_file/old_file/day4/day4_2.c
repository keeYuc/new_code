#include<stdio.h>
void main(void){
    int a;
    putchar('\n');
    scanf("%s",&a);
    if(a<0){
        printf(" fushu");
    }else if(a=0){
        printf("0");
    }else{
        printf("zhengshu bei");
    }
    system("pause");
}