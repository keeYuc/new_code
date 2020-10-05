#include<stdio.h>


int ss(char* p1, char* p2){
    int i = 0;
    while(1){
        printf("%c-----%c---%d\n", p1[i], p2[i], i);
        if(p1[i] == '\0' && p2[i] == '\0'){
            return 0;
        } else{
            if((int)p1[i] > (int)p2[i]){
                return 1;
            } else{
                if((int)p1[i] == (int)p2[i]){
                    goto kaishi;
                } else{
                    return -1;
                }

            }
        }
        kaishi:i++;
    }

}


void main(void){
    char* p = "asdsdsdasfgggad";;
    char* p1 = "aaad";
    char* p3 = "aefg";
    int a;
    printf("%d\n", ss(p, p3));
    // printf("%d\n%d", (int)p[0], (int)p1[0]);

}