#ifndef TEACHER_H
#define TEACHER_H

#include <QObject>

class Teacher : public QObject
{
    Q_OBJECT
public:
    explicit Teacher(QObject *parent = nullptr);

signals:
    //只需要声明 返回值必须为void
    void huangery();
    void huangery(QString abc);
};

#endif // TEACHER_H
