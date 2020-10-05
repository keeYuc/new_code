#include<iostream>
template<class T>
class houzi{
    // friend void trytry(){
    //     // std::cout << what << std::endl;
    //     std::cout << "试试" << std::endl;
    // 
    
    T what;
};
template<class T1,class T2>
class fuck :public houzi<T2>{
    T1 sb;
};




void do_Work(houzi <int>&p){
    std::cout << p.what << std::endl;
    
    
}
int main(){
    fuck <int,int>p2;
    houzi <int>p1;
    do_Work(p1);
    
    
    return EXIT_SUCCESS;
}