#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(this,SIGNAL(submitMessage(const QString)),this,SLOT(addNewText(const QString)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::addNewText(const QString &text)
{
    list.append(text);
    list.append("\n");
    ui->logPlainTextEdit->setPlainText(list);
}


void MainWindow::on_updatePushButton_clicked()
{
    emit submitMessage("My Message");
}
