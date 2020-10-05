#include<iostream>
using namespace std;
#include<exception>

void test()
{
    throw runtime_error("试试");
}




int main()
{

    try
    {
        test();
    } catch (exception& a)
    {
        cout << a.what() << endl;
    }


    return EXIT_SUCCESS;
}