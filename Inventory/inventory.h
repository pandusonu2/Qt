#ifndef INVENTORY_H
#define INVENTORY_H

#include <QWidget>
#include <QMap>

namespace Ui {
class Inventory;
}

class Inventory : public QWidget
{
    Q_OBJECT

    QMap<QString, qint64> items;

public:
    explicit Inventory(QWidget *parent = 0);
    ~Inventory();

private slots:
    void on_addButton_clicked();

    void on_consumeButton_clicked();

    void on_displayButton_clicked();

    QString times();

    void display(QString display);

private:
    Ui::Inventory *ui;
    void Write(QString out);
    void Clear();
};

#endif // INVENTORY_H
