#include<stdio.h>
void main(void){
    int a;
    char str1[]="fuck",str2[]="1111you",str3[15];
    for(int i=0;i<sizeof(str1)/sizeof(str1[0])-1;i++){
        str3[i]=str1[i];
    }
    for(int i=sizeof(str1)/sizeof(str1[0])-1;i<sizeof(str1)/sizeof(str1[0])-1+sizeof(str2)/sizeof(str2[0]);i++){
        str3[i]=str2[i-sizeof(str1)/sizeof(str1[0])];
    }
    for(int i=0;i<sizeof(str3)/sizeof(str3[0])-1;i++){
        printf("%c",str3[i]);
    }
    // char str1[] = "abcdef";
	// char str2[] = "123456";
	// char dst[100];
	// int i = 0;
	// while (str1[i] != 0)
	// {
	// 	dst[i] = str1[i];
	// 	i++;
	// }
	// int j = 0;
	// while (str2[j] != 0)
	// {
	// 	dst[i + j] = str2[j];
	// 	j++;
	// }
	// dst[i + j] = 0; //字符串结束符
	// printf("dst = %s\n", dst);
}