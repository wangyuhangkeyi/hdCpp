/********************************************************************************
** Form generated from reading UI file 'modify.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFY_H
#define UI_MODIFY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Modify
{
public:
    QGridLayout *gridLayout;
    QFrame *frame;
    QLabel *label_5;
    QLineEdit *lineEdit_3;
    QLabel *label_6;
    QLabel *label_7;
    QTextEdit *textEdit_3;
    QLabel *label_8;
    QTextEdit *textEdit_4;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit_4;
    QPushButton *pushButton_3;

    void setupUi(QDialog *Modify)
    {
        if (Modify->objectName().isEmpty())
            Modify->setObjectName(QStringLiteral("Modify"));
        Modify->resize(500, 300);
        gridLayout = new QGridLayout(Modify);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        frame = new QFrame(Modify);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setStyleSheet(QLatin1String("border-image: url();\n"
"border-image: url(:/new/pictures/pictures/B2.png);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_5 = new QLabel(frame);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(32, 28, 42, 16));
        label_5->setStyleSheet(QString::fromUtf8("border-image: url();\n"
"font: 10pt \"\351\273\221\344\275\223\";"));
        lineEdit_3 = new QLineEdit(frame);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(80, 28, 100, 20));
        lineEdit_3->setStyleSheet(QLatin1String("border-image: url();\n"
"background-color: qlineargradient(spread:pad, x1:1, y1:0.5, x2:0, y2:0.517, stop:0 rgba(171, 128, 83, 0), stop:1 rgba(255, 255, 255, 255));"));
        label_6 = new QLabel(frame);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(32, 54, 42, 16));
        label_6->setStyleSheet(QString::fromUtf8("border-image: url();\n"
"font: 10pt \"\351\273\221\344\275\223\";"));
        label_7 = new QLabel(frame);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(32, 80, 42, 16));
        label_7->setStyleSheet(QString::fromUtf8("border-image: url();\n"
"font: 10pt \"\351\273\221\344\275\223\";"));
        textEdit_3 = new QTextEdit(frame);
        textEdit_3->setObjectName(QStringLiteral("textEdit_3"));
        textEdit_3->setGeometry(QRect(80, 80, 371, 61));
        textEdit_3->setStyleSheet(QLatin1String("border-image: url();\n"
"background-color: qlineargradient(spread:pad, x1:1, y1:0.5, x2:0, y2:0.517, stop:0 rgba(171, 128, 83, 0), stop:1 rgba(255, 255, 255, 255));"));
        label_8 = new QLabel(frame);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(32, 150, 42, 16));
        label_8->setStyleSheet(QString::fromUtf8("border-image: url();\n"
"font: 10pt \"\351\273\221\344\275\223\";"));
        textEdit_4 = new QTextEdit(frame);
        textEdit_4->setObjectName(QStringLiteral("textEdit_4"));
        textEdit_4->setGeometry(QRect(80, 150, 371, 81));
        textEdit_4->setStyleSheet(QLatin1String("border-image: url();\n"
"background-color: qlineargradient(spread:pad, x1:1, y1:0.5, x2:0, y2:0.517, stop:0 rgba(171, 128, 83, 0), stop:1 rgba(255, 255, 255, 255));"));
        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(210, 240, 75, 23));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setStyleSheet(QString::fromUtf8("border-image: url();\n"
"font: 11pt \"\346\226\271\346\255\243\345\247\232\344\275\223\";\n"
"background-color: qlineargradient(spread:pad, x1:1, y1:0.5, x2:0, y2:0.517, stop:0 rgba(171, 128, 83, 0), stop:1 rgba(255, 255, 255, 255));"));
        lineEdit_4 = new QLineEdit(frame);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(80, 54, 280, 20));
        lineEdit_4->setStyleSheet(QLatin1String("border-image: url();\n"
"background-color: qlineargradient(spread:pad, x1:1, y1:0.5, x2:0, y2:0.517, stop:0 rgba(171, 128, 83, 0), stop:1 rgba(255, 255, 255, 255));"));
        pushButton_3 = new QPushButton(frame);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(430, 0, 40, 40));
        pushButton_3->setStyleSheet(QLatin1String("border-image: url();\n"
"border-image: url(:/new/pictures/pictures/T.png);\n"
""));

        gridLayout->addWidget(frame, 0, 0, 1, 1);

        QWidget::setTabOrder(lineEdit_3, lineEdit_4);
        QWidget::setTabOrder(lineEdit_4, textEdit_3);
        QWidget::setTabOrder(textEdit_3, textEdit_4);
        QWidget::setTabOrder(textEdit_4, pushButton_2);
        QWidget::setTabOrder(pushButton_2, pushButton_3);

        retranslateUi(Modify);
        QObject::connect(pushButton_3, SIGNAL(clicked()), Modify, SLOT(close()));

        QMetaObject::connectSlotsByName(Modify);
    } // setupUi

    void retranslateUi(QDialog *Modify)
    {
        Modify->setWindowTitle(QApplication::translate("Modify", "Dialog", Q_NULLPTR));
        label_5->setText(QApplication::translate("Modify", "\345\215\225\350\257\215\357\274\232", Q_NULLPTR));
        lineEdit_3->setText(QString());
        label_6->setText(QApplication::translate("Modify", "\350\257\215\346\200\247\357\274\232", Q_NULLPTR));
        label_7->setText(QApplication::translate("Modify", "\351\207\212\344\271\211\357\274\232", Q_NULLPTR));
        label_8->setText(QApplication::translate("Modify", "\344\276\213\345\217\245\357\274\232", Q_NULLPTR));
        textEdit_4->setHtml(QApplication::translate("Modify", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Modify", "\344\277\256\346\224\271", Q_NULLPTR));
        lineEdit_4->setText(QString());
        pushButton_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Modify: public Ui_Modify {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFY_H
