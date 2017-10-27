#ifndef EXTENSIONDLG_H
#define EXTENSIONDLG_H

#include <QDialog>
#include "ui_extensiondlg.h"

namespace Ui {
class ExtensionDLG;
}

class ExtensionDLG : public QDialog, public Ui::ExtensionDLG
{
    Q_OBJECT

public:
    explicit ExtensionDLG(QWidget *parent = 0);
    ~ExtensionDLG();

private slots:
    void on_DetailBtn_clicked();

private:
};

#endif // EXTENSIONDLG_H
