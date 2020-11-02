#include "qtest.h"
#include "ui_qtest.h"

QTest::QTest(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::QTest)
{
    ui->setupUi(this);
}

QTest::~QTest()
{
    delete ui;
}

void QTest::setButtons(){
    this->resize(500,500);
    for(int i = 0;i < 20;i ++){
        for(int j = 0;j < 20;j ++){
            btn[i][j] = new QPushButton(this);
            btn[i][j]->resize(25,25);
            btn[i][j]->move(25*i+1,25*j+1);
            btn[i][j]->show();
            connect(btn[i][j],&QPushButton::pressed,[=](){this->clickAct(i,j);});
        }
    }
}

void QTest::clickAct(int bi,int bj){
    for(int i = 0;i < 20;i ++){
        for(int j = 0;j < 20;j ++){
            if(i == bi && j == bj)continue;
            btn[i][j]->setAutoFillBackground(true);
            btn[i][j]->setFlat(true);
            QPalette palette = btn[i][j]->palette();
            palette.setColor(QPalette::Button,QColor(255,255,0));
            btn[i][j]->setPalette(palette);
            btn[i][j]->setEnabled(false);
        }
    }
}
