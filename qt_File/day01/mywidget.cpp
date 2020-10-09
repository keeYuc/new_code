#include "mywidget.h"
#include "ui_mywidget.h"
#include<QPushButton>

myWidget::myWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::myWidget)
{
    ui->setupUi(this);
    QPushButton * btn2 = new QPushButton("孙悟空",this);
    btn2->resize(1024,360);
    //信号发送者 发送的信号 接收者 处理的槽函数
    connect(btn2,&QPushButton::clicked,this,&myWidget::close);
}

myWidget::~myWidget()
{
    delete ui;
}

