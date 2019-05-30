/********************************************************************************
** Form generated from reading UI file 'qgswmssourceselectbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSWMSSOURCESELECTBASE_H
#define UI_QGSWMSSOURCESELECTBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsWMSSourceSelectBase
{
public:
    QGridLayout *gridLayout_2;
    QDialogButtonBox *buttonBox;
    QLabel *labelStatus;
    QTabWidget *tabServers;
    QWidget *tabLayers;
    QGridLayout *gridLayout;
    QComboBox *cmbConnections;
    QPushButton *btnConnect;
    QPushButton *btnNew;
    QPushButton *btnEdit;
    QPushButton *btnDelete;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btnAddDefault;
    QTreeWidget *lstLayers;
    QGroupBox *btnGrpImageEncoding;
    QPushButton *btnSave;
    QPushButton *btnLoad;
    QGroupBox *gbCRS;
    QGridLayout *gridLayout1;
    QLabel *label_2;
    QCheckBox *mContextualLegendCheckbox;
    QLabel *label_3;
    QLineEdit *mTileWidth;
    QLineEdit *mFeatureCount;
    QPushButton *btnChangeSpatialRefSys;
    QLabel *labelCoordRefSys;
    QLineEdit *mTileHeight;
    QLabel *label_4;
    QLineEdit *mStepWidth;
    QLineEdit *mStepHeight;
    QWidget *tabLayerOrder;
    QGridLayout *gridLayout2;
    QPushButton *mLayerUpButton;
    QPushButton *mLayerDownButton;
    QSpacerItem *spacerItem;
    QTreeWidget *mLayerOrderTreeWidget;
    QWidget *tabTilesets;
    QGridLayout *gridLayout_3;
    QTableWidget *lstTilesets;
    QWidget *tabServerSearch;
    QGridLayout *gridLayout3;
    QLineEdit *leSearchTerm;
    QPushButton *btnSearch;
    QTableWidget *tableWidgetWMSList;
    QPushButton *btnAddWMS;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *leLayerName;

    void setupUi(QDialog *QgsWMSSourceSelectBase)
    {
        if (QgsWMSSourceSelectBase->objectName().isEmpty())
            QgsWMSSourceSelectBase->setObjectName(QStringLiteral("QgsWMSSourceSelectBase"));
        QgsWMSSourceSelectBase->resize(773, 544);
        QIcon icon;
        icon.addFile(QStringLiteral("."), QSize(), QIcon::Normal, QIcon::Off);
        QgsWMSSourceSelectBase->setWindowIcon(icon);
        QgsWMSSourceSelectBase->setSizeGripEnabled(true);
        QgsWMSSourceSelectBase->setModal(true);
        gridLayout_2 = new QGridLayout(QgsWMSSourceSelectBase);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        buttonBox = new QDialogButtonBox(QgsWMSSourceSelectBase);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Help);

        gridLayout_2->addWidget(buttonBox, 3, 0, 1, 1);

        labelStatus = new QLabel(QgsWMSSourceSelectBase);
        labelStatus->setObjectName(QStringLiteral("labelStatus"));
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelStatus->sizePolicy().hasHeightForWidth());
        labelStatus->setSizePolicy(sizePolicy);
        labelStatus->setWordWrap(false);

        gridLayout_2->addWidget(labelStatus, 2, 0, 1, 1);

        tabServers = new QTabWidget(QgsWMSSourceSelectBase);
        tabServers->setObjectName(QStringLiteral("tabServers"));
        tabServers->setEnabled(true);
        tabLayers = new QWidget();
        tabLayers->setObjectName(QStringLiteral("tabLayers"));
        gridLayout = new QGridLayout(tabLayers);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        cmbConnections = new QComboBox(tabLayers);
        cmbConnections->setObjectName(QStringLiteral("cmbConnections"));

        gridLayout->addWidget(cmbConnections, 0, 0, 1, 12);

        btnConnect = new QPushButton(tabLayers);
        btnConnect->setObjectName(QStringLiteral("btnConnect"));
        btnConnect->setEnabled(false);

        gridLayout->addWidget(btnConnect, 1, 0, 1, 2);

        btnNew = new QPushButton(tabLayers);
        btnNew->setObjectName(QStringLiteral("btnNew"));

        gridLayout->addWidget(btnNew, 1, 2, 1, 2);

        btnEdit = new QPushButton(tabLayers);
        btnEdit->setObjectName(QStringLiteral("btnEdit"));
        btnEdit->setEnabled(false);

        gridLayout->addWidget(btnEdit, 1, 4, 1, 1);

        btnDelete = new QPushButton(tabLayers);
        btnDelete->setObjectName(QStringLiteral("btnDelete"));
        btnDelete->setEnabled(false);

        gridLayout->addWidget(btnDelete, 1, 5, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(8, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 7, 1, 1);

        btnAddDefault = new QPushButton(tabLayers);
        btnAddDefault->setObjectName(QStringLiteral("btnAddDefault"));

        gridLayout->addWidget(btnAddDefault, 1, 11, 1, 1);

        lstLayers = new QTreeWidget(tabLayers);
        lstLayers->setObjectName(QStringLiteral("lstLayers"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lstLayers->sizePolicy().hasHeightForWidth());
        lstLayers->setSizePolicy(sizePolicy1);
        lstLayers->setSelectionMode(QAbstractItemView::ExtendedSelection);
        lstLayers->setAllColumnsShowFocus(true);

        gridLayout->addWidget(lstLayers, 2, 0, 1, 12);

        btnGrpImageEncoding = new QGroupBox(tabLayers);
        btnGrpImageEncoding->setObjectName(QStringLiteral("btnGrpImageEncoding"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(btnGrpImageEncoding->sizePolicy().hasHeightForWidth());
        btnGrpImageEncoding->setSizePolicy(sizePolicy2);
        btnGrpImageEncoding->setMinimumSize(QSize(16, 64));

        gridLayout->addWidget(btnGrpImageEncoding, 3, 0, 1, 12);

        btnSave = new QPushButton(tabLayers);
        btnSave->setObjectName(QStringLiteral("btnSave"));

        gridLayout->addWidget(btnSave, 1, 9, 1, 1);

        btnLoad = new QPushButton(tabLayers);
        btnLoad->setObjectName(QStringLiteral("btnLoad"));

        gridLayout->addWidget(btnLoad, 1, 8, 1, 1);

        gbCRS = new QGroupBox(tabLayers);
        gbCRS->setObjectName(QStringLiteral("gbCRS"));
        gridLayout1 = new QGridLayout(gbCRS);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(11, 11, 11, 11);
        gridLayout1->setObjectName(QStringLiteral("gridLayout1"));
        label_2 = new QLabel(gbCRS);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout1->addWidget(label_2, 1, 0, 1, 1);

        mContextualLegendCheckbox = new QCheckBox(gbCRS);
        mContextualLegendCheckbox->setObjectName(QStringLiteral("mContextualLegendCheckbox"));

        gridLayout1->addWidget(mContextualLegendCheckbox, 5, 0, 1, 1);

        label_3 = new QLabel(gbCRS);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout1->addWidget(label_3, 3, 0, 1, 2);

        mTileWidth = new QLineEdit(gbCRS);
        mTileWidth->setObjectName(QStringLiteral("mTileWidth"));

        gridLayout1->addWidget(mTileWidth, 1, 1, 1, 1);

        mFeatureCount = new QLineEdit(gbCRS);
        mFeatureCount->setObjectName(QStringLiteral("mFeatureCount"));

        gridLayout1->addWidget(mFeatureCount, 3, 2, 1, 1);

        btnChangeSpatialRefSys = new QPushButton(gbCRS);
        btnChangeSpatialRefSys->setObjectName(QStringLiteral("btnChangeSpatialRefSys"));
        btnChangeSpatialRefSys->setEnabled(false);

        gridLayout1->addWidget(btnChangeSpatialRefSys, 4, 2, 1, 1);

        labelCoordRefSys = new QLabel(gbCRS);
        labelCoordRefSys->setObjectName(QStringLiteral("labelCoordRefSys"));

        gridLayout1->addWidget(labelCoordRefSys, 4, 0, 1, 2);

        mTileHeight = new QLineEdit(gbCRS);
        mTileHeight->setObjectName(QStringLiteral("mTileHeight"));

        gridLayout1->addWidget(mTileHeight, 1, 2, 1, 1);

        label_4 = new QLabel(gbCRS);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout1->addWidget(label_4, 2, 0, 1, 1);

        mStepWidth = new QLineEdit(gbCRS);
        mStepWidth->setObjectName(QStringLiteral("mStepWidth"));

        gridLayout1->addWidget(mStepWidth, 2, 1, 1, 1);

        mStepHeight = new QLineEdit(gbCRS);
        mStepHeight->setObjectName(QStringLiteral("mStepHeight"));

        gridLayout1->addWidget(mStepHeight, 2, 2, 1, 1);


        gridLayout->addWidget(gbCRS, 4, 0, 1, 12);

        tabServers->addTab(tabLayers, QString());
        tabLayerOrder = new QWidget();
        tabLayerOrder->setObjectName(QStringLiteral("tabLayerOrder"));
        gridLayout2 = new QGridLayout(tabLayerOrder);
        gridLayout2->setSpacing(6);
        gridLayout2->setContentsMargins(11, 11, 11, 11);
        gridLayout2->setObjectName(QStringLiteral("gridLayout2"));
        mLayerUpButton = new QPushButton(tabLayerOrder);
        mLayerUpButton->setObjectName(QStringLiteral("mLayerUpButton"));

        gridLayout2->addWidget(mLayerUpButton, 0, 0, 1, 1);

        mLayerDownButton = new QPushButton(tabLayerOrder);
        mLayerDownButton->setObjectName(QStringLiteral("mLayerDownButton"));

        gridLayout2->addWidget(mLayerDownButton, 0, 1, 1, 1);

        spacerItem = new QSpacerItem(391, 30, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout2->addItem(spacerItem, 0, 2, 1, 1);

        mLayerOrderTreeWidget = new QTreeWidget(tabLayerOrder);
        mLayerOrderTreeWidget->setObjectName(QStringLiteral("mLayerOrderTreeWidget"));
        mLayerOrderTreeWidget->setColumnCount(3);

        gridLayout2->addWidget(mLayerOrderTreeWidget, 1, 0, 1, 3);

        tabServers->addTab(tabLayerOrder, QString());
        tabTilesets = new QWidget();
        tabTilesets->setObjectName(QStringLiteral("tabTilesets"));
        gridLayout_3 = new QGridLayout(tabTilesets);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        lstTilesets = new QTableWidget(tabTilesets);
        if (lstTilesets->columnCount() < 6)
            lstTilesets->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        lstTilesets->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        lstTilesets->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        lstTilesets->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        lstTilesets->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        lstTilesets->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        lstTilesets->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        lstTilesets->setObjectName(QStringLiteral("lstTilesets"));
        lstTilesets->setAlternatingRowColors(true);
        lstTilesets->setSelectionMode(QAbstractItemView::SingleSelection);
        lstTilesets->setSelectionBehavior(QAbstractItemView::SelectRows);
        lstTilesets->setCornerButtonEnabled(false);
        lstTilesets->verticalHeader()->setVisible(false);

        gridLayout_3->addWidget(lstTilesets, 0, 0, 1, 1);

        tabServers->addTab(tabTilesets, QString());
        tabServerSearch = new QWidget();
        tabServerSearch->setObjectName(QStringLiteral("tabServerSearch"));
        gridLayout3 = new QGridLayout(tabServerSearch);
        gridLayout3->setSpacing(6);
        gridLayout3->setContentsMargins(11, 11, 11, 11);
        gridLayout3->setObjectName(QStringLiteral("gridLayout3"));
        leSearchTerm = new QLineEdit(tabServerSearch);
        leSearchTerm->setObjectName(QStringLiteral("leSearchTerm"));

        gridLayout3->addWidget(leSearchTerm, 0, 0, 1, 1);

        btnSearch = new QPushButton(tabServerSearch);
        btnSearch->setObjectName(QStringLiteral("btnSearch"));

        gridLayout3->addWidget(btnSearch, 0, 1, 1, 1);

        tableWidgetWMSList = new QTableWidget(tabServerSearch);
        if (tableWidgetWMSList->columnCount() < 3)
            tableWidgetWMSList->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidgetWMSList->setHorizontalHeaderItem(0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidgetWMSList->setHorizontalHeaderItem(1, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidgetWMSList->setHorizontalHeaderItem(2, __qtablewidgetitem8);
        tableWidgetWMSList->setObjectName(QStringLiteral("tableWidgetWMSList"));
        tableWidgetWMSList->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidgetWMSList->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidgetWMSList->setCornerButtonEnabled(false);
        tableWidgetWMSList->verticalHeader()->setVisible(false);

        gridLayout3->addWidget(tableWidgetWMSList, 1, 0, 1, 2);

        btnAddWMS = new QPushButton(tabServerSearch);
        btnAddWMS->setObjectName(QStringLiteral("btnAddWMS"));

        gridLayout3->addWidget(btnAddWMS, 2, 0, 1, 2);

        tabServers->addTab(tabServerSearch, QString());

        gridLayout_2->addWidget(tabServers, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(QgsWMSSourceSelectBase);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        leLayerName = new QLineEdit(QgsWMSSourceSelectBase);
        leLayerName->setObjectName(QStringLiteral("leLayerName"));

        horizontalLayout->addWidget(leLayerName);


        gridLayout_2->addLayout(horizontalLayout, 1, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        label_2->setBuddy(mTileWidth);
        label_3->setBuddy(mFeatureCount);
        labelCoordRefSys->setBuddy(btnChangeSpatialRefSys);
        label_4->setBuddy(mTileWidth);
        label->setBuddy(leLayerName);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(tabServers, cmbConnections);
        QWidget::setTabOrder(cmbConnections, btnConnect);
        QWidget::setTabOrder(btnConnect, btnNew);
        QWidget::setTabOrder(btnNew, btnEdit);
        QWidget::setTabOrder(btnEdit, btnDelete);
        QWidget::setTabOrder(btnDelete, btnLoad);
        QWidget::setTabOrder(btnLoad, btnSave);
        QWidget::setTabOrder(btnSave, btnAddDefault);
        QWidget::setTabOrder(btnAddDefault, lstLayers);
        QWidget::setTabOrder(lstLayers, mTileWidth);
        QWidget::setTabOrder(mTileWidth, mTileHeight);
        QWidget::setTabOrder(mTileHeight, mStepWidth);
        QWidget::setTabOrder(mStepWidth, mStepHeight);
        QWidget::setTabOrder(mStepHeight, mFeatureCount);
        QWidget::setTabOrder(mFeatureCount, btnChangeSpatialRefSys);
        QWidget::setTabOrder(btnChangeSpatialRefSys, mContextualLegendCheckbox);
        QWidget::setTabOrder(mContextualLegendCheckbox, leLayerName);
        QWidget::setTabOrder(leLayerName, lstTilesets);
        QWidget::setTabOrder(lstTilesets, leSearchTerm);
        QWidget::setTabOrder(leSearchTerm, btnSearch);
        QWidget::setTabOrder(btnSearch, tableWidgetWMSList);
        QWidget::setTabOrder(tableWidgetWMSList, btnAddWMS);
        QWidget::setTabOrder(btnAddWMS, mLayerOrderTreeWidget);
        QWidget::setTabOrder(mLayerOrderTreeWidget, mLayerDownButton);
        QWidget::setTabOrder(mLayerDownButton, mLayerUpButton);

        retranslateUi(QgsWMSSourceSelectBase);
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsWMSSourceSelectBase, SLOT(reject()));

        tabServers->setCurrentIndex(0);
        btnSearch->setDefault(true);


        QMetaObject::connectSlotsByName(QgsWMSSourceSelectBase);
    } // setupUi

    void retranslateUi(QDialog *QgsWMSSourceSelectBase)
    {
        QgsWMSSourceSelectBase->setWindowTitle(QApplication::translate("QgsWMSSourceSelectBase", "Add Layer(s) from a WM(T)S Server", Q_NULLPTR));
        labelStatus->setText(QApplication::translate("QgsWMSSourceSelectBase", "Ready", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnConnect->setToolTip(QApplication::translate("QgsWMSSourceSelectBase", "Connect to selected service", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnConnect->setText(QApplication::translate("QgsWMSSourceSelectBase", "C&onnect", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnNew->setToolTip(QApplication::translate("QgsWMSSourceSelectBase", "Create a new service connection", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnNew->setText(QApplication::translate("QgsWMSSourceSelectBase", "&New", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnEdit->setToolTip(QApplication::translate("QgsWMSSourceSelectBase", "Edit selected service connection", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnEdit->setText(QApplication::translate("QgsWMSSourceSelectBase", "Edit", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnDelete->setToolTip(QApplication::translate("QgsWMSSourceSelectBase", "Remove connection to selected service", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnDelete->setText(QApplication::translate("QgsWMSSourceSelectBase", "Remove", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        btnAddDefault->setStatusTip(QApplication::translate("QgsWMSSourceSelectBase", "Adds a few example WMS servers", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        btnAddDefault->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        btnAddDefault->setText(QApplication::translate("QgsWMSSourceSelectBase", "Add Default Servers", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = lstLayers->headerItem();
        ___qtreewidgetitem->setText(3, QApplication::translate("QgsWMSSourceSelectBase", "Abstract", Q_NULLPTR));
        ___qtreewidgetitem->setText(2, QApplication::translate("QgsWMSSourceSelectBase", "Title", Q_NULLPTR));
        ___qtreewidgetitem->setText(1, QApplication::translate("QgsWMSSourceSelectBase", "Name", Q_NULLPTR));
        ___qtreewidgetitem->setText(0, QApplication::translate("QgsWMSSourceSelectBase", "ID", Q_NULLPTR));
        btnGrpImageEncoding->setTitle(QApplication::translate("QgsWMSSourceSelectBase", "Image Encoding", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnSave->setToolTip(QApplication::translate("QgsWMSSourceSelectBase", "Save connections to file", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnSave->setText(QApplication::translate("QgsWMSSourceSelectBase", "Save", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnLoad->setToolTip(QApplication::translate("QgsWMSSourceSelectBase", "Load connections from file", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnLoad->setText(QApplication::translate("QgsWMSSourceSelectBase", "Load", Q_NULLPTR));
        gbCRS->setTitle(QApplication::translate("QgsWMSSourceSelectBase", "Options", Q_NULLPTR));
        label_2->setText(QApplication::translate("QgsWMSSourceSelectBase", "Tile size", Q_NULLPTR));
        mContextualLegendCheckbox->setText(QApplication::translate("QgsWMSSourceSelectBase", "Use contextual WMS Legend", Q_NULLPTR));
        label_3->setText(QApplication::translate("QgsWMSSourceSelectBase", "Feature limit for GetFeatureInfo", Q_NULLPTR));
        mFeatureCount->setText(QApplication::translate("QgsWMSSourceSelectBase", "10", Q_NULLPTR));
        btnChangeSpatialRefSys->setText(QApplication::translate("QgsWMSSourceSelectBase", "Change\342\200\246", Q_NULLPTR));
        labelCoordRefSys->setText(QApplication::translate("QgsWMSSourceSelectBase", "Coordinate Reference System", Q_NULLPTR));
        label_4->setText(QApplication::translate("QgsWMSSourceSelectBase", "Request step size", Q_NULLPTR));
        tabServers->setTabText(tabServers->indexOf(tabLayers), QApplication::translate("QgsWMSSourceSelectBase", "Layers", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mLayerUpButton->setToolTip(QApplication::translate("QgsWMSSourceSelectBase", "Move selected layer UP", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mLayerUpButton->setText(QApplication::translate("QgsWMSSourceSelectBase", "Up", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mLayerDownButton->setToolTip(QApplication::translate("QgsWMSSourceSelectBase", "Move selected layer DOWN", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mLayerDownButton->setText(QApplication::translate("QgsWMSSourceSelectBase", "Down", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem1 = mLayerOrderTreeWidget->headerItem();
        ___qtreewidgetitem1->setText(2, QApplication::translate("QgsWMSSourceSelectBase", "Title", Q_NULLPTR));
        ___qtreewidgetitem1->setText(1, QApplication::translate("QgsWMSSourceSelectBase", "Style", Q_NULLPTR));
        ___qtreewidgetitem1->setText(0, QApplication::translate("QgsWMSSourceSelectBase", "Layer", Q_NULLPTR));
        tabServers->setTabText(tabServers->indexOf(tabLayerOrder), QApplication::translate("QgsWMSSourceSelectBase", "Layer Order", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = lstTilesets->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("QgsWMSSourceSelectBase", "Layer", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = lstTilesets->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("QgsWMSSourceSelectBase", "Format", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = lstTilesets->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("QgsWMSSourceSelectBase", "Title", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = lstTilesets->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("QgsWMSSourceSelectBase", "Style", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = lstTilesets->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("QgsWMSSourceSelectBase", "Tileset", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = lstTilesets->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("QgsWMSSourceSelectBase", "CRS", Q_NULLPTR));
        tabServers->setTabText(tabServers->indexOf(tabTilesets), QApplication::translate("QgsWMSSourceSelectBase", "Tilesets", Q_NULLPTR));
        btnSearch->setText(QApplication::translate("QgsWMSSourceSelectBase", "Search", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidgetWMSList->horizontalHeaderItem(0);
        ___qtablewidgetitem6->setText(QApplication::translate("QgsWMSSourceSelectBase", "Title", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidgetWMSList->horizontalHeaderItem(1);
        ___qtablewidgetitem7->setText(QApplication::translate("QgsWMSSourceSelectBase", "Description", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidgetWMSList->horizontalHeaderItem(2);
        ___qtablewidgetitem8->setText(QApplication::translate("QgsWMSSourceSelectBase", "URL", Q_NULLPTR));
        btnAddWMS->setText(QApplication::translate("QgsWMSSourceSelectBase", "Add Selected Row to WMS List", Q_NULLPTR));
        tabServers->setTabText(tabServers->indexOf(tabServerSearch), QApplication::translate("QgsWMSSourceSelectBase", "Server Search", Q_NULLPTR));
        label->setText(QApplication::translate("QgsWMSSourceSelectBase", "Layer name", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsWMSSourceSelectBase: public Ui_QgsWMSSourceSelectBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSWMSSOURCESELECTBASE_H
