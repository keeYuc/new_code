#include<iostream>
using namespace std;
template<typename T>
void mysort(T& arr, int max)
{
    for (int i = max - 1;i >= 0;--i)
    {
        for (int j = 0;j < i;++j)
        {
            if (arr[j] < arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

}
int main()
{
    int a[] = {10, 55, 65,1,5,8,7, 18, 560, 100, 9, 7,5,16,2,3,1,5,5,13,5,5,5,4,88,5,5};
    int max = sizeof(a) / sizeof(a[0]);
    mysort(a, max);
    for (int i = 0;i < max;++i)
    {
        cout << a[i] << endl;
    }

}