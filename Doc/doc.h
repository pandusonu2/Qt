#ifndef DOC_H
#define DOC_H

#include <QWidget>
#include<QString>

namespace Ui {
class doc;
}

class doc : public QWidget
{
    Q_OBJECT

public:
    explicit doc(QWidget *parent = 0);
    ~doc();

private slots:
    void on_addButton_clicked();

    void on_consumeButton_clicked();

    void on_displayButton_clicked();

    void display(QString out);

    void writeFile(QString out);

    static QMap<QString, qint64> items;

private:
    Ui::doc *ui;
};

#endif // DOC_H
