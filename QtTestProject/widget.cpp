#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    InitGView();
}

Widget::~Widget()
{
    delete ui;
}

void Widget::InitGView()
{
    QGraphicsScene *nScene = new QGraphicsScene(this);
    ui->gVw->setScene(nScene);

    ui->gVw->setWindowTitle("test");
    ui->gVw->resize(200, 200);

    nScene->addLine(0, 50, 100, 150);
}
