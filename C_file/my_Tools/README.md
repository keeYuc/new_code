# 一个基于string的 分割函数
## 只需要包含头文件 string_Split.hpp 即可使用
### p1=string_Split(字符串,分割符); 分割符例如:
    #include"string_Split.hpp"  //
    #include<iostream>
    int main(){
        vector<string> p1;   //实例
        p1=string_Split("李小龙:100:成龙:66:霍元甲:100",":");
        vector<string>::iterator start = p1.begin();
        while(start!=p1.end()){                 //*遍历所有元素
            
            cout << *start << endl;
            ++start;
        }
        return EXIT_SUCCESS;
    }
