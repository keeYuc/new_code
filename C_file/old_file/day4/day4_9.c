#include<stdio.h>



void main(void){
int a[]={1,2,3,4,5,6,7};
    for(int i=0;i<sizeof(a)/sizeof(a[0]);i++){
        printf("%d ",a[i]);
    }
    for(int i=0,j=sizeof(a)/sizeof(a[0])-1;i<sizeof(a)/sizeof(a[0]);i++,j--){
        ;
        int temp;
        if (i>=j){
            break;
        }else{
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    putchar('\n');
    for(int i=0;i<sizeof(a)/sizeof(a[0]);i++){
        printf("%d ",a[i]);
    }
}