#include<stdio.h>

#include<string.h>
struct anim{
    int name;
    int age;
    char  qq[100];
}shizi;


int main(void){
    shizi.age = 10;
    shizi.name = 22;
    
    
    struct anim* p = &shizi;
    printf("%d %d", p->age, p->name);
    // strcpy(shizi.qq, "sadad");

    // putchar(shizi.name);
    // putchar(shizi.age);
    // putchar(3);

    return 1;
}