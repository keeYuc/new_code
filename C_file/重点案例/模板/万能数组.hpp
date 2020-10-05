#include<iostream>
using namespace std;
template<class T>
class myList
{
public:
    myList()
    {
        cout << "开始默认构造" << endl;
        this->list_Cap = 10;
        this->list_Size = 0;
        this->m_One = new T[10];
    }
    ~myList()
    {
        cout << "开始析构" << endl;
        if (m_One != NULL)
        {
            delete m_One;
            m_One = NULL;
        }
    }
    T pop()
    {
        T temp = m_One[list_Size];
        m_One[list_Size] = NULL;
        --list_Size;
        return temp;
    }
    void append(T yuansu)
    {
        if (list_Size + 1 < list_Cap)
        {
            this->m_One[list_Size + 1] = yuansu;
            ++list_Size;
        } else//* 直接两倍  100以外就只扩1.5倍
        {
            T* temp = new T[list_Cap * 2];
            for (int i = 0;i < list_Size;++i)
            {
                temp[i] = m_One[i];
            }
            temp[list_Size + 1] = yuansu;
            delete[]m_One;
            m_One = temp;
            ++list_Size;
            list_Cap *= 2;
        }

    }
    int show_Size()
    {
        return this->list_Size;
    }
    int show_Cap()
    {
        return this->list_Cap;
    }
private:
    T* m_One;//*底层数组指针
    int list_Size;//*个数
    int list_Cap;//*容量
};
