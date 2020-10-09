#include<iostream>


void print(void *i)
{
    std::cout << *(int*)i << std::endl;
}
void test(void* i, void (*func)(void *))
{
    func(i);
}

int main()
{
    int a = 3;
    test(&a, print);
    return 0;
}