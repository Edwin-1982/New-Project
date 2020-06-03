/********************************************************************************
** Form generated from reading UI file 'SciDAVisAbout.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCIDAVISABOUT_H
#define UI_SCIDAVISABOUT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_SciDAVisAbout
{
public:
    QLabel *version_label;
    QLabel *release_date_label;
    QTextEdit *credits_box;
    QPushButton *close_button;

    void setupUi(QDialog *SciDAVisAbout)
    {
        if (SciDAVisAbout->objectName().isEmpty())
            SciDAVisAbout->setObjectName(QString::fromUtf8("SciDAVisAbout"));
        SciDAVisAbout->resize(500, 450);
        SciDAVisAbout->setMinimumSize(QSize(500, 450));
        SciDAVisAbout->setMaximumSize(QSize(500, 500));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/appicon"), QSize(), QIcon::Normal, QIcon::Off);
        SciDAVisAbout->setWindowIcon(icon);
        SciDAVisAbout->setSizeGripEnabled(false);
        version_label = new QLabel(SciDAVisAbout);
        version_label->setObjectName(QString::fromUtf8("version_label"));
        version_label->setGeometry(QRect(170, 0, 321, 36));
        QFont font;
        font.setPointSize(15);
        version_label->setFont(font);
        release_date_label = new QLabel(SciDAVisAbout);
        release_date_label->setObjectName(QString::fromUtf8("release_date_label"));
        release_date_label->setGeometry(QRect(170, 34, 261, 36));
        QFont font1;
        font1.setPointSize(12);
        release_date_label->setFont(font1);
        credits_box = new QTextEdit(SciDAVisAbout);
        credits_box->setObjectName(QString::fromUtf8("credits_box"));
        credits_box->setGeometry(QRect(10, 72, 481, 371));
        QPalette palette;
        QBrush brush(QColor(239, 239, 239, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        credits_box->setPalette(palette);
        credits_box->setReadOnly(true);
        close_button = new QPushButton(SciDAVisAbout);
        close_button->setObjectName(QString::fromUtf8("close_button"));
        close_button->setGeometry(QRect(10, 10, 131, 51));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/applogo"), QSize(), QIcon::Normal, QIcon::Off);
        close_button->setIcon(icon1);
        close_button->setIconSize(QSize(130, 50));

        retranslateUi(SciDAVisAbout);
        QObject::connect(close_button, SIGNAL(clicked()), SciDAVisAbout, SLOT(close()));

        QMetaObject::connectSlotsByName(SciDAVisAbout);
    } // setupUi

    void retranslateUi(QDialog *SciDAVisAbout)
    {
        SciDAVisAbout->setWindowTitle(QCoreApplication::translate("SciDAVisAbout", "Dialog", nullptr));
        version_label->setText(QCoreApplication::translate("SciDAVisAbout", "SciDAVis XX.XX.XX-betaXX", nullptr));
        release_date_label->setText(QCoreApplication::translate("SciDAVisAbout", "Released XXXX-XX-XX", nullptr));
#if QT_CONFIG(tooltip)
        close_button->setToolTip(QCoreApplication::translate("SciDAVisAbout", "Close", nullptr));
#endif // QT_CONFIG(tooltip)
        close_button->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SciDAVisAbout: public Ui_SciDAVisAbout {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCIDAVISABOUT_H
