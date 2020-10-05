#include<stdio.h>
void main(void){
    char a[10];
    puts("fuck");
    fputs("fuck you",stdout);
    gets(&a);
    puts(a);
    fgets(&a,10,stdin);
    puts(a);
    printf("\n%d",strlen(a));
}