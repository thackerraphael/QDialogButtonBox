#include "infodialog.h"
#include "ui_infodialog.h"

infoDialog::infoDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::infoDialog)
{
    ui->setupUi(this);
}

infoDialog::~infoDialog()
{
    delete ui;
}

void infoDialog::on_pushButton_clicked()
{
    QString UserPosition  = ui->PositionlineEdit->text();
    if(!UserPosition.isEmpty())
    {
        position=UserPosition;
        if(ui->WindowsradioButton->isChecked())
        {
            FavouriteOS="windows";
        }
        if(ui->MacradioButton->isChecked())
        {
            FavouriteOS="mac";
        }
        if(ui->LinuxradioButton->isChecked())
        {
            FavouriteOS="linux";
        }

    }
    accept();

}

void infoDialog::on_pushButton_2_clicked()
{
    reject();
}

QString infoDialog::getPosition() const
{
    return position;
}

QString infoDialog::getFavouriteOS() const
{
    return FavouriteOS;
}
