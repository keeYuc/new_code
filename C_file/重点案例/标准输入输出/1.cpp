#include<iostream>
using namespace std;


void yanzheng()
{
    int a;
    while(true){
        cout<<"请输入数字0-9"<<endl;
        cin >> a;
        cout << a << endl;
        cin.clear();cin.sync();
        // cout << cin.fail() << endl;;
        if(a>0&&a<=9){
            break;
        }
        
        
        
    }

    cout << "对了" << endl;


}





int main()
{
    // char ch[1024];

    // // cin.ignore(2);asd
    // // cin.get(ch, 1024);
    // cin.get(ch,1024);

    // char ch = cin.get();
    // cin.putback(ch);
    // char buf[1024];
    // cin.get(buf,1024);
    // cout << buf << endl;

    // cout << ch << endl;
    yanzheng();

    system("pause");
    return EXIT_SUCCESS;
}