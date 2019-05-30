/********************************************************************************
** Form generated from reading UI file 'qgsauthoauth2edit.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSAUTHOAUTH2EDIT_H
#define UI_QGSAUTHOAUTH2EDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscollapsiblegroupbox.h"
#include "qgspasswordlineedit.h"

QT_BEGIN_NAMESPACE

class Ui_QgsAuthOAuth2Edit
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frameNotify;
    QHBoxLayout *horizontalLayout_2;
    QSplitter *splitter;
    QTabWidget *tabConfigs;
    QWidget *tabCustom;
    QVBoxLayout *verticalLayout_3;
    QFrame *horizontalFrame_2;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *lblGrantFlow;
    QComboBox *cmbbxGrantFlow;
    QToolButton *btnExport;
    QToolButton *btnImport;
    QScrollArea *scrollAreaConfigure;
    QWidget *scrollAreaWidgetContentsCustom;
    QGridLayout *gridLayout;
    QLabel *lblScope;
    QLabel *lblClientId;
    QLabel *label;
    QgsPasswordLineEdit *leClientSecret;
    QLabel *lblRedirectUrl;
    QPlainTextEdit *pteDescription;
    QLabel *lblDescription;
    QLineEdit *leRequestUrl;
    QLineEdit *leApiKey;
    QLabel *lblUsername;
    QLabel *lblRequestTimeout;
    QSpinBox *spnbxRequestTimeout;
    QLabel *lblAccessMethod;
    QLabel *lblApiKey;
    QLabel *lblRefreshTokenUrl;
    QLineEdit *leRefreshTokenUrl;
    QLabel *lblTokenPersist;
    QgsPasswordLineEdit *lePassword;
    QLineEdit *leClientId;
    QLineEdit *leUsername;
    QLabel *lblRequestUrl;
    QFrame *line;
    QLabel *lblTokenUrl;
    QComboBox *cmbbxAccessMethod;
    QLabel *lblClientSecret;
    QCheckBox *chkbxTokenPersist;
    QLabel *lblPassword;
    QLineEdit *leScope;
    QSpacerItem *verticalSpacer;
    QLineEdit *leTokenUrl;
    QFrame *frameRedirectUrl;
    QHBoxLayout *horizontalLayout_4;
    QLabel *lblRedirectIP;
    QSpinBox *spnbxRedirectPort;
    QLabel *lblRedirectUrlSep;
    QLineEdit *leRedirectUrl;
    QWidget *tabDefined;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout_5;
    QListWidget *lstwdgDefinedConfigs;
    QTextBrowser *pteDefinedDesc;
    QHBoxLayout *horizontalLayout;
    QLineEdit *leDefinedDirPath;
    QToolButton *btnGetDefinedDirPath;
    QWidget *tabStatement;
    QVBoxLayout *verticalLayout_7;
    QGridLayout *gridLayout_4;
    QLabel *lblSoftStatementDir;
    QLineEdit *leSoftwareStatementConfigUrl;
    QToolButton *btnSoftStatementDir;
    QLabel *lblConfigUrl;
    QLineEdit *leSoftwareStatementJwtPath;
    QPushButton *btnRegister;
    QSpacerItem *verticalSpacer_2;
    QgsCollapsibleGroupBoxBasic *grpbxAdvanced;
    QVBoxLayout *verticalLayout_4;
    QScrollArea *scrollAreaAdvanced;
    QWidget *scrollAreaWidgetContentsAdvanced;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QTableWidget *tblwdgQueryPairs;
    QVBoxLayout *verticalLayout_6;
    QToolButton *btnAddQueryPair;
    QToolButton *btnRemoveQueryPair;
    QSpacerItem *verticalSpacer_7;

    void setupUi(QWidget *QgsAuthOAuth2Edit)
    {
        if (QgsAuthOAuth2Edit->objectName().isEmpty())
            QgsAuthOAuth2Edit->setObjectName(QStringLiteral("QgsAuthOAuth2Edit"));
        QgsAuthOAuth2Edit->setEnabled(true);
        QgsAuthOAuth2Edit->resize(431, 676);
        verticalLayout = new QVBoxLayout(QgsAuthOAuth2Edit);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(6, 6, 6, 6);
        frameNotify = new QFrame(QgsAuthOAuth2Edit);
        frameNotify->setObjectName(QStringLiteral("frameNotify"));
        frameNotify->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frameNotify->sizePolicy().hasHeightForWidth());
        frameNotify->setSizePolicy(sizePolicy);
        horizontalLayout_2 = new QHBoxLayout(frameNotify);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);

        verticalLayout->addWidget(frameNotify);

        splitter = new QSplitter(QgsAuthOAuth2Edit);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Vertical);
        splitter->setHandleWidth(4);
        splitter->setChildrenCollapsible(false);
        tabConfigs = new QTabWidget(splitter);
        tabConfigs->setObjectName(QStringLiteral("tabConfigs"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(2);
        sizePolicy1.setHeightForWidth(tabConfigs->sizePolicy().hasHeightForWidth());
        tabConfigs->setSizePolicy(sizePolicy1);
        tabCustom = new QWidget();
        tabCustom->setObjectName(QStringLiteral("tabCustom"));
        verticalLayout_3 = new QVBoxLayout(tabCustom);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 3, 0, 0);
        horizontalFrame_2 = new QFrame(tabCustom);
        horizontalFrame_2->setObjectName(QStringLiteral("horizontalFrame_2"));
        sizePolicy.setHeightForWidth(horizontalFrame_2->sizePolicy().hasHeightForWidth());
        horizontalFrame_2->setSizePolicy(sizePolicy);
        gridLayout_2 = new QGridLayout(horizontalFrame_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(3, -1, 3, -1);
        lblGrantFlow = new QLabel(horizontalFrame_2);
        lblGrantFlow->setObjectName(QStringLiteral("lblGrantFlow"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lblGrantFlow->sizePolicy().hasHeightForWidth());
        lblGrantFlow->setSizePolicy(sizePolicy2);

        horizontalLayout_3->addWidget(lblGrantFlow);

        cmbbxGrantFlow = new QComboBox(horizontalFrame_2);
        cmbbxGrantFlow->setObjectName(QStringLiteral("cmbbxGrantFlow"));

        horizontalLayout_3->addWidget(cmbbxGrantFlow);

        btnExport = new QToolButton(horizontalFrame_2);
        btnExport->setObjectName(QStringLiteral("btnExport"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/oauth2method/oauth2_resources/export.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnExport->setIcon(icon);
        btnExport->setIconSize(QSize(16, 16));

        horizontalLayout_3->addWidget(btnExport);

        btnImport = new QToolButton(horizontalFrame_2);
        btnImport->setObjectName(QStringLiteral("btnImport"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/oauth2method/oauth2_resources/import.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnImport->setIcon(icon1);

        horizontalLayout_3->addWidget(btnImport);


        gridLayout_2->addLayout(horizontalLayout_3, 0, 2, 2, 1);


        verticalLayout_3->addWidget(horizontalFrame_2);

        scrollAreaConfigure = new QScrollArea(tabCustom);
        scrollAreaConfigure->setObjectName(QStringLiteral("scrollAreaConfigure"));
        scrollAreaConfigure->setFrameShape(QFrame::NoFrame);
        scrollAreaConfigure->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollAreaConfigure->setWidgetResizable(true);
        scrollAreaWidgetContentsCustom = new QWidget();
        scrollAreaWidgetContentsCustom->setObjectName(QStringLiteral("scrollAreaWidgetContentsCustom"));
        scrollAreaWidgetContentsCustom->setGeometry(QRect(0, 0, 406, 441));
        gridLayout = new QGridLayout(scrollAreaWidgetContentsCustom);
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(3, 3, 3, 3);
        lblScope = new QLabel(scrollAreaWidgetContentsCustom);
        lblScope->setObjectName(QStringLiteral("lblScope"));

        gridLayout->addWidget(lblScope, 11, 0, 1, 1);

        lblClientId = new QLabel(scrollAreaWidgetContentsCustom);
        lblClientId->setObjectName(QStringLiteral("lblClientId"));
        lblClientId->setWordWrap(true);

        gridLayout->addWidget(lblClientId, 7, 0, 1, 1);

        label = new QLabel(scrollAreaWidgetContentsCustom);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(12);
        font.setItalic(true);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 14, 0, 1, 4);

        leClientSecret = new QgsPasswordLineEdit(scrollAreaWidgetContentsCustom);
        leClientSecret->setObjectName(QStringLiteral("leClientSecret"));

        gridLayout->addWidget(leClientSecret, 8, 1, 1, 3);

        lblRedirectUrl = new QLabel(scrollAreaWidgetContentsCustom);
        lblRedirectUrl->setObjectName(QStringLiteral("lblRedirectUrl"));
        lblRedirectUrl->setWordWrap(true);

        gridLayout->addWidget(lblRedirectUrl, 4, 0, 1, 1);

        pteDescription = new QPlainTextEdit(scrollAreaWidgetContentsCustom);
        pteDescription->setObjectName(QStringLiteral("pteDescription"));
        pteDescription->setMaximumSize(QSize(16777215, 40));

        gridLayout->addWidget(pteDescription, 0, 1, 1, 3);

        lblDescription = new QLabel(scrollAreaWidgetContentsCustom);
        lblDescription->setObjectName(QStringLiteral("lblDescription"));
        lblDescription->setWordWrap(true);

        gridLayout->addWidget(lblDescription, 0, 0, 1, 1);

        leRequestUrl = new QLineEdit(scrollAreaWidgetContentsCustom);
        leRequestUrl->setObjectName(QStringLiteral("leRequestUrl"));

        gridLayout->addWidget(leRequestUrl, 1, 1, 1, 3);

        leApiKey = new QLineEdit(scrollAreaWidgetContentsCustom);
        leApiKey->setObjectName(QStringLiteral("leApiKey"));

        gridLayout->addWidget(leApiKey, 12, 1, 1, 3);

        lblUsername = new QLabel(scrollAreaWidgetContentsCustom);
        lblUsername->setObjectName(QStringLiteral("lblUsername"));

        gridLayout->addWidget(lblUsername, 9, 0, 1, 1);

        lblRequestTimeout = new QLabel(scrollAreaWidgetContentsCustom);
        lblRequestTimeout->setObjectName(QStringLiteral("lblRequestTimeout"));
        sizePolicy2.setHeightForWidth(lblRequestTimeout->sizePolicy().hasHeightForWidth());
        lblRequestTimeout->setSizePolicy(sizePolicy2);
        lblRequestTimeout->setWordWrap(true);

        gridLayout->addWidget(lblRequestTimeout, 17, 0, 1, 1);

        spnbxRequestTimeout = new QSpinBox(scrollAreaWidgetContentsCustom);
        spnbxRequestTimeout->setObjectName(QStringLiteral("spnbxRequestTimeout"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(spnbxRequestTimeout->sizePolicy().hasHeightForWidth());
        spnbxRequestTimeout->setSizePolicy(sizePolicy3);
        spnbxRequestTimeout->setAlignment(Qt::AlignCenter);
        spnbxRequestTimeout->setMinimum(5);
        spnbxRequestTimeout->setMaximum(3600);
        spnbxRequestTimeout->setValue(30);

        gridLayout->addWidget(spnbxRequestTimeout, 17, 1, 1, 1);

        lblAccessMethod = new QLabel(scrollAreaWidgetContentsCustom);
        lblAccessMethod->setObjectName(QStringLiteral("lblAccessMethod"));
        sizePolicy2.setHeightForWidth(lblAccessMethod->sizePolicy().hasHeightForWidth());
        lblAccessMethod->setSizePolicy(sizePolicy2);
        lblAccessMethod->setWordWrap(true);

        gridLayout->addWidget(lblAccessMethod, 16, 0, 1, 1);

        lblApiKey = new QLabel(scrollAreaWidgetContentsCustom);
        lblApiKey->setObjectName(QStringLiteral("lblApiKey"));
        sizePolicy2.setHeightForWidth(lblApiKey->sizePolicy().hasHeightForWidth());
        lblApiKey->setSizePolicy(sizePolicy2);
        lblApiKey->setWordWrap(true);

        gridLayout->addWidget(lblApiKey, 12, 0, 1, 1);

        lblRefreshTokenUrl = new QLabel(scrollAreaWidgetContentsCustom);
        lblRefreshTokenUrl->setObjectName(QStringLiteral("lblRefreshTokenUrl"));
        lblRefreshTokenUrl->setWordWrap(true);

        gridLayout->addWidget(lblRefreshTokenUrl, 3, 0, 1, 1);

        leRefreshTokenUrl = new QLineEdit(scrollAreaWidgetContentsCustom);
        leRefreshTokenUrl->setObjectName(QStringLiteral("leRefreshTokenUrl"));

        gridLayout->addWidget(leRefreshTokenUrl, 3, 1, 1, 3);

        lblTokenPersist = new QLabel(scrollAreaWidgetContentsCustom);
        lblTokenPersist->setObjectName(QStringLiteral("lblTokenPersist"));
        lblTokenPersist->setWordWrap(true);

        gridLayout->addWidget(lblTokenPersist, 15, 0, 1, 1);

        lePassword = new QgsPasswordLineEdit(scrollAreaWidgetContentsCustom);
        lePassword->setObjectName(QStringLiteral("lePassword"));

        gridLayout->addWidget(lePassword, 10, 1, 1, 3);

        leClientId = new QLineEdit(scrollAreaWidgetContentsCustom);
        leClientId->setObjectName(QStringLiteral("leClientId"));

        gridLayout->addWidget(leClientId, 7, 1, 1, 3);

        leUsername = new QLineEdit(scrollAreaWidgetContentsCustom);
        leUsername->setObjectName(QStringLiteral("leUsername"));

        gridLayout->addWidget(leUsername, 9, 1, 1, 3);

        lblRequestUrl = new QLabel(scrollAreaWidgetContentsCustom);
        lblRequestUrl->setObjectName(QStringLiteral("lblRequestUrl"));
        lblRequestUrl->setWordWrap(true);

        gridLayout->addWidget(lblRequestUrl, 1, 0, 1, 1);

        line = new QFrame(scrollAreaWidgetContentsCustom);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 13, 0, 1, 4);

        lblTokenUrl = new QLabel(scrollAreaWidgetContentsCustom);
        lblTokenUrl->setObjectName(QStringLiteral("lblTokenUrl"));
        lblTokenUrl->setWordWrap(true);

        gridLayout->addWidget(lblTokenUrl, 2, 0, 1, 1);

        cmbbxAccessMethod = new QComboBox(scrollAreaWidgetContentsCustom);
        cmbbxAccessMethod->setObjectName(QStringLiteral("cmbbxAccessMethod"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(cmbbxAccessMethod->sizePolicy().hasHeightForWidth());
        cmbbxAccessMethod->setSizePolicy(sizePolicy4);

        gridLayout->addWidget(cmbbxAccessMethod, 16, 1, 1, 3);

        lblClientSecret = new QLabel(scrollAreaWidgetContentsCustom);
        lblClientSecret->setObjectName(QStringLiteral("lblClientSecret"));
        lblClientSecret->setWordWrap(true);

        gridLayout->addWidget(lblClientSecret, 8, 0, 1, 1);

        chkbxTokenPersist = new QCheckBox(scrollAreaWidgetContentsCustom);
        chkbxTokenPersist->setObjectName(QStringLiteral("chkbxTokenPersist"));

        gridLayout->addWidget(chkbxTokenPersist, 15, 1, 1, 2);

        lblPassword = new QLabel(scrollAreaWidgetContentsCustom);
        lblPassword->setObjectName(QStringLiteral("lblPassword"));

        gridLayout->addWidget(lblPassword, 10, 0, 1, 1);

        leScope = new QLineEdit(scrollAreaWidgetContentsCustom);
        leScope->setObjectName(QStringLiteral("leScope"));

        gridLayout->addWidget(leScope, 11, 1, 1, 3);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 18, 1, 1, 1);

        leTokenUrl = new QLineEdit(scrollAreaWidgetContentsCustom);
        leTokenUrl->setObjectName(QStringLiteral("leTokenUrl"));

        gridLayout->addWidget(leTokenUrl, 2, 1, 1, 3);

        frameRedirectUrl = new QFrame(scrollAreaWidgetContentsCustom);
        frameRedirectUrl->setObjectName(QStringLiteral("frameRedirectUrl"));
        horizontalLayout_4 = new QHBoxLayout(frameRedirectUrl);
        horizontalLayout_4->setSpacing(2);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        lblRedirectIP = new QLabel(frameRedirectUrl);
        lblRedirectIP->setObjectName(QStringLiteral("lblRedirectIP"));

        horizontalLayout_4->addWidget(lblRedirectIP);

        spnbxRedirectPort = new QSpinBox(frameRedirectUrl);
        spnbxRedirectPort->setObjectName(QStringLiteral("spnbxRedirectPort"));
        sizePolicy3.setHeightForWidth(spnbxRedirectPort->sizePolicy().hasHeightForWidth());
        spnbxRedirectPort->setSizePolicy(sizePolicy3);
        spnbxRedirectPort->setAlignment(Qt::AlignCenter);
        spnbxRedirectPort->setMinimum(0);
        spnbxRedirectPort->setMaximum(9999);
        spnbxRedirectPort->setValue(0);

        horizontalLayout_4->addWidget(spnbxRedirectPort);

        lblRedirectUrlSep = new QLabel(frameRedirectUrl);
        lblRedirectUrlSep->setObjectName(QStringLiteral("lblRedirectUrlSep"));

        horizontalLayout_4->addWidget(lblRedirectUrlSep);

        leRedirectUrl = new QLineEdit(frameRedirectUrl);
        leRedirectUrl->setObjectName(QStringLiteral("leRedirectUrl"));
        leRedirectUrl->setMinimumSize(QSize(50, 0));

        horizontalLayout_4->addWidget(leRedirectUrl);


        gridLayout->addWidget(frameRedirectUrl, 4, 1, 1, 3);

        scrollAreaConfigure->setWidget(scrollAreaWidgetContentsCustom);

        verticalLayout_3->addWidget(scrollAreaConfigure);

        tabConfigs->addTab(tabCustom, QString());
        tabDefined = new QWidget();
        tabDefined->setObjectName(QStringLiteral("tabDefined"));
        verticalLayout_2 = new QVBoxLayout(tabDefined);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(3, 3, 3, 0);
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        lstwdgDefinedConfigs = new QListWidget(tabDefined);
        lstwdgDefinedConfigs->setObjectName(QStringLiteral("lstwdgDefinedConfigs"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(4);
        sizePolicy5.setHeightForWidth(lstwdgDefinedConfigs->sizePolicy().hasHeightForWidth());
        lstwdgDefinedConfigs->setSizePolicy(sizePolicy5);
        QFont font1;
        font1.setPointSize(13);
        lstwdgDefinedConfigs->setFont(font1);
        lstwdgDefinedConfigs->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        lstwdgDefinedConfigs->setEditTriggers(QAbstractItemView::NoEditTriggers);
        lstwdgDefinedConfigs->setProperty("showDropIndicator", QVariant(false));
        lstwdgDefinedConfigs->setAlternatingRowColors(true);
        lstwdgDefinedConfigs->setVerticalScrollMode(QAbstractItemView::ScrollPerItem);
        lstwdgDefinedConfigs->setSpacing(2);
        lstwdgDefinedConfigs->setUniformItemSizes(true);

        verticalLayout_5->addWidget(lstwdgDefinedConfigs);

        pteDefinedDesc = new QTextBrowser(tabDefined);
        pteDefinedDesc->setObjectName(QStringLiteral("pteDefinedDesc"));
        pteDefinedDesc->setOpenExternalLinks(false);

        verticalLayout_5->addWidget(pteDefinedDesc);

        verticalLayout_5->setStretch(0, 1);

        verticalLayout_2->addLayout(verticalLayout_5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        leDefinedDirPath = new QLineEdit(tabDefined);
        leDefinedDirPath->setObjectName(QStringLiteral("leDefinedDirPath"));
        leDefinedDirPath->setReadOnly(true);

        horizontalLayout->addWidget(leDefinedDirPath);

        btnGetDefinedDirPath = new QToolButton(tabDefined);
        btnGetDefinedDirPath->setObjectName(QStringLiteral("btnGetDefinedDirPath"));
        btnGetDefinedDirPath->setStyleSheet(QStringLiteral(""));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/oauth2method/oauth2_resources/fileopen.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnGetDefinedDirPath->setIcon(icon2);
        btnGetDefinedDirPath->setIconSize(QSize(20, 14));

        horizontalLayout->addWidget(btnGetDefinedDirPath);


        verticalLayout_2->addLayout(horizontalLayout);

        tabConfigs->addTab(tabDefined, QString());
        tabStatement = new QWidget();
        tabStatement->setObjectName(QStringLiteral("tabStatement"));
        verticalLayout_7 = new QVBoxLayout(tabStatement);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        lblSoftStatementDir = new QLabel(tabStatement);
        lblSoftStatementDir->setObjectName(QStringLiteral("lblSoftStatementDir"));

        gridLayout_4->addWidget(lblSoftStatementDir, 1, 0, 1, 1);

        leSoftwareStatementConfigUrl = new QLineEdit(tabStatement);
        leSoftwareStatementConfigUrl->setObjectName(QStringLiteral("leSoftwareStatementConfigUrl"));

        gridLayout_4->addWidget(leSoftwareStatementConfigUrl, 0, 1, 1, 1);

        btnSoftStatementDir = new QToolButton(tabStatement);
        btnSoftStatementDir->setObjectName(QStringLiteral("btnSoftStatementDir"));
        btnSoftStatementDir->setIcon(icon2);

        gridLayout_4->addWidget(btnSoftStatementDir, 1, 2, 1, 1);

        lblConfigUrl = new QLabel(tabStatement);
        lblConfigUrl->setObjectName(QStringLiteral("lblConfigUrl"));

        gridLayout_4->addWidget(lblConfigUrl, 0, 0, 1, 1);

        leSoftwareStatementJwtPath = new QLineEdit(tabStatement);
        leSoftwareStatementJwtPath->setObjectName(QStringLiteral("leSoftwareStatementJwtPath"));

        gridLayout_4->addWidget(leSoftwareStatementJwtPath, 1, 1, 1, 1);

        btnRegister = new QPushButton(tabStatement);
        btnRegister->setObjectName(QStringLiteral("btnRegister"));
        btnRegister->setEnabled(false);

        gridLayout_4->addWidget(btnRegister, 2, 1, 1, 1);


        verticalLayout_7->addLayout(gridLayout_4);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_2);

        tabConfigs->addTab(tabStatement, QString());
        splitter->addWidget(tabConfigs);
        grpbxAdvanced = new QgsCollapsibleGroupBoxBasic(splitter);
        grpbxAdvanced->setObjectName(QStringLiteral("grpbxAdvanced"));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(4);
        sizePolicy6.setHeightForWidth(grpbxAdvanced->sizePolicy().hasHeightForWidth());
        grpbxAdvanced->setSizePolicy(sizePolicy6);
        verticalLayout_4 = new QVBoxLayout(grpbxAdvanced);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        scrollAreaAdvanced = new QScrollArea(grpbxAdvanced);
        scrollAreaAdvanced->setObjectName(QStringLiteral("scrollAreaAdvanced"));
        scrollAreaAdvanced->setFrameShape(QFrame::NoFrame);
        scrollAreaAdvanced->setWidgetResizable(true);
        scrollAreaWidgetContentsAdvanced = new QWidget();
        scrollAreaWidgetContentsAdvanced->setObjectName(QStringLiteral("scrollAreaWidgetContentsAdvanced"));
        scrollAreaWidgetContentsAdvanced->setGeometry(QRect(0, 0, 413, 306));
        gridLayout_3 = new QGridLayout(scrollAreaWidgetContentsAdvanced);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(3, 3, 3, 3);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(3);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        tblwdgQueryPairs = new QTableWidget(scrollAreaWidgetContentsAdvanced);
        if (tblwdgQueryPairs->columnCount() < 2)
            tblwdgQueryPairs->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tblwdgQueryPairs->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tblwdgQueryPairs->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tblwdgQueryPairs->setObjectName(QStringLiteral("tblwdgQueryPairs"));
        tblwdgQueryPairs->setEditTriggers(QAbstractItemView::AllEditTriggers);
        tblwdgQueryPairs->setDragEnabled(true);
        tblwdgQueryPairs->setDragDropMode(QAbstractItemView::DragOnly);
        tblwdgQueryPairs->setSelectionMode(QAbstractItemView::SingleSelection);
        tblwdgQueryPairs->setSortingEnabled(true);
        tblwdgQueryPairs->setWordWrap(false);
        tblwdgQueryPairs->horizontalHeader()->setDefaultSectionSize(120);
        tblwdgQueryPairs->horizontalHeader()->setMinimumSectionSize(120);
        tblwdgQueryPairs->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        tblwdgQueryPairs->horizontalHeader()->setStretchLastSection(true);
        tblwdgQueryPairs->verticalHeader()->setVisible(false);

        horizontalLayout_5->addWidget(tblwdgQueryPairs);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        btnAddQueryPair = new QToolButton(scrollAreaWidgetContentsAdvanced);
        btnAddQueryPair->setObjectName(QStringLiteral("btnAddQueryPair"));
        btnAddQueryPair->setMinimumSize(QSize(24, 0));
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        btnAddQueryPair->setFont(font2);
        btnAddQueryPair->setText(QStringLiteral("+"));

        verticalLayout_6->addWidget(btnAddQueryPair);

        btnRemoveQueryPair = new QToolButton(scrollAreaWidgetContentsAdvanced);
        btnRemoveQueryPair->setObjectName(QStringLiteral("btnRemoveQueryPair"));
        btnRemoveQueryPair->setMinimumSize(QSize(24, 0));
        btnRemoveQueryPair->setFont(font2);
        btnRemoveQueryPair->setText(QString::fromUtf8("\342\200\223"));

        verticalLayout_6->addWidget(btnRemoveQueryPair);

        verticalSpacer_7 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_7);


        horizontalLayout_5->addLayout(verticalLayout_6);


        gridLayout_3->addLayout(horizontalLayout_5, 3, 0, 1, 2);

        scrollAreaAdvanced->setWidget(scrollAreaWidgetContentsAdvanced);

        verticalLayout_4->addWidget(scrollAreaAdvanced);

        splitter->addWidget(grpbxAdvanced);

        verticalLayout->addWidget(splitter);

        QWidget::setTabOrder(cmbbxGrantFlow, pteDescription);
        QWidget::setTabOrder(pteDescription, leRequestUrl);
        QWidget::setTabOrder(leRequestUrl, leTokenUrl);
        QWidget::setTabOrder(leTokenUrl, leRefreshTokenUrl);
        QWidget::setTabOrder(leRefreshTokenUrl, spnbxRedirectPort);
        QWidget::setTabOrder(spnbxRedirectPort, leRedirectUrl);
        QWidget::setTabOrder(leRedirectUrl, leClientId);
        QWidget::setTabOrder(leClientId, leClientSecret);
        QWidget::setTabOrder(leClientSecret, leUsername);
        QWidget::setTabOrder(leUsername, lePassword);
        QWidget::setTabOrder(lePassword, leScope);
        QWidget::setTabOrder(leScope, leApiKey);
        QWidget::setTabOrder(leApiKey, chkbxTokenPersist);
        QWidget::setTabOrder(chkbxTokenPersist, cmbbxAccessMethod);
        QWidget::setTabOrder(cmbbxAccessMethod, spnbxRequestTimeout);
        QWidget::setTabOrder(spnbxRequestTimeout, scrollAreaAdvanced);
        QWidget::setTabOrder(scrollAreaAdvanced, tblwdgQueryPairs);
        QWidget::setTabOrder(tblwdgQueryPairs, btnAddQueryPair);
        QWidget::setTabOrder(btnAddQueryPair, btnRemoveQueryPair);
        QWidget::setTabOrder(btnRemoveQueryPair, btnExport);
        QWidget::setTabOrder(btnExport, btnImport);
        QWidget::setTabOrder(btnImport, leDefinedDirPath);
        QWidget::setTabOrder(leDefinedDirPath, tabConfigs);
        QWidget::setTabOrder(tabConfigs, scrollAreaConfigure);
        QWidget::setTabOrder(scrollAreaConfigure, btnGetDefinedDirPath);
        QWidget::setTabOrder(btnGetDefinedDirPath, lstwdgDefinedConfigs);
        QWidget::setTabOrder(lstwdgDefinedConfigs, pteDefinedDesc);

        retranslateUi(QgsAuthOAuth2Edit);

        tabConfigs->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(QgsAuthOAuth2Edit);
    } // setupUi

    void retranslateUi(QWidget *QgsAuthOAuth2Edit)
    {
        lblGrantFlow->setText(QApplication::translate("QgsAuthOAuth2Edit", "Grant Flow", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnExport->setToolTip(QApplication::translate("QgsAuthOAuth2Edit", "Export configuration", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnExport->setText(QApplication::translate("QgsAuthOAuth2Edit", "\342\200\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnImport->setToolTip(QApplication::translate("QgsAuthOAuth2Edit", "Import configuration", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnImport->setText(QApplication::translate("QgsAuthOAuth2Edit", "\342\200\246", Q_NULLPTR));
        lblScope->setText(QApplication::translate("QgsAuthOAuth2Edit", "Scope", Q_NULLPTR));
        lblClientId->setText(QApplication::translate("QgsAuthOAuth2Edit", "Client ID", Q_NULLPTR));
        label->setText(QApplication::translate("QgsAuthOAuth2Edit", "Advanced", Q_NULLPTR));
        leClientSecret->setPlaceholderText(QApplication::translate("QgsAuthOAuth2Edit", "Required", Q_NULLPTR));
        lblRedirectUrl->setText(QApplication::translate("QgsAuthOAuth2Edit", "Redirect URL", Q_NULLPTR));
        lblDescription->setText(QApplication::translate("QgsAuthOAuth2Edit", "Description", Q_NULLPTR));
        leRequestUrl->setPlaceholderText(QApplication::translate("QgsAuthOAuth2Edit", "Required", Q_NULLPTR));
        leApiKey->setPlaceholderText(QApplication::translate("QgsAuthOAuth2Edit", "Optional", Q_NULLPTR));
        lblUsername->setText(QApplication::translate("QgsAuthOAuth2Edit", "Username", Q_NULLPTR));
        lblRequestTimeout->setText(QApplication::translate("QgsAuthOAuth2Edit", "Request Timeout", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        spnbxRequestTimeout->setToolTip(QApplication::translate("QgsAuthOAuth2Edit", "Authorization-related timeout", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        spnbxRequestTimeout->setSuffix(QApplication::translate("QgsAuthOAuth2Edit", " seconds", Q_NULLPTR));
        lblAccessMethod->setText(QApplication::translate("QgsAuthOAuth2Edit", "Access Method", Q_NULLPTR));
        lblApiKey->setText(QApplication::translate("QgsAuthOAuth2Edit", "API Key", Q_NULLPTR));
        lblRefreshTokenUrl->setText(QApplication::translate("QgsAuthOAuth2Edit", "Refresh Token URL", Q_NULLPTR));
        leRefreshTokenUrl->setPlaceholderText(QApplication::translate("QgsAuthOAuth2Edit", "Optional", Q_NULLPTR));
        lblTokenPersist->setText(QApplication::translate("QgsAuthOAuth2Edit", "Token Session", Q_NULLPTR));
        lePassword->setPlaceholderText(QApplication::translate("QgsAuthOAuth2Edit", "Required", Q_NULLPTR));
        leClientId->setPlaceholderText(QApplication::translate("QgsAuthOAuth2Edit", "Required", Q_NULLPTR));
        leUsername->setPlaceholderText(QApplication::translate("QgsAuthOAuth2Edit", "Required", Q_NULLPTR));
        lblRequestUrl->setText(QApplication::translate("QgsAuthOAuth2Edit", "Request URL", Q_NULLPTR));
        lblTokenUrl->setText(QApplication::translate("QgsAuthOAuth2Edit", "Token URL", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        cmbbxAccessMethod->setToolTip(QApplication::translate("QgsAuthOAuth2Edit", "Resource access token method", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        lblClientSecret->setText(QApplication::translate("QgsAuthOAuth2Edit", "Client Secret", Q_NULLPTR));
        chkbxTokenPersist->setText(QApplication::translate("QgsAuthOAuth2Edit", "Persist between launches", Q_NULLPTR));
        lblPassword->setText(QApplication::translate("QgsAuthOAuth2Edit", "Password", Q_NULLPTR));
        leScope->setPlaceholderText(QApplication::translate("QgsAuthOAuth2Edit", "Optional (space delimiter)", Q_NULLPTR));
        leTokenUrl->setPlaceholderText(QApplication::translate("QgsAuthOAuth2Edit", "Required", Q_NULLPTR));
        lblRedirectIP->setText(QApplication::translate("QgsAuthOAuth2Edit", "http://127.0.0.1:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        spnbxRedirectPort->setToolTip(QApplication::translate("QgsAuthOAuth2Edit", "Port number", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        lblRedirectUrlSep->setText(QApplication::translate("QgsAuthOAuth2Edit", "/", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        leRedirectUrl->setToolTip(QApplication::translate("QgsAuthOAuth2Edit", "Subdirectory", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        leRedirectUrl->setPlaceholderText(QApplication::translate("QgsAuthOAuth2Edit", "Optional", Q_NULLPTR));
        tabConfigs->setTabText(tabConfigs->indexOf(tabCustom), QApplication::translate("QgsAuthOAuth2Edit", "Configure", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnGetDefinedDirPath->setToolTip(QApplication::translate("QgsAuthOAuth2Edit", "Add extra config directory to parse", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnGetDefinedDirPath->setText(QApplication::translate("QgsAuthOAuth2Edit", "\342\200\246", Q_NULLPTR));
        tabConfigs->setTabText(tabConfigs->indexOf(tabDefined), QApplication::translate("QgsAuthOAuth2Edit", "Defined", Q_NULLPTR));
        lblSoftStatementDir->setText(QApplication::translate("QgsAuthOAuth2Edit", "Software Statement", Q_NULLPTR));
        leSoftwareStatementConfigUrl->setPlaceholderText(QApplication::translate("QgsAuthOAuth2Edit", "Optional", Q_NULLPTR));
        btnSoftStatementDir->setText(QApplication::translate("QgsAuthOAuth2Edit", "\342\200\246", Q_NULLPTR));
        lblConfigUrl->setText(QApplication::translate("QgsAuthOAuth2Edit", "Configuration Url", Q_NULLPTR));
        leSoftwareStatementJwtPath->setPlaceholderText(QApplication::translate("QgsAuthOAuth2Edit", "Required", Q_NULLPTR));
        btnRegister->setText(QApplication::translate("QgsAuthOAuth2Edit", "Register", Q_NULLPTR));
        tabConfigs->setTabText(tabConfigs->indexOf(tabStatement), QApplication::translate("QgsAuthOAuth2Edit", "Software Statement", Q_NULLPTR));
        grpbxAdvanced->setTitle(QApplication::translate("QgsAuthOAuth2Edit", "Extra initial request parameters", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tblwdgQueryPairs->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("QgsAuthOAuth2Edit", "Key", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tblwdgQueryPairs->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("QgsAuthOAuth2Edit", "Value (unencoded)", Q_NULLPTR));
        Q_UNUSED(QgsAuthOAuth2Edit);
    } // retranslateUi

};

namespace Ui {
    class QgsAuthOAuth2Edit: public Ui_QgsAuthOAuth2Edit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSAUTHOAUTH2EDIT_H
