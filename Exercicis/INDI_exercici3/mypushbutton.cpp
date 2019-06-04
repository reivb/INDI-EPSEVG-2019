#include "mypushbutton.h"
#include "MyGLWidget.h"

MyPushButton::MyPushButton(QWidget *parent) : QPushButton(parent)
{

}

void MyPushButton::casBase(){
    emit enviaCas(0);
}
void MyPushButton::casPatricio(){
    emit enviaCas(1);
}
void MyPushButton::casArbre(){
    emit enviaCas(2);
}
