#include<stdio.h>
int a[]={1,8,5,7,55,69,0};
void main(void){
    int zongshu=sizeof(a)/sizeof(a[0]);
    for(int i=zongshu-1;i>=0;i--){
        //获取最后一位序号
        for(int j=0;j<i;j++){
            //从第一位到最后一位开始换    每次大循环完 从最后-1个重新开始换
            if(a[j]>a[j+1]){
                int temp;
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    printf("%d\n",a[i]);  
    }
}