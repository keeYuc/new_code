#include<iostream>
template<class T>  //*手撸一套 双向动态循环链表
class myList
{
    friend myList;
public:
    myList(T it)
    {  //*有参构造
        auto ip_N = new myList;
        this->value = it;
        this->previous_where = ip_N;
    }
    ~myList()
    {
        if (next_where != NULL)
        {
            delete next_where;
        }
        if (previous_where != NULL)
        {
            delete previous_where;
        }
    }
    void push_Back(T it)
    {
        auto ip_N = new myList;
        next_where->next_where = ip_N;
        next_where->value = it;
        next_where->previous_where = this;
    }
    auto fornt(){
        return this->value;
    }
private:
    T value;
    myList* next_where;
    myList* previous_where;
};
int main(){
    
    myList<int>p1(10);
    p1.push_Back(20);
    std::cout << p1.fornt() << std::endl;
    return 0;
}