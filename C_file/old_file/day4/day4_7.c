#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main(void){
    // for(i=1;i<=10;i++){
    //     printf("%d\n",i);
    // }基础for循环
srand(time(NULL));
int i=rand()%100;
while(1){
    int a;
    printf("请输入数字:");
    scanf("%d",&a);
    putchar('\n');
    if(a==i){
        printf("猜对了");
        break;
    }else if(a>i){
        printf("猜大了\n");
    }else{
        printf("猜小了\n");
    }
}

system("pause");

}