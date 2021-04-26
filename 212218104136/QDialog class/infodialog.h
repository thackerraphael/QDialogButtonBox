#ifndef INFODIALOG_H
#define INFODIALOG_H

#include <QDialog>

namespace Ui {
class infoDialog;
}

class infoDialog : public QDialog
{
    Q_OBJECT

public:
    explicit infoDialog(QWidget *parent = nullptr);
    ~infoDialog();

    QString getFavouriteOS() const;

    QString getPosition() const;

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::infoDialog *ui;
    QString position;
    QString FavouriteOS;
};

#endif // INFODIALOG_H
