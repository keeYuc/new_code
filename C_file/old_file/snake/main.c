#include"user.h"
void food_init(){
    food.x = rand() % WIDE;
    food.y = rand() % HIGH;//food xy

}
void snake_init(){
    {   snake.size = 1;
    snake.body[0].x = WIDE / 2;//蛇头
    snake.body[0].y = HIGH / 2;
    snake.body[1].x = WIDE / 2 - 1;//第一节蛇身体
    snake.body[1].y = HIGH / 2;
    }
}
//hua 
void set_xy(){
    coord.X = food.x, coord.Y = food.y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
    putchar('#');
    for(int i = 0; i < snake.size; i++){
        coord.X = snake.body[i].x, coord.Y = snake.body[i].y;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
        if(i == 0){
            putchar('@');
        } else{
            putchar('*');
        }i++; Sleep(300);
    }
    coord.X = 0, coord.Y = 0;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void main(){
    srand(time(NULL));
    snake_init();
    food_init();
    set_xy();
    system("pause");




    // printf("%d--------%d", food.x, food.y);
}