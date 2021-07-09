#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mytablemodel.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    myTableModel *myModel = new myTableModel();
    ui->tableView->setModel(myModel);
}

MainWindow::~MainWindow()
{
    delete ui;
}


