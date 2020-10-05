#include<iostream>
#include<string.h>
using namespace std;
class Nbstring{
public:
    Nbstring(const char* temp){
        original_string = (char*)malloc(strlen(temp)+1);
        strcpy(original_string, temp);
        size = strlen(temp);
    }
    Nbstring(const Nbstring& temp_str){
        original_string = (char*)malloc(strlen(temp_str.original_string)+1);
        strcpy(original_string, temp_str.original_string);
        size = temp_str.size;
    }
    ~Nbstring(){
        if (original_string!=NULL){
            free(original_string);
            original_string = NULL;
        }
    }
    void show_size(){
        cout << size << endl;
    }
    void show(){
        puts(original_string);
    }
    //*字符串拼接重载+号
    Nbstring& operator+(const Nbstring& str){
        char* temp = (char*)malloc(size + 1);
        strcpy(temp,original_string);
        if (original_string!=NULL){
            free(original_string);
            original_string = NULL;
        }
        original_string = (char*)malloc(strlen(str.original_string) + size + 1);
        strcpy(original_string, temp);
        strcat(original_string, str.original_string);
        size = strlen(temp) + strlen(str.original_string);
        return *this;
    }
    //*字符串[]号重载
    char& operator[](int i){
        return original_string[i];
    }
    private:
    char* original_string;
    int size;
};
int main(){
    Nbstring a2 = ("s湖人总冠军123");
    cout << a2[0] << endl;
    cout << a2[1] << endl;
    system("pause");

    return EXIT_SUCCESS;
}