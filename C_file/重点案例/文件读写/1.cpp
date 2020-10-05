#include<iostream>
#include<fstream>
using namespace std;







int main()
{
    // ofstream abc("./try.txt", ios::app);
    // if (!abc.is_open())
    // {
    //     cout << "打开失败" << endl;
    //     return 1;
    // } else
    // {
    //     abc << "草拟吗\n";
    //     abc.close();
    // }
    ifstream read_File("./try.txt", ios::in);
    char buf[1024];
    while(read_File.getline(buf,sizeof(buf))){
        cout << buf << endl;
    }
    



    return EXIT_SUCCESS;
}