#include "DataStorage.h"

DataStorage::DataStorage(){

}

DataStorage::DataStorage(QString n, QDate d, bool r){
    name=n;
    date=d;
    recommend=r;
}

DataStorage::~DataStorage(){

}

void DataStorage::setName(QString n){
    name=n;
}

void DataStorage::setDate(QDate d){
    date=d;
}

void DataStorage::setRecommend(bool r){
    recommend=r;
}

QString DataStorage::getName(){
    return name;
}

QDate DataStorage::getDate(){
    return date;
}

bool DataStorage::getRecommend(){
    return recommend;
}

