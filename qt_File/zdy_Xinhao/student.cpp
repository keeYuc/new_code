#include "student.h"
#include<QDebug>
Student::Student(QObject *parent) : QObject(parent)
{

}
void Student::treat(){
    qDebug()<<"生效一次";
}
void Student::treat(QString abc){
    qDebug()<<"生效一次"<<abc.toUtf8().data();
}
void Student::fuck(){

    qDebug()<<"fuck一次";
}
