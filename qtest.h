#ifndef QTEST_H
#define QTEST_H

#include <QMainWindow>
#include <QPushButton>

QT_BEGIN_NAMESPACE
namespace Ui { class QTest; }
QT_END_NAMESPACE

class QTest : public QMainWindow
{
    Q_OBJECT

public:
    QTest(QWidget *parent = nullptr);
    ~QTest();
    void setButtons();
    void clickAct(int,int);

private:
    Ui::QTest *ui;
    QPushButton *btn[20][20];
};
#endif // QTEST_H
