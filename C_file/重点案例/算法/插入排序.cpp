#include<iostream>
#include<vector>
using namespace std;



// template<typename T>
// void test(vector<T>& thisVector)
// {
//     int temp,j;
//     for (int i = 1;i < thisVector.size();++i)
//     {
//         if (thisVector[i-1]>thisVector[i])
//         {
//             temp =thisVector[i];
//         }

//         for (j = i-1;j >=0&&temp<thisVector[j];--j)
//         {
//                 thisVector[j+1] = thisVector[j];
//         }thisVector[j+1] = temp;
//     }
// }
void test(vector<int>* v)
{
    int temp, j;
    for (int i = 1;i < v->size();++i)
    {
        if ((*v)[i-1] > (*v)[i])
        {
            temp = (*v)[i] ;
        }
        for (j = i - 1;j >= 0 && temp < (*v)[j];--j)
        {
            (*v)[j + 1] = (*v)[j];
        }(*v)[j + 1] = temp;
    }



}
int main()
{
    vector<int>p1;
    p1.push_back(115);
    p1.push_back(1);
    p1.push_back(19);
    p1.push_back(110);
    p1.push_back(7);
    p1.push_back(70);
    test(&p1);

    auto   a = p1.begin();
    auto b = p1.end();
    while (a != b)
    {
        cout << *a << endl;
        a++;
    }



    return 0;
}