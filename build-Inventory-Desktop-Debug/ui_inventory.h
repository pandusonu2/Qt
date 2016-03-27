/********************************************************************************
** Form generated from reading UI file 'inventory.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INVENTORY_H
#define UI_INVENTORY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Inventory
{
public:
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *addName;
    QLineEdit *addValue;
    QPushButton *addButton;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *consumeName;
    QLineEdit *consumeValue;
    QPushButton *consumeButton;
    QPushButton *displayButton;

    void setupUi(QWidget *Inventory)
    {
        if (Inventory->objectName().isEmpty())
            Inventory->setObjectName(QStringLiteral("Inventory"));
        Inventory->resize(576, 320);
        verticalLayout = new QVBoxLayout(Inventory);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        textEdit = new QTextEdit(Inventory);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        verticalLayout->addWidget(textEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(Inventory);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        addName = new QLineEdit(Inventory);
        addName->setObjectName(QStringLiteral("addName"));

        horizontalLayout->addWidget(addName);

        addValue = new QLineEdit(Inventory);
        addValue->setObjectName(QStringLiteral("addValue"));

        horizontalLayout->addWidget(addValue);

        addButton = new QPushButton(Inventory);
        addButton->setObjectName(QStringLiteral("addButton"));

        horizontalLayout->addWidget(addButton);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(Inventory);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        consumeName = new QLineEdit(Inventory);
        consumeName->setObjectName(QStringLiteral("consumeName"));

        horizontalLayout_2->addWidget(consumeName);

        consumeValue = new QLineEdit(Inventory);
        consumeValue->setObjectName(QStringLiteral("consumeValue"));

        horizontalLayout_2->addWidget(consumeValue);

        consumeButton = new QPushButton(Inventory);
        consumeButton->setObjectName(QStringLiteral("consumeButton"));

        horizontalLayout_2->addWidget(consumeButton);


        verticalLayout->addLayout(horizontalLayout_2);

        displayButton = new QPushButton(Inventory);
        displayButton->setObjectName(QStringLiteral("displayButton"));

        verticalLayout->addWidget(displayButton);


        retranslateUi(Inventory);

        QMetaObject::connectSlotsByName(Inventory);
    } // setupUi

    void retranslateUi(QWidget *Inventory)
    {
        Inventory->setWindowTitle(QApplication::translate("Inventory", "Inventory", 0));
        label->setText(QApplication::translate("Inventory", "Add:", 0));
        addButton->setText(QApplication::translate("Inventory", "Add", 0));
        label_2->setText(QApplication::translate("Inventory", "Consume:", 0));
        consumeButton->setText(QApplication::translate("Inventory", "Consume", 0));
        displayButton->setText(QApplication::translate("Inventory", "Display Log", 0));
    } // retranslateUi

};

namespace Ui {
    class Inventory: public Ui_Inventory {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INVENTORY_H
