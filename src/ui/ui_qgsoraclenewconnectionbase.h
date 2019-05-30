/********************************************************************************
** Form generated from reading UI file 'qgsoraclenewconnectionbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSORACLENEWCONNECTIONBASE_H
#define UI_QGSORACLENEWCONNECTIONBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include "qgsfilterlineedit.h"
#include "qgsmessagebar.h"
#include "qgspasswordlineedit.h"

QT_BEGIN_NAMESPACE

class Ui_QgsOracleNewConnectionBase
{
public:
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;
    QGroupBox *GroupBox1;
    QGridLayout *gridLayout_1;
    QLabel *TextLabel3;
    QLineEdit *txtDatabase;
    QLineEdit *txtPort;
    QLineEdit *txtName;
    QgsPasswordLineEdit *txtPassword;
    QLineEdit *txtOptions;
    QCheckBox *chkStorePassword;
    QLineEdit *txtHost;
    QCheckBox *cb_geometryColumnsOnly;
    QLabel *TextLabel3_4;
    QLabel *label;
    QPushButton *btnConnect;
    QCheckBox *chkStoreUsername;
    QCheckBox *cb_onlyExistingTypes;
    QLineEdit *txtUsername;
    QCheckBox *cb_userTablesOnly;
    QLineEdit *txtWorkspace;
    QLabel *TextLabel3_3;
    QCheckBox *cb_useEstimatedMetadata;
    QLabel *TextLabel2_2;
    QCheckBox *cb_includeGeoAttributes;
    QLabel *TextLabel3_2;
    QCheckBox *cb_allowGeometrylessTables;
    QLabel *TextLabel1_2;
    QLabel *TextLabel1;
    QLabel *TextLabel3_5;
    QgsFilterLineEdit *txtSchema;
    QgsMessageBar *bar;

    void setupUi(QDialog *QgsOracleNewConnectionBase)
    {
        if (QgsOracleNewConnectionBase->objectName().isEmpty())
            QgsOracleNewConnectionBase->setObjectName(QStringLiteral("QgsOracleNewConnectionBase"));
        QgsOracleNewConnectionBase->resize(400, 637);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsOracleNewConnectionBase->sizePolicy().hasHeightForWidth());
        QgsOracleNewConnectionBase->setSizePolicy(sizePolicy);
        QgsOracleNewConnectionBase->setSizeGripEnabled(true);
        QgsOracleNewConnectionBase->setModal(true);
        gridLayout = new QGridLayout(QgsOracleNewConnectionBase);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(9, 9, 9, 9);
        buttonBox = new QDialogButtonBox(QgsOracleNewConnectionBase);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 0, 1, 1);

        GroupBox1 = new QGroupBox(QgsOracleNewConnectionBase);
        GroupBox1->setObjectName(QStringLiteral("GroupBox1"));
        gridLayout_1 = new QGridLayout(GroupBox1);
        gridLayout_1->setSpacing(6);
        gridLayout_1->setContentsMargins(11, 11, 11, 11);
        gridLayout_1->setObjectName(QStringLiteral("gridLayout_1"));
        TextLabel3 = new QLabel(GroupBox1);
        TextLabel3->setObjectName(QStringLiteral("TextLabel3"));

        gridLayout_1->addWidget(TextLabel3, 4, 0, 1, 1);

        txtDatabase = new QLineEdit(GroupBox1);
        txtDatabase->setObjectName(QStringLiteral("txtDatabase"));

        gridLayout_1->addWidget(txtDatabase, 1, 1, 1, 2);

        txtPort = new QLineEdit(GroupBox1);
        txtPort->setObjectName(QStringLiteral("txtPort"));

        gridLayout_1->addWidget(txtPort, 3, 1, 1, 2);

        txtName = new QLineEdit(GroupBox1);
        txtName->setObjectName(QStringLiteral("txtName"));

        gridLayout_1->addWidget(txtName, 0, 1, 1, 2);

        txtPassword = new QgsPasswordLineEdit(GroupBox1);
        txtPassword->setObjectName(QStringLiteral("txtPassword"));
        txtPassword->setEchoMode(QLineEdit::Password);

        gridLayout_1->addWidget(txtPassword, 5, 1, 1, 2);

        txtOptions = new QLineEdit(GroupBox1);
        txtOptions->setObjectName(QStringLiteral("txtOptions"));
        txtOptions->setEchoMode(QLineEdit::Normal);

        gridLayout_1->addWidget(txtOptions, 6, 1, 1, 2);

        chkStorePassword = new QCheckBox(GroupBox1);
        chkStorePassword->setObjectName(QStringLiteral("chkStorePassword"));

        gridLayout_1->addWidget(chkStorePassword, 10, 0, 1, 2);

        txtHost = new QLineEdit(GroupBox1);
        txtHost->setObjectName(QStringLiteral("txtHost"));

        gridLayout_1->addWidget(txtHost, 2, 1, 1, 2);

        cb_geometryColumnsOnly = new QCheckBox(GroupBox1);
        cb_geometryColumnsOnly->setObjectName(QStringLiteral("cb_geometryColumnsOnly"));

        gridLayout_1->addWidget(cb_geometryColumnsOnly, 11, 0, 1, 3);

        TextLabel3_4 = new QLabel(GroupBox1);
        TextLabel3_4->setObjectName(QStringLiteral("TextLabel3_4"));

        gridLayout_1->addWidget(TextLabel3_4, 7, 0, 1, 1);

        label = new QLabel(GroupBox1);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_1->addWidget(label, 1, 0, 1, 1);

        btnConnect = new QPushButton(GroupBox1);
        btnConnect->setObjectName(QStringLiteral("btnConnect"));

        gridLayout_1->addWidget(btnConnect, 9, 2, 2, 1);

        chkStoreUsername = new QCheckBox(GroupBox1);
        chkStoreUsername->setObjectName(QStringLiteral("chkStoreUsername"));

        gridLayout_1->addWidget(chkStoreUsername, 9, 0, 1, 2);

        cb_onlyExistingTypes = new QCheckBox(GroupBox1);
        cb_onlyExistingTypes->setObjectName(QStringLiteral("cb_onlyExistingTypes"));

        gridLayout_1->addWidget(cb_onlyExistingTypes, 15, 0, 1, 3);

        txtUsername = new QLineEdit(GroupBox1);
        txtUsername->setObjectName(QStringLiteral("txtUsername"));

        gridLayout_1->addWidget(txtUsername, 4, 1, 1, 2);

        cb_userTablesOnly = new QCheckBox(GroupBox1);
        cb_userTablesOnly->setObjectName(QStringLiteral("cb_userTablesOnly"));

        gridLayout_1->addWidget(cb_userTablesOnly, 12, 0, 1, 3);

        txtWorkspace = new QLineEdit(GroupBox1);
        txtWorkspace->setObjectName(QStringLiteral("txtWorkspace"));
        txtWorkspace->setEchoMode(QLineEdit::Normal);

        gridLayout_1->addWidget(txtWorkspace, 7, 1, 1, 2);

        TextLabel3_3 = new QLabel(GroupBox1);
        TextLabel3_3->setObjectName(QStringLiteral("TextLabel3_3"));

        gridLayout_1->addWidget(TextLabel3_3, 6, 0, 1, 1);

        cb_useEstimatedMetadata = new QCheckBox(GroupBox1);
        cb_useEstimatedMetadata->setObjectName(QStringLiteral("cb_useEstimatedMetadata"));

        gridLayout_1->addWidget(cb_useEstimatedMetadata, 14, 0, 1, 3);

        TextLabel2_2 = new QLabel(GroupBox1);
        TextLabel2_2->setObjectName(QStringLiteral("TextLabel2_2"));

        gridLayout_1->addWidget(TextLabel2_2, 3, 0, 1, 1);

        cb_includeGeoAttributes = new QCheckBox(GroupBox1);
        cb_includeGeoAttributes->setObjectName(QStringLiteral("cb_includeGeoAttributes"));

        gridLayout_1->addWidget(cb_includeGeoAttributes, 16, 0, 1, 3);

        TextLabel3_2 = new QLabel(GroupBox1);
        TextLabel3_2->setObjectName(QStringLiteral("TextLabel3_2"));

        gridLayout_1->addWidget(TextLabel3_2, 5, 0, 1, 1);

        cb_allowGeometrylessTables = new QCheckBox(GroupBox1);
        cb_allowGeometrylessTables->setObjectName(QStringLiteral("cb_allowGeometrylessTables"));
        cb_allowGeometrylessTables->setChecked(false);

        gridLayout_1->addWidget(cb_allowGeometrylessTables, 13, 0, 1, 3);

        TextLabel1_2 = new QLabel(GroupBox1);
        TextLabel1_2->setObjectName(QStringLiteral("TextLabel1_2"));

        gridLayout_1->addWidget(TextLabel1_2, 0, 0, 1, 1);

        TextLabel1 = new QLabel(GroupBox1);
        TextLabel1->setObjectName(QStringLiteral("TextLabel1"));

        gridLayout_1->addWidget(TextLabel1, 2, 0, 1, 1);

        TextLabel3_5 = new QLabel(GroupBox1);
        TextLabel3_5->setObjectName(QStringLiteral("TextLabel3_5"));

        gridLayout_1->addWidget(TextLabel3_5, 8, 0, 1, 1);

        txtSchema = new QgsFilterLineEdit(GroupBox1);
        txtSchema->setObjectName(QStringLiteral("txtSchema"));
        txtSchema->setEchoMode(QLineEdit::Normal);

        gridLayout_1->addWidget(txtSchema, 8, 1, 1, 2);


        gridLayout->addWidget(GroupBox1, 1, 0, 1, 1);

        bar = new QgsMessageBar(QgsOracleNewConnectionBase);
        bar->setObjectName(QStringLiteral("bar"));

        gridLayout->addWidget(bar, 0, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        TextLabel3->setBuddy(txtUsername);
        TextLabel3_4->setBuddy(txtPassword);
        label->setBuddy(txtDatabase);
        TextLabel3_3->setBuddy(txtPassword);
        TextLabel2_2->setBuddy(txtPort);
        TextLabel3_2->setBuddy(txtPassword);
        TextLabel1_2->setBuddy(txtName);
        TextLabel1->setBuddy(txtHost);
        TextLabel3_5->setBuddy(txtPassword);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(txtName, txtDatabase);
        QWidget::setTabOrder(txtDatabase, txtHost);
        QWidget::setTabOrder(txtHost, txtPort);
        QWidget::setTabOrder(txtPort, txtUsername);
        QWidget::setTabOrder(txtUsername, txtPassword);
        QWidget::setTabOrder(txtPassword, txtOptions);
        QWidget::setTabOrder(txtOptions, txtWorkspace);
        QWidget::setTabOrder(txtWorkspace, txtSchema);
        QWidget::setTabOrder(txtSchema, chkStoreUsername);
        QWidget::setTabOrder(chkStoreUsername, chkStorePassword);
        QWidget::setTabOrder(chkStorePassword, btnConnect);
        QWidget::setTabOrder(btnConnect, cb_geometryColumnsOnly);
        QWidget::setTabOrder(cb_geometryColumnsOnly, cb_userTablesOnly);
        QWidget::setTabOrder(cb_userTablesOnly, cb_allowGeometrylessTables);
        QWidget::setTabOrder(cb_allowGeometrylessTables, cb_useEstimatedMetadata);
        QWidget::setTabOrder(cb_useEstimatedMetadata, cb_onlyExistingTypes);
        QWidget::setTabOrder(cb_onlyExistingTypes, cb_includeGeoAttributes);

        retranslateUi(QgsOracleNewConnectionBase);
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsOracleNewConnectionBase, SLOT(reject()));
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsOracleNewConnectionBase, SLOT(accept()));

        QMetaObject::connectSlotsByName(QgsOracleNewConnectionBase);
    } // setupUi

    void retranslateUi(QDialog *QgsOracleNewConnectionBase)
    {
        QgsOracleNewConnectionBase->setWindowTitle(QApplication::translate("QgsOracleNewConnectionBase", "Create a New Oracle Connection", Q_NULLPTR));
        GroupBox1->setTitle(QApplication::translate("QgsOracleNewConnectionBase", "Connection Information", Q_NULLPTR));
        TextLabel3->setText(QApplication::translate("QgsOracleNewConnectionBase", "Username", Q_NULLPTR));
        txtPort->setText(QApplication::translate("QgsOracleNewConnectionBase", "1521", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        txtName->setToolTip(QApplication::translate("QgsOracleNewConnectionBase", "Name of the new connection", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        chkStorePassword->setText(QApplication::translate("QgsOracleNewConnectionBase", "Save password", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        cb_geometryColumnsOnly->setToolTip(QApplication::translate("QgsOracleNewConnectionBase", "Restrict the displayed tables to those that are in the all_sdo_geom_metadata table", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        cb_geometryColumnsOnly->setWhatsThis(QApplication::translate("QgsOracleNewConnectionBase", "<html><head/><body><p>Restricts the displayed tables to those that are in the all_sdo_geom_metadata view. This can speed up the initial display of spatial tables.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        cb_geometryColumnsOnly->setText(QApplication::translate("QgsOracleNewConnectionBase", "Only look in metadata table", Q_NULLPTR));
        TextLabel3_4->setText(QApplication::translate("QgsOracleNewConnectionBase", "Workspace", Q_NULLPTR));
        label->setText(QApplication::translate("QgsOracleNewConnectionBase", "Database", Q_NULLPTR));
        btnConnect->setText(QApplication::translate("QgsOracleNewConnectionBase", "&Test Connect", Q_NULLPTR));
        chkStoreUsername->setText(QApplication::translate("QgsOracleNewConnectionBase", "Save username", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        cb_onlyExistingTypes->setToolTip(QApplication::translate("QgsOracleNewConnectionBase", "Only list the existing geometry types and don't offer to add others.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        cb_onlyExistingTypes->setWhatsThis(QApplication::translate("QgsOracleNewConnectionBase", "<html><head/><body><p>When the layer is setup various metadata is required for the Oracle table. This includes information such as the table row count, geometry type and spatial extents of the data in the geometry column. If the table contains a large number of rows determining this metadata is time consuming.</p><p>By activating this option the following fast table metadata operations are done:</p><p>1) Row count is determined from all_tables.num_rows.</p><p>2) Table extents are always determined with the SDO_TUNE.EXTENTS_OF function even if a layer filter is applied.</p><p>3) The table geometry is determined from the first 100 non-null geometry rows in the table.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        cb_onlyExistingTypes->setText(QApplication::translate("QgsOracleNewConnectionBase", "Only existing geometry types", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        cb_userTablesOnly->setToolTip(QApplication::translate("QgsOracleNewConnectionBase", "When searching for spatial tables restrict the search to tables that are owned by the user.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        cb_userTablesOnly->setWhatsThis(QApplication::translate("QgsOracleNewConnectionBase", "<html><head/><body><p>When searching for spatial tables restrict the search to tables that are owned by the user.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        cb_userTablesOnly->setText(QApplication::translate("QgsOracleNewConnectionBase", "Only look for user's tables", Q_NULLPTR));
        TextLabel3_3->setText(QApplication::translate("QgsOracleNewConnectionBase", "Options", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        cb_useEstimatedMetadata->setToolTip(QApplication::translate("QgsOracleNewConnectionBase", "Use estimated table statistics for the layer metadata.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        cb_useEstimatedMetadata->setWhatsThis(QApplication::translate("QgsOracleNewConnectionBase", "<html><head/><body><p>When the layer is setup various metadata is required for the Oracle table. This includes information such as the table row count, geometry type and spatial extents of the data in the geometry column. If the table contains a large number of rows determining this metadata is time consuming.</p><p>By activating this option the following fast table metadata operations are done:</p><p>1) Row count is determined from all_tables.num_rows.</p><p>2) Table extents are always determined with the SDO_TUNE.EXTENTS_OF function even if a layer filter is applied.</p><p>3) The table geometry is determined from the first 100 non-null geometry rows in the table.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        cb_useEstimatedMetadata->setText(QApplication::translate("QgsOracleNewConnectionBase", "Use estimated table metadata", Q_NULLPTR));
        TextLabel2_2->setText(QApplication::translate("QgsOracleNewConnectionBase", "Port", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        cb_includeGeoAttributes->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        cb_includeGeoAttributes->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        cb_includeGeoAttributes->setText(QApplication::translate("QgsOracleNewConnectionBase", "Include additional geometry attributes", Q_NULLPTR));
        TextLabel3_2->setText(QApplication::translate("QgsOracleNewConnectionBase", "Password", Q_NULLPTR));
        cb_allowGeometrylessTables->setText(QApplication::translate("QgsOracleNewConnectionBase", "Also list tables with no geometry", Q_NULLPTR));
        TextLabel1_2->setText(QApplication::translate("QgsOracleNewConnectionBase", "Name", Q_NULLPTR));
        TextLabel1->setText(QApplication::translate("QgsOracleNewConnectionBase", "Host", Q_NULLPTR));
        TextLabel3_5->setText(QApplication::translate("QgsOracleNewConnectionBase", "Schema", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        txtSchema->setToolTip(QApplication::translate("QgsOracleNewConnectionBase", "If specified, only tables from the matching schema will be fetched and listed for the provider", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class QgsOracleNewConnectionBase: public Ui_QgsOracleNewConnectionBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSORACLENEWCONNECTIONBASE_H
