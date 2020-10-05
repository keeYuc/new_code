#include<iostream>

class cpu{
public:
    virtual void using_Cpu() = 0;
};
class display{
public:
    virtual void using_Display() = 0;
};
class gpu{
public:
    virtual void using_Gpu() = 0;
};
class computer{
public:
    computer(cpu* cpu, display* display, gpu* gpu){
        this->m_Cpu = cpu;
        this->m_Disllay = display;
        this->m_Gpu = gpu;
        std::cout << "电脑组装完成" << std::endl;
    }
    void do_Work(){
        this->m_Cpu->using_Cpu();
        this->m_Disllay->using_Display();
        this->m_Gpu->using_Gpu();
    }
    ~computer(){
        if(m_Cpu!=nullptr){
            delete m_Cpu;
            m_Cpu = nullptr;
        }
        if(m_Gpu!=nullptr){
            delete m_Gpu;
            m_Gpu = nullptr;
        }
        if(m_Disllay!=nullptr){
            delete m_Disllay;
            m_Disllay = nullptr;
        }
        std::cout << "电脑构析" << std::endl;
    }
    cpu* m_Cpu;
    display* m_Disllay;
    gpu* m_Gpu;

};

class inter_Cpu :public cpu{
    void using_Cpu(){
        std::cout << "inter cpu 开始计算" << std::endl;
    }
};
class amd_Cpu :public cpu{
    void using_Cpu(){
        std::cout << "amd cpu 开始计算" << std::endl;
    }
};
class inter_Display :public display{
    void using_Display(){
        std::cout << "inter display 开始显示" << std::endl;
    }
};
class sanxing_Display :public display{
    void using_Display(){
        std::cout << "sanxing display 开始显示" << std::endl;
    }
};
class inter_Gpu :public gpu{
    void using_Gpu(){
        std::cout << "inter gpu 开始打游戏" << std::endl;
    }
};
class amd_Gpu :public gpu{
    void using_Gpu(){
        std::cout << "amd gpu 开始打游戏" << std::endl;
    }
};

void test(){
    computer p1((cpu*) new amd_Cpu, (display*) new inter_Display, (gpu*)new amd_Gpu);
    p1.do_Work();
}
int main(){
    test();




    return EXIT_SUCCESS;
}
