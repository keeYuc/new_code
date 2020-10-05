#include<iostream>




int test(){
    
    throw 1;
    return 0;
}
int main(){
    try{test();} 
    catch(int){
        std::cout << "fuck you" << std::endl;
    }
    return EXIT_SUCCESS;
}