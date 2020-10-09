#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->laoshi=new Teacher(this);
    this->xuesheng=new Student(this);
    //重载 信号和槽要用函数指针去接
//    void(Teacher::*han)(QString)=&Teacher::huangery;
    void(Teacher::*han_wucanshu)()=&Teacher::huangery;
//   void(Student::*trea)(QString)=&Student::treat;
   void(Student::*trea_wucanshu)()=&Student::treat;
   void(Student::*fuck1)()=&Student::fuck;
   //老师饿了就会 链接学生 一次
    connect(laoshi,han_wucanshu,xuesheng,trea_wucanshu);
//    connect(laoshi,han,xuesheng,trea);
    auto an=new QPushButton("下课",this);
    an->setFixedSize(200,200);
    // 按一次就 发送一次老师饿了
    int a=100;
    connect(an,&QPushButton::clicked,laoshi,han_wucanshu);
    //老师饿了就会 fuck学生 一次
    connect(laoshi,han_wucanshu,xuesheng,fuck1);
    auto bb1=new QPushButton("fuck",this);
    connect(bb1,&QPushButton::clicked,this,[=,&a](){
        bb1->move(a,0);
        a+=100;
    });
}

Widget::~Widget()
{
    delete ui;
}
void Widget::xiake(){
    //触发信号
    emit this->laoshi->huangery();
    emit this->laoshi->huangery("caonima--------");
}
