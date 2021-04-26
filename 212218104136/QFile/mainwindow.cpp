#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QDebug>
#include<QFileDialog>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    /*Open an existing directory
    QString dir = QFileDialog::getExistingDirectory(this, tr("Open Directory"),
                                                    "C://",
                                                    QFileDialog::ShowDirsOnly
                                                    | QFileDialog::DontResolveSymlinks);
    qDebug()<<"Your chosen Directory is: "<<dir;
    */

   /* Open a File
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"),
                                                    "C://",
                                                    tr("Images (*.png *.xpm *.jpg)"));
    qDebug()<<"Your chosen File is: "<<fileName;
   */

    /* Open multiple files
    QStringList files = QFileDialog::getOpenFileNames(
                            this,
                            "Select one or more files to open",
                            "C://",
                            "Images (*.png *.xpm *.jpg)");
    qDebug()<<"Your chosen Files are: "<<files;
    */

    //to save a file
    QString fileName = QFileDialog::getSaveFileName(this, tr("Save File"),
                               "/home/jana/untitled.png",
                               tr("Images (*.png *.xpm *.jpg)"));
    qDebug()<<"Your chosen saved File is: "<<fileName;

}
