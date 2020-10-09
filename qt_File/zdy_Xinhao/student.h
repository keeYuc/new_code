#ifndef STUDENT_H
#define STUDENT_H

#include <QObject>

class Student : public QObject
{
    Q_OBJECT
public:
    explicit Student(QObject *parent = nullptr);
    //需要声明需要实现
    void treat();
    void treat(QString abc);
    void fuck();

signals:

};

#endif // STUDENT_H
