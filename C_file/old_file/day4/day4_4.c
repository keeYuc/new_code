#include<stdio.h>
void main(void){
    int a;
    scanf("%d",&a);
    switch(a){
        case 0:
        printf("0");
        break;// 防止case穿透
        case 1:
        printf("1");
        break;
        default:
        printf("fuck you");
        break;
    }

}