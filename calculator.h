#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QWidget>
#include <QStack>
#include <QGridLayout>
#include <QLCDNumber>
#include <QPushButton>
#include <QRadioButton>

class QLCDNumber;
class QPushButton;

class Calculator :  public QWidget {
    Q_OBJECT
private:
    QRadioButton* m_rb1;
    QRadioButton* m_rb2;
    QLCDNumber* m_plcd;
    QGridLayout* m_Layout;
    QStack<QString> m_stk;
    QString m_strDisplay;
    public:
    Calculator(QWidget* pwgt = 0);
    QPushButton* createButton(const QString& str);
    void CommonCalculator();
    void EngineerCalculator();
    void calculateBinary();
    void calculateUnary();
public slots:
    void slotButtonClicked();
    void radioButton1Clicked();
    void radioButton2Clicked();
};

#endif // CALCULATOR_H
