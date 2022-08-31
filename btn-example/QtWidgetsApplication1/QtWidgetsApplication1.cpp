#include "QtWidgetsApplication1.h"
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    setFixedSize(500,500);

    
    m_str = QString("Button");
    
    // Define button text
    m_button = new QPushButton(m_str,this);
    
    // Coordinate X, Y and size
    m_button->setGeometry(10,10, 100,30);


    // SIGNAL과 SLOT을 연결해준다.
    // m_button:SIGNAL의 Object.
    // prossed:SIGNAL의 종류.
    // this:SIGNAL을 받을 object
    // SLOT:SIGNAL이 호출 되었을때 받을 함수
    connect(m_button, SIGNAL(pressed()), this, SLOT(slot_btn()));
}

Widget::~Widget()
{
}


void Widget::slot_btn() {
    qDebug(" >> Button Clicked");
}
