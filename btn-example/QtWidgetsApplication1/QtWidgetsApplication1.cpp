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


    // SIGNAL�� SLOT�� �������ش�.
    // m_button:SIGNAL�� Object.
    // prossed:SIGNAL�� ����.
    // this:SIGNAL�� ���� object
    // SLOT:SIGNAL�� ȣ�� �Ǿ����� ���� �Լ�
    connect(m_button, SIGNAL(pressed()), this, SLOT(slot_btn()));
}

Widget::~Widget()
{
}


void Widget::slot_btn() {
    qDebug(" >> Button Clicked");
}
