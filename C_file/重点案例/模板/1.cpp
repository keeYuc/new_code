#include<iostream>
template<typename T>
T sum(T a, T b){
    std::cout<<"通用模板调用"<<std::endl;
    return a + b;
    
}
//*重载 特殊类型固定调用

template<>int sum(int a,int b){
    std::cout<<"特定模板调用"<<std::endl;
    return a + b;
}


// template<typename T>
// void sort(T& t, int n){
//     for(int i = 0; i < n; ++i){
//         for(int j = 1; j < n; ++j){
//             if(t[j] > t[i]){
//                 int temp = t[i];
//                 t[i] = t[j];
//                 t[j] = temp;
//             }
//         }
//     }

// }
int main(){
    std::cout<<sum(10.2,20.2)<<std::endl;
    int a[] = {1, 3, 5, 8, 7,88,9,4,11,18};
    // sort(a,sizeof(a)/sizeof(a[0]));
    // for(int i=0;i<sizeof(a)/sizeof(a[0]);++i){
    //     std::cout << a[i] << std::endl;
    // }
        
    

    // std::cout<<typeid(b).name()<<std::endl;
    return EXIT_SUCCESS;
}