/********************************************************************************
** Form generated from reading UI file 'DimensionsDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIMENSIONSDIALOG_H
#define UI_DIMENSIONSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DimensionsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *rowsLabel;
    QSpinBox *rowsSpinBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *columnsLabel;
    QSpinBox *columnsSpinBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DimensionsDialog)
    {
        if (DimensionsDialog->objectName().isEmpty())
            DimensionsDialog->setObjectName(QString::fromUtf8("DimensionsDialog"));
        DimensionsDialog->resize(208, 125);
        verticalLayout = new QVBoxLayout(DimensionsDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        rowsLabel = new QLabel(DimensionsDialog);
        rowsLabel->setObjectName(QString::fromUtf8("rowsLabel"));

        horizontalLayout->addWidget(rowsLabel);

        rowsSpinBox = new QSpinBox(DimensionsDialog);
        rowsSpinBox->setObjectName(QString::fromUtf8("rowsSpinBox"));
        rowsSpinBox->setMaximum(999999999);

        horizontalLayout->addWidget(rowsSpinBox);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        columnsLabel = new QLabel(DimensionsDialog);
        columnsLabel->setObjectName(QString::fromUtf8("columnsLabel"));

        horizontalLayout_2->addWidget(columnsLabel);

        columnsSpinBox = new QSpinBox(DimensionsDialog);
        columnsSpinBox->setObjectName(QString::fromUtf8("columnsSpinBox"));
        columnsSpinBox->setMaximum(999999999);

        horizontalLayout_2->addWidget(columnsSpinBox);


        verticalLayout->addLayout(horizontalLayout_2);

        buttonBox = new QDialogButtonBox(DimensionsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(DimensionsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), DimensionsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DimensionsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(DimensionsDialog);
    } // setupUi

    void retranslateUi(QDialog *DimensionsDialog)
    {
        DimensionsDialog->setWindowTitle(QCoreApplication::translate("DimensionsDialog", "Dialog", nullptr));
        rowsLabel->setText(QCoreApplication::translate("DimensionsDialog", "Rows", nullptr));
        columnsLabel->setText(QCoreApplication::translate("DimensionsDialog", "Columns", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DimensionsDialog: public Ui_DimensionsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIMENSIONSDIALOG_H
