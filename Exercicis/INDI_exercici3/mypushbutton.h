#ifndef MYPUSHBUTTON_H
#define MYPUSHBUTTON_H

#include <QPushButton>

class MyPushButton : public QPushButton
{
    Q_OBJECT
public:
    explicit MyPushButton(QWidget *parent = 0);

signals:
    void enviaCas(int);

public slots:
    void casBase();
    void casPatricio();
    void casArbre();

private:
    int cas;
};

#endif // MYPUSHBUTTON_H
