/********************************************************************************
** Form generated from reading UI file 'attribute.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ATTRIBUTE_H
#define UI_ATTRIBUTE_H

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

class Ui_Attribute
{
public:
    QGridLayout *gridLayout;
    QFrame *frame;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLabel *label_3;
    QTextEdit *textEdit;
    QLabel *label_4;
    QTextEdit *textEdit_2;
    QPushButton *pushButton;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_3;

    void setupUi(QDialog *Attribute)
    {
        if (Attribute->objectName().isEmpty())
            Attribute->setObjectName(QStringLiteral("Attribute"));
        Attribute->resize(500, 300);
        gridLayout = new QGridLayout(Attribute);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        frame = new QFrame(Attribute);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setStyleSheet(QLatin1String("border-image: url();\n"
"border-image: url(:/new/pictures/pictures/B2.png);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(32, 28, 42, 16));
        label->setStyleSheet(QString::fromUtf8("border-image: url();\n"
"font: 10pt \"\351\273\221\344\275\223\";"));
        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(80, 28, 100, 20));
        lineEdit->setStyleSheet(QLatin1String("border-image: url();\n"
"background-color: qlineargradient(spread:pad, x1:1, y1:0.5, x2:0, y2:0.517, stop:0 rgba(171, 128, 83, 0), stop:1 rgba(255, 255, 255, 255));"));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(32, 54, 42, 16));
        label_2->setStyleSheet(QString::fromUtf8("border-image: url();\n"
"font: 10pt \"\351\273\221\344\275\223\";"));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(32, 80, 42, 16));
        label_3->setStyleSheet(QString::fromUtf8("border-image: url();\n"
"font: 10pt \"\351\273\221\344\275\223\";"));
        textEdit = new QTextEdit(frame);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(80, 80, 371, 61));
        textEdit->setStyleSheet(QLatin1String("border-image: url();\n"
"background-color: qlineargradient(spread:pad, x1:1, y1:0.5, x2:0, y2:0.517, stop:0 rgba(171, 128, 83, 0), stop:1 rgba(255, 255, 255, 255));"));
        label_4 = new QLabel(frame);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(32, 148, 42, 16));
        label_4->setStyleSheet(QString::fromUtf8("border-image: url();\n"
"font: 10pt \"\351\273\221\344\275\223\";"));
        textEdit_2 = new QTextEdit(frame);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setGeometry(QRect(80, 148, 371, 81));
        textEdit_2->setStyleSheet(QLatin1String("border-image: url();\n"
"background-color: qlineargradient(spread:pad, x1:1, y1:0.5, x2:0, y2:0.517, stop:0 rgba(171, 128, 83, 0), stop:1 rgba(255, 255, 255, 255));"));
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(210, 240, 75, 23));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setStyleSheet(QString::fromUtf8("border-image: url();\n"
"font: 11pt \"\346\226\271\346\255\243\345\247\232\344\275\223\";\n"
"background-color: qlineargradient(spread:pad, x1:1, y1:0.5, x2:0, y2:0.517, stop:0 rgba(171, 128, 83, 0), stop:1 rgba(255, 255, 255, 255));"));
        lineEdit_2 = new QLineEdit(frame);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(80, 54, 280, 20));
        lineEdit_2->setStyleSheet(QLatin1String("border-image: url();\n"
"background-color: qlineargradient(spread:pad, x1:1, y1:0.5, x2:0, y2:0.517, stop:0 rgba(171, 128, 83, 0), stop:1 rgba(255, 255, 255, 255));"));
        pushButton_3 = new QPushButton(frame);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(430, 0, 40, 40));
        pushButton_3->setStyleSheet(QLatin1String("border-image: url();\n"
"border-image: url(:/new/pictures/pictures/T.png);\n"
""));

        gridLayout->addWidget(frame, 0, 0, 1, 1);

        QWidget::setTabOrder(lineEdit, lineEdit_2);
        QWidget::setTabOrder(lineEdit_2, textEdit);
        QWidget::setTabOrder(textEdit, textEdit_2);
        QWidget::setTabOrder(textEdit_2, pushButton);

        retranslateUi(Attribute);
        QObject::connect(pushButton_3, SIGNAL(clicked()), Attribute, SLOT(close()));

        QMetaObject::connectSlotsByName(Attribute);
    } // setupUi

    void retranslateUi(QDialog *Attribute)
    {
        Attribute->setWindowTitle(QApplication::translate("Attribute", "\345\215\225\350\257\215\345\261\236\346\200\247", Q_NULLPTR));
        label->setText(QApplication::translate("Attribute", "\345\215\225\350\257\215\357\274\232", Q_NULLPTR));
        lineEdit->setText(QString());
        label_2->setText(QApplication::translate("Attribute", "\350\257\215\346\200\247\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("Attribute", "\351\207\212\344\271\211\357\274\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("Attribute", "\344\276\213\345\217\245\357\274\232", Q_NULLPTR));
        textEdit_2->setHtml(QApplication::translate("Attribute", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Attribute", "\344\277\235\345\255\230", Q_NULLPTR));
        lineEdit_2->setText(QString());
        pushButton_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Attribute: public Ui_Attribute {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ATTRIBUTE_H
