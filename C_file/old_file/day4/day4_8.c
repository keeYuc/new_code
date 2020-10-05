#include<stdio.h>
#include<time.h>
#include<windows.h>

void main(void){
// int a=0,b=0; 
//     while(1){
//         printf("%d:%d\n",a,b);
//         if(b==59){
//             a++,b=0,Sleep(500);
//         }else{
//             b++,Sleep(500);
//         }
//     }弟弟版 正确版本在下面


    for(int i=0;i<24;i++){
        for(int j=0;j<60;j++){
            for(int k=0;k<60;k++){
                printf("%02d:%02d:%02d",i,j,k);
                Sleep(100);
                system("cls");
            }
        }
    }
}