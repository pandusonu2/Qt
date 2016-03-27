#include "inventory.h"
#include "ui_inventory.h"
#include <QFile>
#include <QtCore>
#include <QDateTime>

Inventory::Inventory(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Inventory)
{
    ui->setupUi(this);
    Clear();
}

Inventory::~Inventory()
{
    delete ui;
}

QString Inventory::times(){
    QDateTime time = QDateTime::currentDateTime();
    return time.toString();
}

void Inventory::on_addButton_clicked()
{
    QString name=ui->addName->text();
    QString number=ui->addValue->text();
    qint64 quantity = 0;
    QRegExp re("\\d*");
    if (re.exactMatch(number))
    {
        bool ok;
        quantity = number.toLongLong(&ok,10);
    }else{
        display("Enter a proper number.\n");
        return;
    }
    if (!items[name]){
        items[name] = quantity;
    }else{
        items[name] += quantity;
    }
    QString out = name + " added with " + number + " value at " + times() + ".\n";

    display(out);
    Write(out);
}

void Inventory::on_consumeButton_clicked()
{
    QString name=ui->consumeName->text();
    QString number=ui->consumeValue->text();
    if (!items[name]){
        display("No such quantity exists.\n");
        return;
    }else{
        qint64 quantity = 0;
        QRegExp re("\\d*");
        if (re.exactMatch(number))
        {
            bool ok;
            quantity = number.toLongLong(&ok,10);
        }else{
            display("Enter a proper number.\n");
            return;
        }
        if (quantity > items[name]){
            display("Not enough items to consume.\n");
            return;
        }else{
            items[name] -= quantity;
        }
        qDebug() << quantity;
    }
    QString out = number + " quantity of " + name + " consumed at " + times() + ".\n";
    display(out);
    Write(out);
}

void Inventory::on_displayButton_clicked()
{
    QFile log("log.txt");
    log.open(QIODevice::ReadOnly | QFile::Text);
    QTextStream in(&log);
    QString logx = in.readAll();
    log.close();
    ui->textEdit->setPlainText(logx);
    QTextCursor cursor = ui->textEdit->textCursor();
    cursor.movePosition(QTextCursor::Start, QTextCursor::MoveAnchor, 1);
}

void Inventory::Write(QString out)
{
    QFile log("log.txt");
    log.open(QIODevice::Append | QFile::Text);
    QTextStream writer(&log);
    writer << out;
    qDebug() << out;
    log.flush();
    log.close();
}

void Inventory::Clear()
{
    QFile log("log.txt");
    log.open(QIODevice::WriteOnly | QFile::Text);
    QTextStream out(&log);
    out << "Activity log" << endl;
    log.flush();
    log.close();
}

void Inventory::display(QString display)
{
    ui->textEdit->setPlainText(display);
    QTextCursor cursor = ui->textEdit->textCursor();
    cursor.movePosition(QTextCursor::Start, QTextCursor::MoveAnchor, 1);
}
