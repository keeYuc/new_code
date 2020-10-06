#include"jiexiqi.h"
user_Config::user_Config(int id, string name, int attack)
{
    this->id = id; this->name = name; this->attack = attack;
}
void read_File(ifstream& p1)
{
    if (!p1.is_open())
    {
        cout << "文件打开失败" << endl;
        return;
    }
    string temp;
    while (p1 >> temp)
    {
        int id;string name;int attack;
        for (int i = 0;(int) temp.find(":", i) != -1;i = (int) temp.find(":", i) + 1)
        {
            id = temp.substr(0, )

        }
        cout << temp << endl;
    }
    p1.close();
}