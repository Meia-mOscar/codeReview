#ifndef DATASTORAGE_H
#define DATASTORAGE_H

#include <QString>
#include <QDate>

class DataStorage
{
public:
    //Getters / setters
    DataStorage();
    DataStorage(QString n, QDate d, bool r);
    ~DataStorage();
    void setName(QString n);
    void setDate(QDate d);
    void setRecommend(bool r);
    QString getName();
    QDate getDate();
    bool getRecommend();
/*public slots:
    void setName(QString n);
    void setDate(QDate d);
    void setRecommend(bool r);
    void display();*/
private:
    //data
    QString name;
    QDate date;
    bool recommend;
};

#endif DATASTORAGE_H
