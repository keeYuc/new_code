#include<stdio.h>





void main(void){
    int a[3][3];
    int a1,a2;
    a1=sizeof(a)/sizeof(a[0]);
    a2=sizeof(a[0])/sizeof(a[0][0]);
    for(int i=0;i<a1;i++){
        for(int j=0;j<a2;j++){
            scanf("%d ",&a[i][j]);      
        }
        
    }
    for(int i=0;i<a1;i++){
        int sum=0,sum1=0;
        for(int j=0;j<a2;j++){
            sum+=a[i][j];
            sum1+=a[j][i];
        
        }
        printf("第%d个学生的成绩是%d",i,sum); 
        putchar('\n');
        printf("第%d排的成绩是%d",i,sum1); 
        putchar('\n');
    }

}