#ifndef MODEL_H
#define MODEL_H

#include <QString>
#include <QDate>
#include <QList>

struct Model
{
    QList <QString> stringList;
    QList <QDate> dateList;
    QList <bool> boolList;
};

#endif // MODEL_H
