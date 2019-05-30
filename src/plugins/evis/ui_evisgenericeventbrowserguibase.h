/********************************************************************************
** Form generated from reading UI file 'evisgenericeventbrowserguibase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EVISGENERICEVENTBROWSERGUIBASE_H
#define UI_EVISGENERICEVENTBROWSERGUIBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "evisimagedisplaywidget.h"

QT_BEGIN_NAMESPACE

class Ui_eVisGenericEventBrowserGuiBase
{
public:
    QVBoxLayout *vboxLayout;
    QTabWidget *displayArea;
    QWidget *Display;
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;
    QGridLayout *gridLayout_1;
    QTreeWidget *treeEventData;
    QPushButton *pbtnNext;
    QLabel *labelCompassOffsetWarning;
    QPushButton *pbtnPrevious;
    eVisImageDisplayWidget *imageDisplayArea;
    QWidget *Options;
    QGridLayout *gridLayout1;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pbtnResetEventImagePathData;
    QComboBox *cboxEventImagePathField;
    QCheckBox *chkboxEventImagePathRelative;
    QCheckBox *chkboxSaveEventImagePathData;
    QSpacerItem *spacerItem;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_3;
    QComboBox *cboxCompassBearingField;
    QSpacerItem *spacerItem1;
    QPushButton *pbtnResetCompassBearingData;
    QLabel *label_5;
    QCheckBox *chkboxDisplayCompassBearing;
    QCheckBox *chkboxSaveCompassBearingData;
    QSpacerItem *horizontalSpacer_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_4;
    QCheckBox *chkboxSaveCompassOffsetData;
    QRadioButton *rbtnAttributeCompassOffset;
    QPushButton *pbtnResetCompassOffsetData;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *spacerItem2;
    QDoubleSpinBox *dsboxCompassOffset;
    QComboBox *cboxCompassOffsetField;
    QRadioButton *rbtnManualCompassOffset;
    QSpacerItem *horizontalSpacer_5;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout2;
    QLabel *label_4;
    QSpacerItem *spacerItem3;
    QLabel *label_2;
    QLineEdit *leBasePath;
    QCheckBox *chkboxSaveBasePathData;
    QPushButton *pbtnResetBasePathData;
    QCheckBox *chkboxUseOnlyFilename;
    QCheckBox *chkboxSaveUseOnlyFilenameData;
    QPushButton *pbtnResetUseOnlyFilenameData;
    QCheckBox *chkboxApplyPathRulesToDocs;
    QCheckBox *chkboxSaveApplyPathRulesToDocs;
    QPushButton *pbtnResetApplyPathRulesToDocs;
    QFrame *line;
    QDialogButtonBox *buttonboxOptions;
    QWidget *ConfigureExternalApplications;
    QGridLayout *gridLayout3;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem4;
    QLabel *label_3;
    QSpacerItem *spacerItem5;
    QTableWidget *tableFileTypeAssociations;
    QVBoxLayout *vboxLayout1;
    QPushButton *pbtnAddFileType;
    QPushButton *pbtnDeleteFileType;
    QSpacerItem *spacerItem6;

    void setupUi(QDialog *eVisGenericEventBrowserGuiBase)
    {
        if (eVisGenericEventBrowserGuiBase->objectName().isEmpty())
            eVisGenericEventBrowserGuiBase->setObjectName(QStringLiteral("eVisGenericEventBrowserGuiBase"));
        eVisGenericEventBrowserGuiBase->resize(801, 654);
        QIcon icon;
        icon.addFile(QStringLiteral(":/evis/eVisEventBrowser.png"), QSize(), QIcon::Normal, QIcon::Off);
        eVisGenericEventBrowserGuiBase->setWindowIcon(icon);
        vboxLayout = new QVBoxLayout(eVisGenericEventBrowserGuiBase);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        vboxLayout->setContentsMargins(2, 2, 2, 2);
        displayArea = new QTabWidget(eVisGenericEventBrowserGuiBase);
        displayArea->setObjectName(QStringLiteral("displayArea"));
        Display = new QWidget();
        Display->setObjectName(QStringLiteral("Display"));
        gridLayout = new QGridLayout(Display);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        buttonBox = new QDialogButtonBox(Display);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        gridLayout->addWidget(buttonBox, 4, 1, 1, 1);

        gridLayout_1 = new QGridLayout();
        gridLayout_1->setObjectName(QStringLiteral("gridLayout_1"));
        gridLayout_1->setContentsMargins(0, 0, 0, 0);
        treeEventData = new QTreeWidget(Display);
        treeEventData->setObjectName(QStringLiteral("treeEventData"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(treeEventData->sizePolicy().hasHeightForWidth());
        treeEventData->setSizePolicy(sizePolicy);
        treeEventData->setMinimumSize(QSize(0, 125));
        treeEventData->setMaximumSize(QSize(16777215, 125));

        gridLayout_1->addWidget(treeEventData, 1, 0, 1, 3);

        pbtnNext = new QPushButton(Display);
        pbtnNext->setObjectName(QStringLiteral("pbtnNext"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pbtnNext->sizePolicy().hasHeightForWidth());
        pbtnNext->setSizePolicy(sizePolicy1);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/themes/default/mActionArrowRight.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pbtnNext->setIcon(icon1);

        gridLayout_1->addWidget(pbtnNext, 0, 2, 1, 1);

        labelCompassOffsetWarning = new QLabel(Display);
        labelCompassOffsetWarning->setObjectName(QStringLiteral("labelCompassOffsetWarning"));

        gridLayout_1->addWidget(labelCompassOffsetWarning, 0, 0, 1, 1);

        pbtnPrevious = new QPushButton(Display);
        pbtnPrevious->setObjectName(QStringLiteral("pbtnPrevious"));
        sizePolicy1.setHeightForWidth(pbtnPrevious->sizePolicy().hasHeightForWidth());
        pbtnPrevious->setSizePolicy(sizePolicy1);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/themes/default/mActionArrowLeft.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pbtnPrevious->setIcon(icon2);

        gridLayout_1->addWidget(pbtnPrevious, 0, 1, 1, 1);

        imageDisplayArea = new eVisImageDisplayWidget(Display);
        imageDisplayArea->setObjectName(QStringLiteral("imageDisplayArea"));
        sizePolicy.setHeightForWidth(imageDisplayArea->sizePolicy().hasHeightForWidth());
        imageDisplayArea->setSizePolicy(sizePolicy);

        gridLayout_1->addWidget(imageDisplayArea, 2, 0, 1, 3);


        gridLayout->addLayout(gridLayout_1, 0, 0, 1, 2);

        displayArea->addTab(Display, QString());
        Options = new QWidget();
        Options->setObjectName(QStringLiteral("Options"));
        gridLayout1 = new QGridLayout(Options);
        gridLayout1->setObjectName(QStringLiteral("gridLayout1"));
        groupBox_2 = new QGroupBox(Options);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 2);

        horizontalSpacer_2 = new QSpacerItem(288, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 3, 1, 3);

        pbtnResetEventImagePathData = new QPushButton(groupBox_2);
        pbtnResetEventImagePathData->setObjectName(QStringLiteral("pbtnResetEventImagePathData"));
        sizePolicy1.setHeightForWidth(pbtnResetEventImagePathData->sizePolicy().hasHeightForWidth());
        pbtnResetEventImagePathData->setSizePolicy(sizePolicy1);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/themes/default/mActionUndo.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pbtnResetEventImagePathData->setIcon(icon3);
        pbtnResetEventImagePathData->setIconSize(QSize(16, 16));

        gridLayout_2->addWidget(pbtnResetEventImagePathData, 1, 5, 1, 1);

        cboxEventImagePathField = new QComboBox(groupBox_2);
        cboxEventImagePathField->setObjectName(QStringLiteral("cboxEventImagePathField"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(cboxEventImagePathField->sizePolicy().hasHeightForWidth());
        cboxEventImagePathField->setSizePolicy(sizePolicy2);
        cboxEventImagePathField->setMinimumSize(QSize(150, 0));
#ifndef QT_NO_WHATSTHIS
        cboxEventImagePathField->setWhatsThis(QStringLiteral(""));
#endif // QT_NO_WHATSTHIS

        gridLayout_2->addWidget(cboxEventImagePathField, 0, 2, 1, 1);

        chkboxEventImagePathRelative = new QCheckBox(groupBox_2);
        chkboxEventImagePathRelative->setObjectName(QStringLiteral("chkboxEventImagePathRelative"));

        gridLayout_2->addWidget(chkboxEventImagePathRelative, 1, 0, 1, 1);

        chkboxSaveEventImagePathData = new QCheckBox(groupBox_2);
        chkboxSaveEventImagePathData->setObjectName(QStringLiteral("chkboxSaveEventImagePathData"));
#ifndef QT_NO_WHATSTHIS
        chkboxSaveEventImagePathData->setWhatsThis(QStringLiteral(""));
#endif // QT_NO_WHATSTHIS
        chkboxSaveEventImagePathData->setLayoutDirection(Qt::LeftToRight);

        gridLayout_2->addWidget(chkboxSaveEventImagePathData, 1, 4, 1, 1);

        spacerItem = new QSpacerItem(251, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(spacerItem, 1, 1, 1, 3);


        gridLayout1->addWidget(groupBox_2, 0, 0, 1, 1);

        groupBox_3 = new QGroupBox(Options);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        gridLayout_3 = new QGridLayout(groupBox_3);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        cboxCompassBearingField = new QComboBox(groupBox_3);
        cboxCompassBearingField->setObjectName(QStringLiteral("cboxCompassBearingField"));
        sizePolicy2.setHeightForWidth(cboxCompassBearingField->sizePolicy().hasHeightForWidth());
        cboxCompassBearingField->setSizePolicy(sizePolicy2);
        cboxCompassBearingField->setMinimumSize(QSize(150, 0));

        gridLayout_3->addWidget(cboxCompassBearingField, 0, 1, 1, 1);

        spacerItem1 = new QSpacerItem(121, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(spacerItem1, 1, 1, 1, 2);

        pbtnResetCompassBearingData = new QPushButton(groupBox_3);
        pbtnResetCompassBearingData->setObjectName(QStringLiteral("pbtnResetCompassBearingData"));
        sizePolicy1.setHeightForWidth(pbtnResetCompassBearingData->sizePolicy().hasHeightForWidth());
        pbtnResetCompassBearingData->setSizePolicy(sizePolicy1);
        pbtnResetCompassBearingData->setIcon(icon3);
        pbtnResetCompassBearingData->setIconSize(QSize(16, 16));

        gridLayout_3->addWidget(pbtnResetCompassBearingData, 1, 4, 1, 1);

        label_5 = new QLabel(groupBox_3);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_3->addWidget(label_5, 0, 0, 1, 1);

        chkboxDisplayCompassBearing = new QCheckBox(groupBox_3);
        chkboxDisplayCompassBearing->setObjectName(QStringLiteral("chkboxDisplayCompassBearing"));

        gridLayout_3->addWidget(chkboxDisplayCompassBearing, 1, 0, 1, 1);

        chkboxSaveCompassBearingData = new QCheckBox(groupBox_3);
        chkboxSaveCompassBearingData->setObjectName(QStringLiteral("chkboxSaveCompassBearingData"));
#ifndef QT_NO_WHATSTHIS
        chkboxSaveCompassBearingData->setWhatsThis(QStringLiteral(""));
#endif // QT_NO_WHATSTHIS
        chkboxSaveCompassBearingData->setLayoutDirection(Qt::LeftToRight);

        gridLayout_3->addWidget(chkboxSaveCompassBearingData, 1, 3, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(268, 24, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_3, 0, 2, 1, 3);


        gridLayout1->addWidget(groupBox_3, 1, 0, 1, 1);

        groupBox = new QGroupBox(Options);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_4 = new QGridLayout(groupBox);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        chkboxSaveCompassOffsetData = new QCheckBox(groupBox);
        chkboxSaveCompassOffsetData->setObjectName(QStringLiteral("chkboxSaveCompassOffsetData"));
#ifndef QT_NO_WHATSTHIS
        chkboxSaveCompassOffsetData->setWhatsThis(QStringLiteral(""));
#endif // QT_NO_WHATSTHIS
        chkboxSaveCompassOffsetData->setLayoutDirection(Qt::LeftToRight);

        gridLayout_4->addWidget(chkboxSaveCompassOffsetData, 2, 4, 1, 1);

        rbtnAttributeCompassOffset = new QRadioButton(groupBox);
        rbtnAttributeCompassOffset->setObjectName(QStringLiteral("rbtnAttributeCompassOffset"));
#ifndef QT_NO_WHATSTHIS
        rbtnAttributeCompassOffset->setWhatsThis(QStringLiteral(""));
#endif // QT_NO_WHATSTHIS

        gridLayout_4->addWidget(rbtnAttributeCompassOffset, 1, 0, 1, 1);

        pbtnResetCompassOffsetData = new QPushButton(groupBox);
        pbtnResetCompassOffsetData->setObjectName(QStringLiteral("pbtnResetCompassOffsetData"));
        sizePolicy1.setHeightForWidth(pbtnResetCompassOffsetData->sizePolicy().hasHeightForWidth());
        pbtnResetCompassOffsetData->setSizePolicy(sizePolicy1);
        pbtnResetCompassOffsetData->setIcon(icon3);
        pbtnResetCompassOffsetData->setIconSize(QSize(16, 16));

        gridLayout_4->addWidget(pbtnResetCompassOffsetData, 2, 5, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(424, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_4, 1, 3, 1, 3);

        spacerItem2 = new QSpacerItem(281, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(spacerItem2, 2, 3, 1, 1);

        dsboxCompassOffset = new QDoubleSpinBox(groupBox);
        dsboxCompassOffset->setObjectName(QStringLiteral("dsboxCompassOffset"));
        sizePolicy2.setHeightForWidth(dsboxCompassOffset->sizePolicy().hasHeightForWidth());
        dsboxCompassOffset->setSizePolicy(sizePolicy2);
        dsboxCompassOffset->setDecimals(1);
        dsboxCompassOffset->setMinimum(-180);
        dsboxCompassOffset->setMaximum(180);
        dsboxCompassOffset->setSingleStep(1);

        gridLayout_4->addWidget(dsboxCompassOffset, 0, 1, 1, 1);

        cboxCompassOffsetField = new QComboBox(groupBox);
        cboxCompassOffsetField->setObjectName(QStringLiteral("cboxCompassOffsetField"));
        sizePolicy2.setHeightForWidth(cboxCompassOffsetField->sizePolicy().hasHeightForWidth());
        cboxCompassOffsetField->setSizePolicy(sizePolicy2);
        cboxCompassOffsetField->setMinimumSize(QSize(150, 0));

        gridLayout_4->addWidget(cboxCompassOffsetField, 1, 1, 1, 2);

        rbtnManualCompassOffset = new QRadioButton(groupBox);
        rbtnManualCompassOffset->setObjectName(QStringLiteral("rbtnManualCompassOffset"));
#ifndef QT_NO_WHATSTHIS
        rbtnManualCompassOffset->setWhatsThis(QStringLiteral(""));
#endif // QT_NO_WHATSTHIS

        gridLayout_4->addWidget(rbtnManualCompassOffset, 0, 0, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(430, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_5, 0, 2, 1, 4);


        gridLayout1->addWidget(groupBox, 2, 0, 1, 1);

        groupBox_4 = new QGroupBox(Options);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        gridLayout2 = new QGridLayout(groupBox_4);
        gridLayout2->setObjectName(QStringLiteral("gridLayout2"));
        label_4 = new QLabel(groupBox_4);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout2->addWidget(label_4, 0, 0, 1, 3);

        spacerItem3 = new QSpacerItem(131, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout2->addItem(spacerItem3, 0, 3, 1, 2);

        label_2 = new QLabel(groupBox_4);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout2->addWidget(label_2, 1, 0, 1, 1);

        leBasePath = new QLineEdit(groupBox_4);
        leBasePath->setObjectName(QStringLiteral("leBasePath"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(10);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(leBasePath->sizePolicy().hasHeightForWidth());
        leBasePath->setSizePolicy(sizePolicy3);

        gridLayout2->addWidget(leBasePath, 1, 1, 1, 1);

        chkboxSaveBasePathData = new QCheckBox(groupBox_4);
        chkboxSaveBasePathData->setObjectName(QStringLiteral("chkboxSaveBasePathData"));
#ifndef QT_NO_WHATSTHIS
        chkboxSaveBasePathData->setWhatsThis(QStringLiteral(""));
#endif // QT_NO_WHATSTHIS
        chkboxSaveBasePathData->setLayoutDirection(Qt::LeftToRight);

        gridLayout2->addWidget(chkboxSaveBasePathData, 1, 2, 1, 2);

        pbtnResetBasePathData = new QPushButton(groupBox_4);
        pbtnResetBasePathData->setObjectName(QStringLiteral("pbtnResetBasePathData"));
        sizePolicy1.setHeightForWidth(pbtnResetBasePathData->sizePolicy().hasHeightForWidth());
        pbtnResetBasePathData->setSizePolicy(sizePolicy1);
        pbtnResetBasePathData->setIcon(icon3);
        pbtnResetBasePathData->setIconSize(QSize(16, 16));

        gridLayout2->addWidget(pbtnResetBasePathData, 1, 4, 1, 1);

        chkboxUseOnlyFilename = new QCheckBox(groupBox_4);
        chkboxUseOnlyFilename->setObjectName(QStringLiteral("chkboxUseOnlyFilename"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(chkboxUseOnlyFilename->sizePolicy().hasHeightForWidth());
        chkboxUseOnlyFilename->setSizePolicy(sizePolicy4);
#ifndef QT_NO_WHATSTHIS
        chkboxUseOnlyFilename->setWhatsThis(QStringLiteral(""));
#endif // QT_NO_WHATSTHIS

        gridLayout2->addWidget(chkboxUseOnlyFilename, 2, 0, 1, 2);

        chkboxSaveUseOnlyFilenameData = new QCheckBox(groupBox_4);
        chkboxSaveUseOnlyFilenameData->setObjectName(QStringLiteral("chkboxSaveUseOnlyFilenameData"));
#ifndef QT_NO_WHATSTHIS
        chkboxSaveUseOnlyFilenameData->setWhatsThis(QStringLiteral(""));
#endif // QT_NO_WHATSTHIS
        chkboxSaveUseOnlyFilenameData->setLayoutDirection(Qt::LeftToRight);

        gridLayout2->addWidget(chkboxSaveUseOnlyFilenameData, 2, 2, 1, 2);

        pbtnResetUseOnlyFilenameData = new QPushButton(groupBox_4);
        pbtnResetUseOnlyFilenameData->setObjectName(QStringLiteral("pbtnResetUseOnlyFilenameData"));
        sizePolicy1.setHeightForWidth(pbtnResetUseOnlyFilenameData->sizePolicy().hasHeightForWidth());
        pbtnResetUseOnlyFilenameData->setSizePolicy(sizePolicy1);
        pbtnResetUseOnlyFilenameData->setIcon(icon3);
        pbtnResetUseOnlyFilenameData->setIconSize(QSize(16, 16));

        gridLayout2->addWidget(pbtnResetUseOnlyFilenameData, 2, 4, 1, 1);

        chkboxApplyPathRulesToDocs = new QCheckBox(groupBox_4);
        chkboxApplyPathRulesToDocs->setObjectName(QStringLiteral("chkboxApplyPathRulesToDocs"));
        sizePolicy4.setHeightForWidth(chkboxApplyPathRulesToDocs->sizePolicy().hasHeightForWidth());
        chkboxApplyPathRulesToDocs->setSizePolicy(sizePolicy4);
#ifndef QT_NO_WHATSTHIS
        chkboxApplyPathRulesToDocs->setWhatsThis(QStringLiteral(""));
#endif // QT_NO_WHATSTHIS

        gridLayout2->addWidget(chkboxApplyPathRulesToDocs, 3, 0, 1, 2);

        chkboxSaveApplyPathRulesToDocs = new QCheckBox(groupBox_4);
        chkboxSaveApplyPathRulesToDocs->setObjectName(QStringLiteral("chkboxSaveApplyPathRulesToDocs"));
#ifndef QT_NO_WHATSTHIS
        chkboxSaveApplyPathRulesToDocs->setWhatsThis(QStringLiteral(""));
#endif // QT_NO_WHATSTHIS
        chkboxSaveApplyPathRulesToDocs->setLayoutDirection(Qt::LeftToRight);

        gridLayout2->addWidget(chkboxSaveApplyPathRulesToDocs, 3, 2, 1, 2);

        pbtnResetApplyPathRulesToDocs = new QPushButton(groupBox_4);
        pbtnResetApplyPathRulesToDocs->setObjectName(QStringLiteral("pbtnResetApplyPathRulesToDocs"));
        sizePolicy1.setHeightForWidth(pbtnResetApplyPathRulesToDocs->sizePolicy().hasHeightForWidth());
        pbtnResetApplyPathRulesToDocs->setSizePolicy(sizePolicy1);
        pbtnResetApplyPathRulesToDocs->setIcon(icon3);
        pbtnResetApplyPathRulesToDocs->setIconSize(QSize(16, 16));

        gridLayout2->addWidget(pbtnResetApplyPathRulesToDocs, 3, 4, 1, 1);


        gridLayout1->addWidget(groupBox_4, 3, 0, 1, 1);

        line = new QFrame(Options);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout1->addWidget(line, 4, 0, 1, 1);

        buttonboxOptions = new QDialogButtonBox(Options);
        buttonboxOptions->setObjectName(QStringLiteral("buttonboxOptions"));
#ifndef QT_NO_WHATSTHIS
        buttonboxOptions->setWhatsThis(QStringLiteral(""));
#endif // QT_NO_WHATSTHIS
        buttonboxOptions->setStandardButtons(QDialogButtonBox::RestoreDefaults|QDialogButtonBox::Save);

        gridLayout1->addWidget(buttonboxOptions, 5, 0, 1, 1);

        displayArea->addTab(Options, QString());
        ConfigureExternalApplications = new QWidget();
        ConfigureExternalApplications->setObjectName(QStringLiteral("ConfigureExternalApplications"));
        gridLayout3 = new QGridLayout(ConfigureExternalApplications);
        gridLayout3->setObjectName(QStringLiteral("gridLayout3"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        spacerItem4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem4);

        label_3 = new QLabel(ConfigureExternalApplications);
        label_3->setObjectName(QStringLiteral("label_3"));

        hboxLayout->addWidget(label_3);

        spacerItem5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem5);


        gridLayout3->addLayout(hboxLayout, 0, 0, 1, 2);

        tableFileTypeAssociations = new QTableWidget(ConfigureExternalApplications);
        if (tableFileTypeAssociations->columnCount() < 2)
            tableFileTypeAssociations->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableFileTypeAssociations->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableFileTypeAssociations->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableFileTypeAssociations->setObjectName(QStringLiteral("tableFileTypeAssociations"));

        gridLayout3->addWidget(tableFileTypeAssociations, 2, 0, 1, 1);

        vboxLayout1 = new QVBoxLayout();
        vboxLayout1->setObjectName(QStringLiteral("vboxLayout1"));
        pbtnAddFileType = new QPushButton(ConfigureExternalApplications);
        pbtnAddFileType->setObjectName(QStringLiteral("pbtnAddFileType"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/themes/default/symbologyAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pbtnAddFileType->setIcon(icon4);

        vboxLayout1->addWidget(pbtnAddFileType);

        pbtnDeleteFileType = new QPushButton(ConfigureExternalApplications);
        pbtnDeleteFileType->setObjectName(QStringLiteral("pbtnDeleteFileType"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/themes/default/symbologyRemove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pbtnDeleteFileType->setIcon(icon5);

        vboxLayout1->addWidget(pbtnDeleteFileType);

        spacerItem6 = new QSpacerItem(20, 491, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout1->addItem(spacerItem6);


        gridLayout3->addLayout(vboxLayout1, 2, 1, 1, 1);

        displayArea->addTab(ConfigureExternalApplications, QString());

        vboxLayout->addWidget(displayArea);

        QWidget::setTabOrder(cboxEventImagePathField, chkboxEventImagePathRelative);
        QWidget::setTabOrder(chkboxEventImagePathRelative, chkboxSaveEventImagePathData);
        QWidget::setTabOrder(chkboxSaveEventImagePathData, pbtnResetEventImagePathData);
        QWidget::setTabOrder(pbtnResetEventImagePathData, cboxCompassBearingField);
        QWidget::setTabOrder(cboxCompassBearingField, chkboxDisplayCompassBearing);
        QWidget::setTabOrder(chkboxDisplayCompassBearing, chkboxSaveCompassBearingData);
        QWidget::setTabOrder(chkboxSaveCompassBearingData, pbtnResetCompassBearingData);
        QWidget::setTabOrder(pbtnResetCompassBearingData, rbtnManualCompassOffset);
        QWidget::setTabOrder(rbtnManualCompassOffset, dsboxCompassOffset);
        QWidget::setTabOrder(dsboxCompassOffset, rbtnAttributeCompassOffset);
        QWidget::setTabOrder(rbtnAttributeCompassOffset, cboxCompassOffsetField);
        QWidget::setTabOrder(cboxCompassOffsetField, chkboxSaveCompassOffsetData);
        QWidget::setTabOrder(chkboxSaveCompassOffsetData, pbtnResetCompassOffsetData);
        QWidget::setTabOrder(pbtnResetCompassOffsetData, leBasePath);
        QWidget::setTabOrder(leBasePath, chkboxSaveBasePathData);
        QWidget::setTabOrder(chkboxSaveBasePathData, pbtnResetBasePathData);
        QWidget::setTabOrder(pbtnResetBasePathData, chkboxUseOnlyFilename);
        QWidget::setTabOrder(chkboxUseOnlyFilename, chkboxSaveUseOnlyFilenameData);
        QWidget::setTabOrder(chkboxSaveUseOnlyFilenameData, pbtnResetUseOnlyFilenameData);
        QWidget::setTabOrder(pbtnResetUseOnlyFilenameData, chkboxApplyPathRulesToDocs);
        QWidget::setTabOrder(chkboxApplyPathRulesToDocs, chkboxSaveApplyPathRulesToDocs);
        QWidget::setTabOrder(chkboxSaveApplyPathRulesToDocs, pbtnResetApplyPathRulesToDocs);
        QWidget::setTabOrder(pbtnResetApplyPathRulesToDocs, tableFileTypeAssociations);
        QWidget::setTabOrder(tableFileTypeAssociations, pbtnAddFileType);
        QWidget::setTabOrder(pbtnAddFileType, pbtnDeleteFileType);
        QWidget::setTabOrder(pbtnDeleteFileType, displayArea);

        retranslateUi(eVisGenericEventBrowserGuiBase);
        QObject::connect(buttonBox, SIGNAL(rejected()), eVisGenericEventBrowserGuiBase, SLOT(close()));
        QObject::connect(buttonBox, SIGNAL(accepted()), eVisGenericEventBrowserGuiBase, SLOT(close()));

        displayArea->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(eVisGenericEventBrowserGuiBase);
    } // setupUi

    void retranslateUi(QDialog *eVisGenericEventBrowserGuiBase)
    {
        eVisGenericEventBrowserGuiBase->setWindowTitle(QString());
#ifndef QT_NO_TOOLTIP
        displayArea->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        QTreeWidgetItem *___qtreewidgetitem = treeEventData->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("eVisGenericEventBrowserGuiBase", "1", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        treeEventData->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        treeEventData->setWhatsThis(QApplication::translate("eVisGenericEventBrowserGuiBase", "All of the attribute information for the point associated with the photo being viewed is displayed here. If the file type being referenced in the displayed record is not an image but is of a file type defined in the \342\200\234Configure External Applications\342\200\235 tab then when you double-click on the value of the field containing the path to the file the application to open the file will be launched to view or hear the contents of the file. If the file extension is recognized the attribute data will be displayed in green.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        pbtnNext->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        pbtnNext->setWhatsThis(QApplication::translate("eVisGenericEventBrowserGuiBase", "Use the Next button to display the next photo when more than one photo is available for display.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        pbtnNext->setText(QString());
        labelCompassOffsetWarning->setText(QString());
#ifndef QT_NO_TOOLTIP
        pbtnPrevious->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        pbtnPrevious->setWhatsThis(QApplication::translate("eVisGenericEventBrowserGuiBase", "Use the Previous button to display the previous photo when more than one photo is available for display.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        pbtnPrevious->setText(QString());
#ifndef QT_NO_TOOLTIP
        imageDisplayArea->setToolTip(QApplication::translate("eVisGenericEventBrowserGuiBase", "Image display area", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        imageDisplayArea->setWhatsThis(QApplication::translate("eVisGenericEventBrowserGuiBase", "Display area for the image.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        displayArea->setTabText(displayArea->indexOf(Display), QApplication::translate("eVisGenericEventBrowserGuiBase", "Display", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("eVisGenericEventBrowserGuiBase", "File path", Q_NULLPTR));
        label->setText(QApplication::translate("eVisGenericEventBrowserGuiBase", "Attribute containing path to file", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        pbtnResetEventImagePathData->setToolTip(QApplication::translate("eVisGenericEventBrowserGuiBase", "Reset to default", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        pbtnResetEventImagePathData->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        pbtnResetEventImagePathData->setWhatsThis(QApplication::translate("eVisGenericEventBrowserGuiBase", "Resets the values on this line to the default setting.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        pbtnResetEventImagePathData->setText(QApplication::translate("eVisGenericEventBrowserGuiBase", "Reset", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        cboxEventImagePathField->setToolTip(QApplication::translate("eVisGenericEventBrowserGuiBase", "<html><head/><body><p>Use the drop-down list to select the field containing a directory path to the image. This can be an absolute or relative path.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        chkboxEventImagePathRelative->setToolTip(QApplication::translate("eVisGenericEventBrowserGuiBase", "<html><head/><body><p>If checked the path to the image will be defined appending the attribute in the field selected from the \342\200\234Attribute Containing Path to Image\342\200\235 drop-down list to the \342\200\234Base Path\342\200\235 defined below.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        chkboxEventImagePathRelative->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        chkboxEventImagePathRelative->setText(QApplication::translate("eVisGenericEventBrowserGuiBase", "Path is relative", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        chkboxSaveEventImagePathData->setToolTip(QApplication::translate("eVisGenericEventBrowserGuiBase", "If checked, the relative path values will be saved for the next session.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        chkboxSaveEventImagePathData->setText(QApplication::translate("eVisGenericEventBrowserGuiBase", "Remember this", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("eVisGenericEventBrowserGuiBase", "Compass bearing", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        cboxCompassBearingField->setToolTip(QApplication::translate("eVisGenericEventBrowserGuiBase", "<html><head/><body><p>Use the drop-down list to select the field containing the compass bearing for the image.</p><p>This bearing usually references the direction the camera was pointing when the image was acquired. </p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        cboxCompassBearingField->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        pbtnResetCompassBearingData->setToolTip(QApplication::translate("eVisGenericEventBrowserGuiBase", "Reset to default", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        pbtnResetCompassBearingData->setWhatsThis(QApplication::translate("eVisGenericEventBrowserGuiBase", "Resets the values on this line to the default setting.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        pbtnResetCompassBearingData->setText(QApplication::translate("eVisGenericEventBrowserGuiBase", "Reset", Q_NULLPTR));
        label_5->setText(QApplication::translate("eVisGenericEventBrowserGuiBase", "Attribute containing compass bearing", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        chkboxDisplayCompassBearing->setToolTip(QApplication::translate("eVisGenericEventBrowserGuiBase", "<html><head/><body><p>If checked an arrow pointing in the direction defined by the attribute in the field selected from the drop-down list</p><p>to the right will be displayed in the QGIS window on top of the point for this image.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        chkboxDisplayCompassBearing->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        chkboxDisplayCompassBearing->setText(QApplication::translate("eVisGenericEventBrowserGuiBase", "Display compass bearing", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        chkboxSaveCompassBearingData->setToolTip(QApplication::translate("eVisGenericEventBrowserGuiBase", "If checked, the Display Compass Bearing values will be saved for the next session.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        chkboxSaveCompassBearingData->setText(QApplication::translate("eVisGenericEventBrowserGuiBase", "Remember this", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("eVisGenericEventBrowserGuiBase", "Compass offset", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        chkboxSaveCompassOffsetData->setToolTip(QApplication::translate("eVisGenericEventBrowserGuiBase", "If checked, the compass offset values will be saved for the next session.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        chkboxSaveCompassOffsetData->setText(QApplication::translate("eVisGenericEventBrowserGuiBase", "Remember this", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        rbtnAttributeCompassOffset->setToolTip(QApplication::translate("eVisGenericEventBrowserGuiBase", "Define the compass offset using a field from the vector layer attribute table.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        rbtnAttributeCompassOffset->setText(QApplication::translate("eVisGenericEventBrowserGuiBase", " From Attribute", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        pbtnResetCompassOffsetData->setToolTip(QApplication::translate("eVisGenericEventBrowserGuiBase", "Reset to default", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        pbtnResetCompassOffsetData->setWhatsThis(QApplication::translate("eVisGenericEventBrowserGuiBase", "Resets the compass offset values to the default settings.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        pbtnResetCompassOffsetData->setText(QApplication::translate("eVisGenericEventBrowserGuiBase", "Reset", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        dsboxCompassOffset->setToolTip(QApplication::translate("eVisGenericEventBrowserGuiBase", "<html><head/><body><p>A value to be added to the compass bearing.</p><p>This allows you to compensate for declination (adjust bearings collected using magnetic bearings to true north bearings). East declinations should be entered using positive values and west declinations should use negative values. </p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        dsboxCompassOffset->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        cboxCompassOffsetField->setToolTip(QApplication::translate("eVisGenericEventBrowserGuiBase", "<html><head/><body><p>Use the drop-down list to select the field containing the compass bearing offset.</p><p>This allows you to compensate for declination (adjust bearings collected using magnetic bearings to true north bearings). East declinations should be entered using positive values and west declinations should use negative values. </p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        cboxCompassOffsetField->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        rbtnManualCompassOffset->setToolTip(QApplication::translate("eVisGenericEventBrowserGuiBase", "Define the compass offset manually.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        rbtnManualCompassOffset->setText(QApplication::translate("eVisGenericEventBrowserGuiBase", "Manual", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("eVisGenericEventBrowserGuiBase", "Relative paths", Q_NULLPTR));
        label_4->setText(QApplication::translate("eVisGenericEventBrowserGuiBase", "The base path or url from which images and documents can be \342\200\234relative\342\200\235", Q_NULLPTR));
        label_2->setText(QApplication::translate("eVisGenericEventBrowserGuiBase", "Base Path", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        leBasePath->setToolTip(QApplication::translate("eVisGenericEventBrowserGuiBase", "The Base Path onto which the relative path defined above will be appended.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        leBasePath->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        chkboxSaveBasePathData->setToolTip(QApplication::translate("eVisGenericEventBrowserGuiBase", "If checked, the Base Path will be saved for the next session.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        chkboxSaveBasePathData->setText(QApplication::translate("eVisGenericEventBrowserGuiBase", "Remember this", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        pbtnResetBasePathData->setToolTip(QApplication::translate("eVisGenericEventBrowserGuiBase", "Reset to default", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        pbtnResetBasePathData->setWhatsThis(QApplication::translate("eVisGenericEventBrowserGuiBase", "Enters the default \342\200\234Base Path\342\200\235 which is the path to the directory of the vector layer containing the image information.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        pbtnResetBasePathData->setText(QApplication::translate("eVisGenericEventBrowserGuiBase", "Reset", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        chkboxUseOnlyFilename->setToolTip(QApplication::translate("eVisGenericEventBrowserGuiBase", "<html><head/><body><p>If checked, the Base Path will append only the file name instead of the entire relative path (defined above) to create the full directory path to the file. </p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        chkboxUseOnlyFilename->setText(QApplication::translate("eVisGenericEventBrowserGuiBase", "Replace entire path/url stored in image path attribute with user defined\n"
"Base Path (i.e. keep only filename from attribute)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        chkboxSaveUseOnlyFilenameData->setToolTip(QApplication::translate("eVisGenericEventBrowserGuiBase", "If checked, the current checkbox setting will be saved for the next session.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        chkboxSaveUseOnlyFilenameData->setText(QApplication::translate("eVisGenericEventBrowserGuiBase", "Remember this", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        pbtnResetUseOnlyFilenameData->setToolTip(QApplication::translate("eVisGenericEventBrowserGuiBase", "Reset to default", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        pbtnResetUseOnlyFilenameData->setWhatsThis(QApplication::translate("eVisGenericEventBrowserGuiBase", "Clears the checkbox on this line.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        pbtnResetUseOnlyFilenameData->setText(QApplication::translate("eVisGenericEventBrowserGuiBase", "Reset", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        chkboxApplyPathRulesToDocs->setToolTip(QApplication::translate("eVisGenericEventBrowserGuiBase", "<html><head/><body><p>If checked, the same path rules that are defined for images will be used for non-image documents such as movies, text documents, and sound files.</p><p>If not checked the path rules will only apply to images and other documents will ignore the Base Path parameter.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        chkboxApplyPathRulesToDocs->setText(QApplication::translate("eVisGenericEventBrowserGuiBase", "Apply Path to Image rules when loading docs in external applications", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        chkboxSaveApplyPathRulesToDocs->setToolTip(QApplication::translate("eVisGenericEventBrowserGuiBase", "If checked, the current checkbox setting will be saved for the next session.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        chkboxSaveApplyPathRulesToDocs->setText(QApplication::translate("eVisGenericEventBrowserGuiBase", "Remember this", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        pbtnResetApplyPathRulesToDocs->setToolTip(QApplication::translate("eVisGenericEventBrowserGuiBase", "Reset to default", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        pbtnResetApplyPathRulesToDocs->setWhatsThis(QApplication::translate("eVisGenericEventBrowserGuiBase", "Clears the checkbox on this line.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        pbtnResetApplyPathRulesToDocs->setText(QApplication::translate("eVisGenericEventBrowserGuiBase", "Reset", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        buttonboxOptions->setToolTip(QApplication::translate("eVisGenericEventBrowserGuiBase", "<html><head/><body><p>Clicking on Save will save the settings without closing the Options pane.</p><p>Clicking on Restore Defaults will reset all of the fields to their default settings.</p><p>It has the same effect as clicking all of the \342\200\234Reset to default\342\200\235 buttons. </p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        displayArea->setTabText(displayArea->indexOf(Options), QApplication::translate("eVisGenericEventBrowserGuiBase", "Options", Q_NULLPTR));
        label_3->setText(QApplication::translate("eVisGenericEventBrowserGuiBase", "File extension and external application in which to load a document of that type", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableFileTypeAssociations->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("eVisGenericEventBrowserGuiBase", "Extension", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableFileTypeAssociations->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("eVisGenericEventBrowserGuiBase", "Application", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        tableFileTypeAssociations->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        tableFileTypeAssociations->setWhatsThis(QApplication::translate("eVisGenericEventBrowserGuiBase", "A table containing file types that can be opened using eVis. Each file type needs a file extension and the path to an application that can open that type of file. This provides the capability of opening a broad range of files such as movies, sound recording, and text documents instead of only images. ", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        pbtnAddFileType->setToolTip(QApplication::translate("eVisGenericEventBrowserGuiBase", "Add new file type", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        pbtnAddFileType->setWhatsThis(QApplication::translate("eVisGenericEventBrowserGuiBase", "Add a new file type with a unique extension and the path for the application that can open the file.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        pbtnAddFileType->setText(QString());
#ifndef QT_NO_TOOLTIP
        pbtnDeleteFileType->setToolTip(QApplication::translate("eVisGenericEventBrowserGuiBase", "Delete current row", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        pbtnDeleteFileType->setWhatsThis(QApplication::translate("eVisGenericEventBrowserGuiBase", "Delete the file type highlighted in the table and defined by a file extension and a path to an associated application.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        pbtnDeleteFileType->setText(QString());
        displayArea->setTabText(displayArea->indexOf(ConfigureExternalApplications), QApplication::translate("eVisGenericEventBrowserGuiBase", "Configure External Applications", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class eVisGenericEventBrowserGuiBase: public Ui_eVisGenericEventBrowserGuiBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EVISGENERICEVENTBROWSERGUIBASE_H
