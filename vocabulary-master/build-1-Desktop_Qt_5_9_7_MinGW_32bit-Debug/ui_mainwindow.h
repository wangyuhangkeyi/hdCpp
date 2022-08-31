/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QFrame *frame;
    QLineEdit *lineEdit;
    QTableView *tableView;
    QLabel *label;
    QPushButton *pushButton_3;
    QPushButton *pushButton_5;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QPushButton *pushButton_6;
    QPushButton *pushButton_8;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QPushButton *pushButton_4;
    QPushButton *pushButton_7;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 500);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        QBrush brush1(QColor(255, 255, 127, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        MainWindow->setPalette(palette);
        MainWindow->setContextMenuPolicy(Qt::DefaultContextMenu);
        MainWindow->setAcceptDrops(false);
        MainWindow->setStyleSheet(QStringLiteral(""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setEnabled(true);
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setStyleSheet(QStringLiteral("border-image: url(:/new/pictures/pictures/B.png);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(90, 110, 271, 21));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy);
        lineEdit->setStyleSheet(QLatin1String("border-image: url();\n"
"background-color: qlineargradient(spread:pad, x1:1, y1:0.5, x2:0, y2:0.517, stop:0 rgba(171, 128, 83, 0), stop:1 rgba(255, 255, 255, 255));"));
        tableView = new QTableView(frame);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(60, 152, 681, 301));
        tableView->setStyleSheet(QLatin1String("border-image: url();\n"
"background-color: qlineargradient(spread:pad, x1:1, y1:0.5, x2:0, y2:0.517, stop:0 rgba(171, 128, 83, 0), stop:1 rgba(255, 255, 255, 255));"));
        tableView->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        tableView->setDragEnabled(false);
        tableView->setDefaultDropAction(Qt::IgnoreAction);
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(660, 110, 81, 16));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QLatin1String("border-image: url();\n"
""));
        pushButton_3 = new QPushButton(frame);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(740, 0, 41, 41));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setUnderline(false);
        font1.setWeight(50);
        font1.setStrikeOut(false);
        font1.setKerning(true);
        pushButton_3->setFont(font1);
        pushButton_3->setStyleSheet(QLatin1String("border-image: url();\n"
"border-image: url(:/new/pictures/pictures/T.png);\n"
""));
        pushButton_5 = new QPushButton(frame);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(690, 0, 41, 41));
        pushButton_5->setStyleSheet(QLatin1String("border-image: url();\n"
"border-image: url(:/new/pictures/pictures/Z.png);"));
        checkBox = new QCheckBox(frame);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(480, 110, 71, 15));
        checkBox->setStyleSheet(QString::fromUtf8("border-image: url();\n"
"font: 10pt \"\346\226\271\346\255\243\345\247\232\344\275\223\";"));
        checkBox->setChecked(true);
        checkBox->setAutoRepeat(false);
        checkBox->setAutoExclusive(false);
        checkBox_2 = new QCheckBox(frame);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setGeometry(QRect(570, 110, 71, 15));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\346\226\271\346\255\243\345\247\232\344\275\223"));
        font2.setPointSize(10);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(50);
        checkBox_2->setFont(font2);
        checkBox_2->setStyleSheet(QString::fromUtf8("border-image: url();\n"
"font: 10pt \"\346\226\271\346\255\243\345\247\232\344\275\223\";"));
        checkBox_2->setCheckable(true);
        checkBox_2->setChecked(true);
        pushButton_6 = new QPushButton(frame);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(370, 110, 31, 31));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy1);
        pushButton_6->setStyleSheet(QLatin1String("border-image: url();\n"
"border-image: url(:/new/pictures/pictures/S.png);"));
        pushButton_8 = new QPushButton(frame);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(420, 20, 50, 50));
        pushButton_8->setStyleSheet(QLatin1String("border-image: url();\n"
"border-image: url(:/new/pictures/pictures/M.png);"));
        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(280, 20, 50, 50));
        sizePolicy1.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy1);
        pushButton_2->setAcceptDrops(false);
        pushButton_2->setStyleSheet(QLatin1String("border-image: url();\n"
"border-image: url(:/new/pictures/pictures/D.png);"));
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(110, 20, 50, 50));
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);
        pushButton->setStyleSheet(QLatin1String("border-image: url();\n"
"border-image: url(:new/pictures/pictures/A.png);"));
        pushButton_4 = new QPushButton(frame);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(570, 20, 50, 50));
        sizePolicy1.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy1);
        pushButton_4->setStyleSheet(QLatin1String("border-image: url();\n"
"border-image: url(:/new/pictures/pictures/U.png);"));
        pushButton_7 = new QPushButton(frame);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(420, 110, 41, 31));

        gridLayout->addWidget(frame, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        QWidget::setTabOrder(pushButton, pushButton_2);
        QWidget::setTabOrder(pushButton_2, pushButton_8);
        QWidget::setTabOrder(pushButton_8, pushButton_4);
        QWidget::setTabOrder(pushButton_4, lineEdit);
        QWidget::setTabOrder(lineEdit, pushButton_6);
        QWidget::setTabOrder(pushButton_6, checkBox);
        QWidget::setTabOrder(checkBox, checkBox_2);
        QWidget::setTabOrder(checkBox_2, tableView);
        QWidget::setTabOrder(tableView, pushButton_5);
        QWidget::setTabOrder(pushButton_5, pushButton_3);

        retranslateUi(MainWindow);
        QObject::connect(pushButton_3, SIGNAL(clicked()), MainWindow, SLOT(close()));
        QObject::connect(pushButton_5, SIGNAL(clicked()), MainWindow, SLOT(showMinimized()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\344\274\230\344\274\230\345\215\225\350\257\215\346\234\254", Q_NULLPTR));
        lineEdit->setText(QString());
        label->setText(QApplication::translate("MainWindow", "\345\215\225\350\257\215\351\207\217\357\274\232", Q_NULLPTR));
        pushButton_3->setText(QString());
        pushButton_5->setText(QString());
        checkBox->setText(QApplication::translate("MainWindow", "\346\230\276\347\244\272\345\215\225\350\257\215", Q_NULLPTR));
        checkBox_2->setText(QApplication::translate("MainWindow", "\346\230\276\347\244\272\351\207\212\344\271\211", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        pushButton_6->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        pushButton_6->setText(QString());
#ifndef QT_NO_SHORTCUT
        pushButton_6->setShortcut(QApplication::translate("MainWindow", "Ctrl+F", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_TOOLTIP
        pushButton_8->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        pushButton_8->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        pushButton_8->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        pushButton_8->setAccessibleDescription(QString());
#endif // QT_NO_ACCESSIBILITY
        pushButton_8->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        pushButton_2->setText(QString());
#ifndef QT_NO_SHORTCUT
        pushButton_2->setShortcut(QApplication::translate("MainWindow", "Del", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_TOOLTIP
        pushButton->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        pushButton->setText(QString());
#ifndef QT_NO_SHORTCUT
        pushButton->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_TOOLTIP
        pushButton_4->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        pushButton_4->setText(QString());
#ifndef QT_NO_SHORTCUT
        pushButton_4->setShortcut(QApplication::translate("MainWindow", "F5", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        pushButton_7->setText(QApplication::translate("MainWindow", "\344\270\255", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
