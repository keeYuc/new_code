#ifndef _USER_H__
#define _USER_H__

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include<conio.h>
#include<windows.h>
#define WIDE 40
#define HIGH 30
int score = 0;

int score;
COORD coord;
struct BODY{
    int x;
    int y;
}body;
struct SNAKE{
    struct BODY body[WIDE * HIGH];//定一条蛇的本质就是body的每一节的坐标数组
    int size;
}snake;
struct FOOD{
    int x;
    int y;
}food;
#endif