#include "doc.h"
#include "ui_doc.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <ctime>

using namespace std;

doc::doc(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::doc)
{
    ui->setupUi(this);
}

doc::~doc()
{
    delete ui;
}

string timetostring(){
    time_t     now = time(0);
    struct tm  tstruct;
    char       buf[80];

    tstruct = *localtime(&now);
    strftime(buf, sizeof(buf), "%Y-%m-%d.%X", &tstruct);

    return buf;
}

void doc::display(QString display)
{
    ui->textEdit->setPlainText(display);
    QTextCursor cursor = ui->textEdit->textCursor();
    cursor.movePosition(QTextCursor::Start, QTextCursor::MoveAnchor, 1);
}

void doc::writeFile(QString output)
{
    QString filename = "log.txt";
    QFile file(filename);
    if(file.open(QIODevice::ReadWrite)){
        QTextStream stream(&file);
        stream<<output<<endl;
    }
    return;
}

void doc::on_addButton_clicked()
{
    QString name=ui->addItemName->text();
    QString number=ui->addItemQ->text();
    qint64 quantity = 0;
    try{
        bool ok;
        quantity = number.toLongLong(&ok,10);
    }catch(const char* error){
        display("Enter a proper number.\n");
        return;
    }
    if (!items[name]){
        items[name] = quantity;
    }else{
        items[name] += quantity;
    }
    QString out = name + " added with " + number + " value at " + QString::fromStdString(timetostring()) + ".\n";

    display(out);
    writeFile(out);
}

void doc::on_consumeButton_clicked()
{
    QString name=ui->consumeItemName->text();
    QString number=ui->consumeItemQ->text();
    if (!items[name]){
        display("No such quantity exists.\n");
        return;
    }else{
        qint64 quantity = 0;
        try{
            bool ok;
            quantity = number.toLongLong(&ok,10);
        }catch (const char* error){
            display("Enter a proper number.\n");
            return;
        }
        if (quantity > items[name]){
            display("Not enough items to consume.\n");
            return;
        }else{
            items[name] -= quantity;
        }
    }
    QString out = number + " quantity of " + name + " consumed at " + QString::fromStdString(timetostring()) + ".\n";

    display(out);
    writeFile(out);
}

void doc::on_displayButton_clicked()
{
    QFile inputFile(":/log.txt");
    inputFile.open(QIODevice::ReadOnly);

    QTextStream in(&inputFile);
    QString line = in.readAll();
    inputFile.close();

    ui->textEdit->setPlainText(line);
    QTextCursor cursor = ui->textEdit->textCursor();
    cursor.movePosition(QTextCursor::Start, QTextCursor::MoveAnchor, 1);
}
