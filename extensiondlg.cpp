#include "extensiondlg.h"
#include <QPushButton>

ExtensionDLG::ExtensionDLG(QWidget *parent) :
    QDialog(parent)
{
    setupUi(this);
    detailWidget->hide();
    main_layout->setSizeConstraint(QLayout::SetFixedSize);
}

ExtensionDLG::~ExtensionDLG()
{
}

void ExtensionDLG::on_DetailBtn_clicked()
{
    if (detailWidget->isHidden()) {
        detailWidget->show();
    } else {
        detailWidget->hide();
    }


}
