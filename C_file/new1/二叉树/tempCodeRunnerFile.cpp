#include<iostream>
#include<stack>







int main()
{


    std::stack<int> a;
    // std::cout << a.empty() << std::endl;
    std::cout << a.size() << std::endl;
    a.push(1);
    // std::cout << a.empty() << std::endl;
    std::cout << a.size() << std::endl;
    a.pop();
    // std::cout << a.empty() << std::endl;
    std::cout << a.size() << std::endl;


}