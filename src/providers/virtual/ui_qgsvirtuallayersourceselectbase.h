/********************************************************************************
** Form generated from reading UI file 'qgsvirtuallayersourceselectbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSVIRTUALLAYERSOURCESELECTBASE_H
#define UI_QGSVIRTUALLAYERSOURCESELECTBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <qgscodeeditorsql.h>
#include "qgscollapsiblegroupbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsVirtualLayerSourceSelectBase
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QComboBox *mLayerNameCombo;
    QSpacerItem *horizontalSpacer;
    QgsCollapsibleGroupBox *mEmbeddedlLayersGroup;
    QVBoxLayout *verticalLayout_4;
    QTableWidget *mLayersTable;
    QHBoxLayout *horizontalLayout;
    QPushButton *mAddLayerBtn;
    QPushButton *mImportLayerBtn;
    QPushButton *mRemoveLayerBtn;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *mQueryBox;
    QVBoxLayout *verticalLayout_2;
    QgsCodeEditorSQL *mQueryEdit;
    QHBoxLayout *horizontalLayout_5;
    QCheckBox *mUIDColumnNameChck;
    QLineEdit *mUIDField;
    QgsCollapsibleGroupBox *mGeometryGroup;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *mAutodetectGeometryRadio;
    QRadioButton *mNoGeometryRadio;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *mGeometryRadio;
    QFrame *mGeometryFrame;
    QFormLayout *formLayout_2;
    QLabel *label;
    QLineEdit *mGeometryField;
    QLabel *label_3;
    QComboBox *mGeometryType;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *mCRS;
    QToolButton *mBrowseCRSBtn;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *mTestButton;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsVirtualLayerSourceSelectBase)
    {
        if (QgsVirtualLayerSourceSelectBase->objectName().isEmpty())
            QgsVirtualLayerSourceSelectBase->setObjectName(QStringLiteral("QgsVirtualLayerSourceSelectBase"));
        QgsVirtualLayerSourceSelectBase->resize(906, 661);
        verticalLayout = new QVBoxLayout(QgsVirtualLayerSourceSelectBase);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_2 = new QLabel(QgsVirtualLayerSourceSelectBase);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_4->addWidget(label_2);

        mLayerNameCombo = new QComboBox(QgsVirtualLayerSourceSelectBase);
        mLayerNameCombo->setObjectName(QStringLiteral("mLayerNameCombo"));
        mLayerNameCombo->setEditable(true);

        horizontalLayout_4->addWidget(mLayerNameCombo);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_4);

        mEmbeddedlLayersGroup = new QgsCollapsibleGroupBox(QgsVirtualLayerSourceSelectBase);
        mEmbeddedlLayersGroup->setObjectName(QStringLiteral("mEmbeddedlLayersGroup"));
        mEmbeddedlLayersGroup->setProperty("collapsed", QVariant(false));
        verticalLayout_4 = new QVBoxLayout(mEmbeddedlLayersGroup);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        mLayersTable = new QTableWidget(mEmbeddedlLayersGroup);
        if (mLayersTable->columnCount() < 4)
            mLayersTable->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        mLayersTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        mLayersTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        mLayersTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        mLayersTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        mLayersTable->setObjectName(QStringLiteral("mLayersTable"));
        mLayersTable->setSelectionMode(QAbstractItemView::SingleSelection);
        mLayersTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        mLayersTable->horizontalHeader()->setStretchLastSection(true);
        mLayersTable->verticalHeader()->setVisible(false);

        verticalLayout_4->addWidget(mLayersTable);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        mAddLayerBtn = new QPushButton(mEmbeddedlLayersGroup);
        mAddLayerBtn->setObjectName(QStringLiteral("mAddLayerBtn"));

        horizontalLayout->addWidget(mAddLayerBtn);

        mImportLayerBtn = new QPushButton(mEmbeddedlLayersGroup);
        mImportLayerBtn->setObjectName(QStringLiteral("mImportLayerBtn"));
        mImportLayerBtn->setEnabled(true);

        horizontalLayout->addWidget(mImportLayerBtn);

        mRemoveLayerBtn = new QPushButton(mEmbeddedlLayersGroup);
        mRemoveLayerBtn->setObjectName(QStringLiteral("mRemoveLayerBtn"));
        mRemoveLayerBtn->setEnabled(false);

        horizontalLayout->addWidget(mRemoveLayerBtn);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_4->addLayout(horizontalLayout);


        verticalLayout->addWidget(mEmbeddedlLayersGroup);

        mQueryBox = new QGroupBox(QgsVirtualLayerSourceSelectBase);
        mQueryBox->setObjectName(QStringLiteral("mQueryBox"));
        mQueryBox->setCheckable(false);
        mQueryBox->setChecked(false);
        verticalLayout_2 = new QVBoxLayout(mQueryBox);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        mQueryEdit = new QgsCodeEditorSQL(mQueryBox);
        mQueryEdit->setObjectName(QStringLiteral("mQueryEdit"));

        verticalLayout_2->addWidget(mQueryEdit);


        verticalLayout->addWidget(mQueryBox);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        mUIDColumnNameChck = new QCheckBox(QgsVirtualLayerSourceSelectBase);
        mUIDColumnNameChck->setObjectName(QStringLiteral("mUIDColumnNameChck"));

        horizontalLayout_5->addWidget(mUIDColumnNameChck);

        mUIDField = new QLineEdit(QgsVirtualLayerSourceSelectBase);
        mUIDField->setObjectName(QStringLiteral("mUIDField"));
        mUIDField->setEnabled(false);

        horizontalLayout_5->addWidget(mUIDField);


        verticalLayout->addLayout(horizontalLayout_5);

        mGeometryGroup = new QgsCollapsibleGroupBox(QgsVirtualLayerSourceSelectBase);
        mGeometryGroup->setObjectName(QStringLiteral("mGeometryGroup"));
        mGeometryGroup->setProperty("collapsed", QVariant(true));
        verticalLayout_3 = new QVBoxLayout(mGeometryGroup);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        mAutodetectGeometryRadio = new QRadioButton(mGeometryGroup);
        mAutodetectGeometryRadio->setObjectName(QStringLiteral("mAutodetectGeometryRadio"));
        mAutodetectGeometryRadio->setChecked(true);

        verticalLayout_3->addWidget(mAutodetectGeometryRadio);

        mNoGeometryRadio = new QRadioButton(mGeometryGroup);
        mNoGeometryRadio->setObjectName(QStringLiteral("mNoGeometryRadio"));

        verticalLayout_3->addWidget(mNoGeometryRadio);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        mGeometryRadio = new QRadioButton(mGeometryGroup);
        mGeometryRadio->setObjectName(QStringLiteral("mGeometryRadio"));

        horizontalLayout_3->addWidget(mGeometryRadio);

        mGeometryFrame = new QFrame(mGeometryGroup);
        mGeometryFrame->setObjectName(QStringLiteral("mGeometryFrame"));
        mGeometryFrame->setEnabled(false);
        mGeometryFrame->setFrameShape(QFrame::StyledPanel);
        mGeometryFrame->setFrameShadow(QFrame::Raised);
        formLayout_2 = new QFormLayout(mGeometryFrame);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        label = new QLabel(mGeometryFrame);
        label->setObjectName(QStringLiteral("label"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label);

        mGeometryField = new QLineEdit(mGeometryFrame);
        mGeometryField->setObjectName(QStringLiteral("mGeometryField"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, mGeometryField);

        label_3 = new QLabel(mGeometryFrame);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_3);

        mGeometryType = new QComboBox(mGeometryFrame);
        mGeometryType->setObjectName(QStringLiteral("mGeometryType"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, mGeometryType);

        label_5 = new QLabel(mGeometryFrame);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_5);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        mCRS = new QLineEdit(mGeometryFrame);
        mCRS->setObjectName(QStringLiteral("mCRS"));
        mCRS->setReadOnly(true);

        horizontalLayout_2->addWidget(mCRS);

        mBrowseCRSBtn = new QToolButton(mGeometryFrame);
        mBrowseCRSBtn->setObjectName(QStringLiteral("mBrowseCRSBtn"));

        horizontalLayout_2->addWidget(mBrowseCRSBtn);


        formLayout_2->setLayout(2, QFormLayout::FieldRole, horizontalLayout_2);


        horizontalLayout_3->addWidget(mGeometryFrame);


        verticalLayout_3->addLayout(horizontalLayout_3);


        verticalLayout->addWidget(mGeometryGroup);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        mTestButton = new QPushButton(QgsVirtualLayerSourceSelectBase);
        mTestButton->setObjectName(QStringLiteral("mTestButton"));

        horizontalLayout_6->addWidget(mTestButton);

        buttonBox = new QDialogButtonBox(QgsVirtualLayerSourceSelectBase);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::NoButton);

        horizontalLayout_6->addWidget(buttonBox);


        verticalLayout->addLayout(horizontalLayout_6);

        QWidget::setTabOrder(mGeometryGroup, buttonBox);
        QWidget::setTabOrder(buttonBox, mGeometryRadio);
        QWidget::setTabOrder(mGeometryRadio, mGeometryField);
        QWidget::setTabOrder(mGeometryField, mGeometryType);
        QWidget::setTabOrder(mGeometryType, mCRS);
        QWidget::setTabOrder(mCRS, mBrowseCRSBtn);

        retranslateUi(QgsVirtualLayerSourceSelectBase);
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsVirtualLayerSourceSelectBase, SLOT(reject()));
        QObject::connect(mGeometryRadio, SIGNAL(toggled(bool)), mGeometryFrame, SLOT(setEnabled(bool)));
        QObject::connect(mUIDColumnNameChck, SIGNAL(toggled(bool)), mUIDField, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(QgsVirtualLayerSourceSelectBase);
    } // setupUi

    void retranslateUi(QDialog *QgsVirtualLayerSourceSelectBase)
    {
        QgsVirtualLayerSourceSelectBase->setWindowTitle(QApplication::translate("QgsVirtualLayerSourceSelectBase", "Create a Virtual Layer", Q_NULLPTR));
        label_2->setText(QApplication::translate("QgsVirtualLayerSourceSelectBase", "Layer name", Q_NULLPTR));
        mEmbeddedlLayersGroup->setTitle(QApplication::translate("QgsVirtualLayerSourceSelectBase", "Embedded layers", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = mLayersTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("QgsVirtualLayerSourceSelectBase", "Local name", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = mLayersTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("QgsVirtualLayerSourceSelectBase", "Provider", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = mLayersTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("QgsVirtualLayerSourceSelectBase", "Encoding", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = mLayersTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("QgsVirtualLayerSourceSelectBase", "Source", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mLayersTable->setToolTip(QApplication::translate("QgsVirtualLayerSourceSelectBase", "Embedded layers can be added to have SQL queries with layers that are independent from layers loaded by the current QGIS project.\n"
"In particular, saving a virtual layer with embedded layers to a QLR file can be done to reuse its definition in another project.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        mAddLayerBtn->setToolTip(QApplication::translate("QgsVirtualLayerSourceSelectBase", "Add a new embedded layer", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mAddLayerBtn->setText(QApplication::translate("QgsVirtualLayerSourceSelectBase", "Add", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mImportLayerBtn->setToolTip(QApplication::translate("QgsVirtualLayerSourceSelectBase", "Import layer definition from loaded layers of the current project", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mImportLayerBtn->setText(QApplication::translate("QgsVirtualLayerSourceSelectBase", "Import", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mRemoveLayerBtn->setToolTip(QApplication::translate("QgsVirtualLayerSourceSelectBase", "Remove the selected embedded layer", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mRemoveLayerBtn->setText(QApplication::translate("QgsVirtualLayerSourceSelectBase", "Remove", Q_NULLPTR));
        mQueryBox->setTitle(QApplication::translate("QgsVirtualLayerSourceSelectBase", "Query", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mQueryEdit->setToolTip(QApplication::translate("QgsVirtualLayerSourceSelectBase", "<html><head/><body><p>This is the SQL query editor. You can edit here an SQL query referring to any existing vector layers or embedded layers.</p><p>Virtual layers rely on SQLite and SpatiaLite. Any functions from SQLite or SpatiaLite can then be used in the query. To add or access geometries of a table, you can use \"tablename.geometry\", regardless of original geometry column's name.</p><p><span style=\" font-weight:600;\">Special comments:</span></p><p>Because it is not always possible to autodetect the data type of each column in a query, special comments can be used in the query to force a specific type.</p><p>Special comments must be placed on the right of a column name and have the form <tt>/*:type*/</tt> where type can be any of <span style=\" font-style:italic;\">int</span>, <span style=\" font-style:italic;\">real</span> or <span style=\" font-style:italic;\">text</span>. They can also be used to specify the type and SRID of the geometry column with the following syntax: <tt>/*:gtype:srid*/</tt> wher"
                        "e <span style=\" font-style:italic;\">gtype</span> can be <span style=\" font-style:italic;\">point</span>, <span style=\" font-style:italic;\">linestring</span> or <span style=\" font-style:italic;\">polygon</span> (with an optional <span style=\" font-style:italic;\">multi</span> prefix) and <span style=\" font-style:italic;\">srid</span> is an integer identifier.</p><p>Example:</p><p><tt>SELECT id + 1 as id /*:int*/, ST_Centroid(geometry) as geom /*:point:4326*/ FROM tab</tt></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mUIDColumnNameChck->setText(QApplication::translate("QgsVirtualLayerSourceSelectBase", "Unique identifier column", Q_NULLPTR));
        mUIDField->setText(QString());
        mGeometryGroup->setTitle(QApplication::translate("QgsVirtualLayerSourceSelectBase", "Geometry", Q_NULLPTR));
        mAutodetectGeometryRadio->setText(QApplication::translate("QgsVirtualLayerSourceSelectBase", "Autodetect", Q_NULLPTR));
        mNoGeometryRadio->setText(QApplication::translate("QgsVirtualLayerSourceSelectBase", "No geometry", Q_NULLPTR));
        mGeometryRadio->setText(QString());
        label->setText(QApplication::translate("QgsVirtualLayerSourceSelectBase", "Geometry column", Q_NULLPTR));
        mGeometryField->setText(QApplication::translate("QgsVirtualLayerSourceSelectBase", "geometry", Q_NULLPTR));
        label_3->setText(QApplication::translate("QgsVirtualLayerSourceSelectBase", "Type", Q_NULLPTR));
        mGeometryType->clear();
        mGeometryType->insertItems(0, QStringList()
         << QApplication::translate("QgsVirtualLayerSourceSelectBase", "Point", Q_NULLPTR)
         << QApplication::translate("QgsVirtualLayerSourceSelectBase", "LineString", Q_NULLPTR)
         << QApplication::translate("QgsVirtualLayerSourceSelectBase", "Polygon", Q_NULLPTR)
         << QApplication::translate("QgsVirtualLayerSourceSelectBase", "MultiPoint", Q_NULLPTR)
         << QApplication::translate("QgsVirtualLayerSourceSelectBase", "MultiLineString", Q_NULLPTR)
         << QApplication::translate("QgsVirtualLayerSourceSelectBase", "MultiPolygon", Q_NULLPTR)
        );
        label_5->setText(QApplication::translate("QgsVirtualLayerSourceSelectBase", "CRS", Q_NULLPTR));
        mBrowseCRSBtn->setText(QApplication::translate("QgsVirtualLayerSourceSelectBase", "\342\200\246", Q_NULLPTR));
        mTestButton->setText(QApplication::translate("QgsVirtualLayerSourceSelectBase", "Test", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsVirtualLayerSourceSelectBase: public Ui_QgsVirtualLayerSourceSelectBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSVIRTUALLAYERSOURCESELECTBASE_H
