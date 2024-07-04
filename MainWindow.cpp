#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{
    //Component titles
    setWindowTitle("Software Review");
    //Layout
    mainLayout->addWidget(instruction);

    nameLayout->addWidget(programNameLabel);
    nameLayout->addWidget(programName);
    nameWindow->setLayout(nameLayout);
    mainLayout->addWidget(nameWindow);

    dateLayout->addWidget(dateLabel);
    dateLayout->addWidget(date);
    dateWindow->setLayout(dateLayout);
    mainLayout->addWidget(dateWindow);

    mainLayout->addWidget(recommendCheckBox);

    buttonLayout->addWidget(add);
    buttonLayout->addWidget(display);
    buttonWindow->setLayout(buttonLayout);
    mainLayout->addWidget(buttonWindow);

    //Add window which will contain the layout
    setCentralWidget(mainWindow);
    mainWindow->setLayout(mainLayout);

    //Signals & slots
    connect(display, &QPushButton::clicked, this, &MainWindow::displayClicked);
    connect(add, &QPushButton::clicked, this, &MainWindow::addClicked);
    connect(recommendCheckBox, &QCheckBox::stateChanged, this, &MainWindow::updateRecommendedState);

    //Initialise
    programName->clear();
    date->setDate(QDate::currentDate());
    recommendCheckBox->setChecked(false);
    recommendedState = false;
    noPrograms = 0;
}

MainWindow::~MainWindow()
{
    //delete programList
    //delete any other objects created
}

void MainWindow::clearFields(){
    programName->clear();
    date->setDate(QDate::currentDate());
    recommendCheckBox->setChecked(false);
}

void::MainWindow::updateRecommendedState(int state){
    recommendedState = (state == Qt::Checked);
}

void MainWindow::displayClicked(){
    for(int i=0; i<noPrograms; i++){
        qDebug() << "Display button clicked.";
        qDebug() << storedData.stringList.at(i);
        qDebug() << storedData.dateList.at(i).toString("yyyy-MM-dd");
        if(storedData.boolList.at(i)){
            qDebug() << "Recommended\n";
        }
        else{
            qDebug() << "Not recommended\n";
        }
    }
}

void MainWindow::addClicked(){
    //qDebug() << "Add button clicked.";
    storedData.stringList << programName->text();
    storedData.dateList << date->date();
    storedData.boolList << recommendedState;
    this->clearFields();
    noPrograms++;
}
