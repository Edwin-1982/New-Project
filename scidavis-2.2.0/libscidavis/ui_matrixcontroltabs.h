/********************************************************************************
** Form generated from reading UI file 'matrixcontroltabs.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MATRIXCONTROLTABS_H
#define UI_MATRIXCONTROLTABS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MatrixControlTabs
{
public:
    QHBoxLayout *hboxLayout;
    QTabWidget *tab_widget;
    QWidget *coordinates_tab;
    QVBoxLayout *vboxLayout;
    QPushButton *button_set_coordinates;
    QWidget *coordinates_widget;
    QGridLayout *gridLayout;
    QLabel *first_col_label;
    QDoubleSpinBox *first_col_spinbox;
    QSpacerItem *spacerItem;
    QLabel *last_col_label;
    QDoubleSpinBox *last_col_spinbox;
    QSpacerItem *spacerItem1;
    QLabel *first_row_label;
    QDoubleSpinBox *first_row_spinbox;
    QSpacerItem *spacerItem2;
    QLabel *last_row_label;
    QDoubleSpinBox *last_row_spinbox;
    QSpacerItem *spacerItem3;
    QSpacerItem *spacerItem4;
    QSpacerItem *spacerItem5;
    QSpacerItem *spacerItem6;
    QWidget *format_tab;
    QGridLayout *gridLayout1;
    QPushButton *button_set_format;
    QLabel *format_label;
    QComboBox *format_box;
    QLabel *digits_label;
    QSpinBox *digits_box;
    QTextEdit *type_info;
    QWidget *formula_tab;
    QGridLayout *gridLayout2;
    QLabel *formula_label;
    QPushButton *button_set_formula;
    QTextEdit *formula_box;
    QComboBox *add_cell_combobox;
    QPushButton *add_cell_button;
    QComboBox *add_function_combobox;
    QPushButton *add_function_button;

    void setupUi(QWidget *MatrixControlTabs)
    {
        if (MatrixControlTabs->objectName().isEmpty())
            MatrixControlTabs->setObjectName(QString::fromUtf8("MatrixControlTabs"));
        MatrixControlTabs->resize(260, 230);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MatrixControlTabs->sizePolicy().hasHeightForWidth());
        MatrixControlTabs->setSizePolicy(sizePolicy);
        MatrixControlTabs->setMinimumSize(QSize(260, 230));
        hboxLayout = new QHBoxLayout(MatrixControlTabs);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        tab_widget = new QTabWidget(MatrixControlTabs);
        tab_widget->setObjectName(QString::fromUtf8("tab_widget"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tab_widget->sizePolicy().hasHeightForWidth());
        tab_widget->setSizePolicy(sizePolicy1);
        tab_widget->setMinimumSize(QSize(260, 230));
        tab_widget->setTabPosition(QTabWidget::North);
        coordinates_tab = new QWidget();
        coordinates_tab->setObjectName(QString::fromUtf8("coordinates_tab"));
        vboxLayout = new QVBoxLayout(coordinates_tab);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        button_set_coordinates = new QPushButton(coordinates_tab);
        button_set_coordinates->setObjectName(QString::fromUtf8("button_set_coordinates"));

        vboxLayout->addWidget(button_set_coordinates);

        coordinates_widget = new QWidget(coordinates_tab);
        coordinates_widget->setObjectName(QString::fromUtf8("coordinates_widget"));
        gridLayout = new QGridLayout(coordinates_widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        first_col_label = new QLabel(coordinates_widget);
        first_col_label->setObjectName(QString::fromUtf8("first_col_label"));
        first_col_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(first_col_label, 0, 0, 1, 1);

        first_col_spinbox = new QDoubleSpinBox(coordinates_widget);
        first_col_spinbox->setObjectName(QString::fromUtf8("first_col_spinbox"));
        first_col_spinbox->setEnabled(true);
        first_col_spinbox->setMinimumSize(QSize(80, 0));
        first_col_spinbox->setMaximumSize(QSize(100, 16777215));
        first_col_spinbox->setDecimals(15);
        first_col_spinbox->setMinimum(-999999999.990000009536743);
        first_col_spinbox->setMaximum(999999999.990000009536743);
        first_col_spinbox->setSingleStep(0.100000000000000);
        first_col_spinbox->setValue(0.000000000000000);

        gridLayout->addWidget(first_col_spinbox, 0, 1, 1, 1);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 0, 2, 1, 1);

        last_col_label = new QLabel(coordinates_widget);
        last_col_label->setObjectName(QString::fromUtf8("last_col_label"));
        last_col_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(last_col_label, 1, 0, 1, 1);

        last_col_spinbox = new QDoubleSpinBox(coordinates_widget);
        last_col_spinbox->setObjectName(QString::fromUtf8("last_col_spinbox"));
        last_col_spinbox->setMinimumSize(QSize(80, 0));
        last_col_spinbox->setMaximumSize(QSize(100, 16777215));
        last_col_spinbox->setDecimals(15);
        last_col_spinbox->setMinimum(-999999999.990000009536743);
        last_col_spinbox->setMaximum(999999999.990000009536743);
        last_col_spinbox->setSingleStep(0.100000000000000);
        last_col_spinbox->setValue(1.000000000000000);

        gridLayout->addWidget(last_col_spinbox, 1, 1, 1, 1);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem1, 1, 2, 1, 1);

        first_row_label = new QLabel(coordinates_widget);
        first_row_label->setObjectName(QString::fromUtf8("first_row_label"));
        first_row_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(first_row_label, 2, 0, 1, 1);

        first_row_spinbox = new QDoubleSpinBox(coordinates_widget);
        first_row_spinbox->setObjectName(QString::fromUtf8("first_row_spinbox"));
        first_row_spinbox->setMinimumSize(QSize(80, 0));
        first_row_spinbox->setMaximumSize(QSize(100, 16777215));
        first_row_spinbox->setDecimals(15);
        first_row_spinbox->setMinimum(-999999999.990000009536743);
        first_row_spinbox->setMaximum(999999999.990000009536743);
        first_row_spinbox->setSingleStep(0.100000000000000);

        gridLayout->addWidget(first_row_spinbox, 2, 1, 1, 1);

        spacerItem2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem2, 2, 2, 1, 1);

        last_row_label = new QLabel(coordinates_widget);
        last_row_label->setObjectName(QString::fromUtf8("last_row_label"));
        last_row_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(last_row_label, 3, 0, 1, 1);

        last_row_spinbox = new QDoubleSpinBox(coordinates_widget);
        last_row_spinbox->setObjectName(QString::fromUtf8("last_row_spinbox"));
        last_row_spinbox->setMinimumSize(QSize(80, 0));
        last_row_spinbox->setMaximumSize(QSize(100, 16777215));
        last_row_spinbox->setDecimals(15);
        last_row_spinbox->setMinimum(-999999999.990000009536743);
        last_row_spinbox->setMaximum(999999999.990000009536743);
        last_row_spinbox->setSingleStep(0.100000000000000);
        last_row_spinbox->setValue(1.000000000000000);

        gridLayout->addWidget(last_row_spinbox, 3, 1, 1, 1);

        spacerItem3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem3, 3, 2, 1, 1);

        spacerItem4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem4, 4, 0, 1, 1);

        spacerItem5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem5, 4, 1, 1, 1);

        spacerItem6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem6, 4, 2, 1, 1);


        vboxLayout->addWidget(coordinates_widget);

        tab_widget->addTab(coordinates_tab, QString());
        format_tab = new QWidget();
        format_tab->setObjectName(QString::fromUtf8("format_tab"));
        gridLayout1 = new QGridLayout(format_tab);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        button_set_format = new QPushButton(format_tab);
        button_set_format->setObjectName(QString::fromUtf8("button_set_format"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(button_set_format->sizePolicy().hasHeightForWidth());
        button_set_format->setSizePolicy(sizePolicy2);

        gridLayout1->addWidget(button_set_format, 0, 0, 1, 2);

        format_label = new QLabel(format_tab);
        format_label->setObjectName(QString::fromUtf8("format_label"));

        gridLayout1->addWidget(format_label, 2, 0, 1, 1);

        format_box = new QComboBox(format_tab);
        format_box->setObjectName(QString::fromUtf8("format_box"));
        sizePolicy2.setHeightForWidth(format_box->sizePolicy().hasHeightForWidth());
        format_box->setSizePolicy(sizePolicy2);
        format_box->setMinimumSize(QSize(120, 0));

        gridLayout1->addWidget(format_box, 2, 1, 1, 1);

        digits_label = new QLabel(format_tab);
        digits_label->setObjectName(QString::fromUtf8("digits_label"));

        gridLayout1->addWidget(digits_label, 3, 0, 1, 1);

        digits_box = new QSpinBox(format_tab);
        digits_box->setObjectName(QString::fromUtf8("digits_box"));
        digits_box->setMaximum(16);
        digits_box->setValue(6);

        gridLayout1->addWidget(digits_box, 3, 1, 1, 1);

        type_info = new QTextEdit(format_tab);
        type_info->setObjectName(QString::fromUtf8("type_info"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(type_info->sizePolicy().hasHeightForWidth());
        type_info->setSizePolicy(sizePolicy3);
        type_info->setMinimumSize(QSize(60, 10));
        QPalette palette;
        QBrush brush(QColor(182, 182, 182, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        type_info->setPalette(palette);
        type_info->setUndoRedoEnabled(false);
        type_info->setReadOnly(true);

        gridLayout1->addWidget(type_info, 4, 0, 1, 2);

        tab_widget->addTab(format_tab, QString());
        formula_tab = new QWidget();
        formula_tab->setObjectName(QString::fromUtf8("formula_tab"));
        gridLayout2 = new QGridLayout(formula_tab);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        formula_label = new QLabel(formula_tab);
        formula_label->setObjectName(QString::fromUtf8("formula_label"));

        gridLayout2->addWidget(formula_label, 0, 0, 1, 1);

        button_set_formula = new QPushButton(formula_tab);
        button_set_formula->setObjectName(QString::fromUtf8("button_set_formula"));

        gridLayout2->addWidget(button_set_formula, 0, 1, 1, 2);

        formula_box = new QTextEdit(formula_tab);
        formula_box->setObjectName(QString::fromUtf8("formula_box"));
        formula_box->setMinimumSize(QSize(60, 10));
        formula_box->setAcceptRichText(false);

        gridLayout2->addWidget(formula_box, 1, 0, 1, 3);

        add_cell_combobox = new QComboBox(formula_tab);
        add_cell_combobox->setObjectName(QString::fromUtf8("add_cell_combobox"));
        add_cell_combobox->setMinimumSize(QSize(120, 0));

        gridLayout2->addWidget(add_cell_combobox, 2, 0, 1, 2);

        add_cell_button = new QPushButton(formula_tab);
        add_cell_button->setObjectName(QString::fromUtf8("add_cell_button"));

        gridLayout2->addWidget(add_cell_button, 2, 2, 1, 1);

        add_function_combobox = new QComboBox(formula_tab);
        add_function_combobox->setObjectName(QString::fromUtf8("add_function_combobox"));
        add_function_combobox->setMinimumSize(QSize(120, 0));

        gridLayout2->addWidget(add_function_combobox, 3, 0, 1, 2);

        add_function_button = new QPushButton(formula_tab);
        add_function_button->setObjectName(QString::fromUtf8("add_function_button"));

        gridLayout2->addWidget(add_function_button, 3, 2, 1, 1);

        tab_widget->addTab(formula_tab, QString());

        hboxLayout->addWidget(tab_widget);

#if QT_CONFIG(shortcut)
        format_label->setBuddy(format_box);
        digits_label->setBuddy(digits_box);
        formula_label->setBuddy(formula_box);
#endif // QT_CONFIG(shortcut)

        retranslateUi(MatrixControlTabs);

        tab_widget->setCurrentIndex(0);
        format_box->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(MatrixControlTabs);
    } // setupUi

    void retranslateUi(QWidget *MatrixControlTabs)
    {
        MatrixControlTabs->setWindowTitle(QCoreApplication::translate("MatrixControlTabs", "Control Tabs", nullptr));
        button_set_coordinates->setText(QCoreApplication::translate("MatrixControlTabs", "Appl&y", nullptr));
        first_col_label->setText(QCoreApplication::translate("MatrixControlTabs", "First column X =", nullptr));
        last_col_label->setText(QCoreApplication::translate("MatrixControlTabs", "Last column X =", nullptr));
        first_row_label->setText(QCoreApplication::translate("MatrixControlTabs", "First row Y =", nullptr));
        last_row_label->setText(QCoreApplication::translate("MatrixControlTabs", "Last row Y =", nullptr));
        tab_widget->setTabText(tab_widget->indexOf(coordinates_tab), QCoreApplication::translate("MatrixControlTabs", "Coordinates", nullptr));
#if QT_CONFIG(tooltip)
        button_set_format->setToolTip(QCoreApplication::translate("MatrixControlTabs", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Apply new type and format to all selected columns</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        button_set_format->setText(QCoreApplication::translate("MatrixControlTabs", "Appl&y", nullptr));
        format_label->setText(QCoreApplication::translate("MatrixControlTabs", "Format:", nullptr));
#if QT_CONFIG(tooltip)
        format_box->setToolTip(QCoreApplication::translate("MatrixControlTabs", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Choose the display format</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        digits_label->setText(QCoreApplication::translate("MatrixControlTabs", "Decimal Digits:", nullptr));
#if QT_CONFIG(tooltip)
        digits_box->setToolTip(QCoreApplication::translate("MatrixControlTabs", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Enter the number of displayed decimal digits</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        type_info->setToolTip(QCoreApplication::translate("MatrixControlTabs", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Information about the selected type and format</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        tab_widget->setTabText(tab_widget->indexOf(format_tab), QCoreApplication::translate("MatrixControlTabs", "Format", nullptr));
        formula_label->setText(QCoreApplication::translate("MatrixControlTabs", "Formula:", nullptr));
#if QT_CONFIG(tooltip)
        button_set_formula->setToolTip(QCoreApplication::translate("MatrixControlTabs", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Apply the formula to all selected cells</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        button_set_formula->setText(QCoreApplication::translate("MatrixControlTabs", "Appl&y", nullptr));
#if QT_CONFIG(tooltip)
        add_cell_combobox->setToolTip(QCoreApplication::translate("MatrixControlTabs", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Select a column reference to insert into the formula</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        add_cell_button->setToolTip(QCoreApplication::translate("MatrixControlTabs", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Insert the column reference into the formula</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        add_cell_button->setText(QCoreApplication::translate("MatrixControlTabs", "Add", nullptr));
#if QT_CONFIG(tooltip)
        add_function_combobox->setToolTip(QCoreApplication::translate("MatrixControlTabs", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Select a function to insert into the formula</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        add_function_button->setToolTip(QCoreApplication::translate("MatrixControlTabs", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Inset the function into the formula</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        add_function_button->setText(QCoreApplication::translate("MatrixControlTabs", "Add", nullptr));
        tab_widget->setTabText(tab_widget->indexOf(formula_tab), QCoreApplication::translate("MatrixControlTabs", "Formula", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MatrixControlTabs: public Ui_MatrixControlTabs {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MATRIXCONTROLTABS_H
