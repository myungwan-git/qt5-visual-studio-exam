#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

// Include button header.
#include <QPushButton>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    QPushButton *m_button;
    QString     m_str;


private slots:
    // Event Click the button.
    void slot_btn();
};


#endif // WIDGET_H
