/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tabGeneral;
    QGroupBox *gbNavig;
    QPushButton *navBtnExecPath;
    QLineEdit *navTxtStartPose;
    QLineEdit *navTxtGoalPose;
    QLabel *navLblStartPose;
    QPushButton *navBtnCalcPath;
    QLabel *navLblGoalPose;
    QLineEdit *txtLinearX;
    QLabel *label_2;
    QPushButton *btnRight;
    QPushButton *btnFwd;
    QPushButton *btnLeft;
    QLineEdit *txtAngular;
    QLabel *label_4;
    QPushButton *btnBwd;
    QPushButton *btnCmdVel;
    QLineEdit *navTxtSmoothAlpha;
    QLineEdit *navTxtInflation;
    QLabel *navLblNearness;
    QLabel *navLblSmoothing;
    QLabel *navLblSmoothBeta;
    QLineEdit *navTxtSmoothBeta;
    QLabel *navLblSmoothAlpha;
    QLabel *navLblInflate;
    QLineEdit *navTxtNearness;
    QLabel *navLblRadius;
    QGroupBox *gbManip;
    QDoubleSpinBox *raTxtAngles6;
    QLabel *raLblAngles3_2;
    QDoubleSpinBox *laTxtAngles5;
    QDoubleSpinBox *laTxtAngles1;
    QDoubleSpinBox *raTxtAngles5;
    QDoubleSpinBox *raTxtAngles7;
    QDoubleSpinBox *raTxtAngles1;
    QDoubleSpinBox *laTxtAngles4;
    QLabel *raLblAngles4_2;
    QLabel *raLblAngles1_2;
    QLabel *laLblAngles2_2;
    QLabel *raLblAngles5_2;
    QDoubleSpinBox *raTxtAngles4;
    QLabel *laLblAngles6_2;
    QLabel *laLblAngles5_2;
    QDoubleSpinBox *laTxtAngles6;
    QDoubleSpinBox *laTxtAngles2;
    QLabel *raLblAngles6_2;
    QDoubleSpinBox *raTxtAngles3;
    QDoubleSpinBox *laTxtAngles7;
    QLabel *laLblAngles4_2;
    QDoubleSpinBox *laTxtAngles3;
    QLabel *laLblAngles1_2;
    QDoubleSpinBox *raTxtAngles2;
    QLabel *raLblAngles2_2;
    QLabel *laLblAngles3_2;
    QLineEdit *laTxtPredefined;
    QLabel *hdLblHeadPoseLbl_3;
    QLineEdit *raTxtPredefined;
    QLabel *laLblAngles6_3;
    QDoubleSpinBox *laTxtAnglesG;
    QLabel *laLblAngles6_4;
    QDoubleSpinBox *raTxtAnglesG;
    QLabel *laLblAngles0_2;
    QLabel *laLblAngles0_3;
    QGroupBox *gbHead;
    QDoubleSpinBox *hdTxtPan;
    QLabel *hdLblPan;
    QLabel *label;
    QDoubleSpinBox *hdTxtTilt;
    QLabel *hdLblHeadPoseLbl;
    QLineEdit *hdTxtPredefined;
    QGroupBox *gbSpeech;
    QLineEdit *spgTxtSay;
    QLabel *spgLabel;
    QLabel *sprLabel;
    QLabel *sprLblLastRecog;
    QLineEdit *sprTxtFakeRecog;
    QLabel *laLblAngles6_5;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(640, 554);
        MainWindow->setStyleSheet(QLatin1String("QGroupBox {\n"
"    border: 1px solid gray;\n"
"    border-radius: 9px;\n"
"    margin-top: 0.5em;\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"    subcontrol-origin: margin;\n"
"    left: 10px;\n"
"    padding: 0 3px 0 3px;\n"
"}\n"
"\n"
"QRadioButton{\n"
"	spacing: 1px;\n"
"}\n"
"QRadioButton::indicator{\n"
"	width: 16px;\n"
"	height: 16px;\n"
"}"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 631, 511));
        tabGeneral = new QWidget();
        tabGeneral->setObjectName(QStringLiteral("tabGeneral"));
        gbNavig = new QGroupBox(tabGeneral);
        gbNavig->setObjectName(QStringLiteral("gbNavig"));
        gbNavig->setGeometry(QRect(10, 0, 301, 371));
        gbNavig->setStyleSheet(QStringLiteral(""));
        navBtnExecPath = new QPushButton(gbNavig);
        navBtnExecPath->setObjectName(QStringLiteral("navBtnExecPath"));
        navBtnExecPath->setGeometry(QRect(215, 165, 81, 31));
        navTxtStartPose = new QLineEdit(gbNavig);
        navTxtStartPose->setObjectName(QStringLiteral("navTxtStartPose"));
        navTxtStartPose->setGeometry(QRect(89, 140, 121, 23));
        navTxtGoalPose = new QLineEdit(gbNavig);
        navTxtGoalPose->setObjectName(QStringLiteral("navTxtGoalPose"));
        navTxtGoalPose->setGeometry(QRect(89, 170, 121, 23));
        navLblStartPose = new QLabel(gbNavig);
        navLblStartPose->setObjectName(QStringLiteral("navLblStartPose"));
        navLblStartPose->setGeometry(QRect(10, 140, 81, 17));
        navBtnCalcPath = new QPushButton(gbNavig);
        navBtnCalcPath->setObjectName(QStringLiteral("navBtnCalcPath"));
        navBtnCalcPath->setGeometry(QRect(214, 130, 81, 31));
        navLblGoalPose = new QLabel(gbNavig);
        navLblGoalPose->setObjectName(QStringLiteral("navLblGoalPose"));
        navLblGoalPose->setGeometry(QRect(10, 170, 81, 17));
        txtLinearX = new QLineEdit(gbNavig);
        txtLinearX->setObjectName(QStringLiteral("txtLinearX"));
        txtLinearX->setGeometry(QRect(210, 25, 81, 27));
        label_2 = new QLabel(gbNavig);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(190, 30, 16, 17));
        btnRight = new QPushButton(gbNavig);
        btnRight->setObjectName(QStringLiteral("btnRight"));
        btnRight->setGeometry(QRect(125, 50, 50, 40));
        btnRight->setIconSize(QSize(32, 32));
        btnFwd = new QPushButton(gbNavig);
        btnFwd->setObjectName(QStringLiteral("btnFwd"));
        btnFwd->setGeometry(QRect(65, 20, 50, 40));
        btnFwd->setIconSize(QSize(32, 32));
        btnLeft = new QPushButton(gbNavig);
        btnLeft->setObjectName(QStringLiteral("btnLeft"));
        btnLeft->setGeometry(QRect(5, 50, 50, 40));
        btnLeft->setIconSize(QSize(32, 32));
        txtAngular = new QLineEdit(gbNavig);
        txtAngular->setObjectName(QStringLiteral("txtAngular"));
        txtAngular->setGeometry(QRect(210, 55, 81, 27));
        label_4 = new QLabel(gbNavig);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(190, 60, 16, 17));
        btnBwd = new QPushButton(gbNavig);
        btnBwd->setObjectName(QStringLiteral("btnBwd"));
        btnBwd->setGeometry(QRect(65, 80, 50, 40));
        btnBwd->setIconSize(QSize(32, 32));
        btnCmdVel = new QPushButton(gbNavig);
        btnCmdVel->setObjectName(QStringLiteral("btnCmdVel"));
        btnCmdVel->setGeometry(QRect(190, 90, 101, 27));
        navTxtSmoothAlpha = new QLineEdit(gbNavig);
        navTxtSmoothAlpha->setObjectName(QStringLiteral("navTxtSmoothAlpha"));
        navTxtSmoothAlpha->setGeometry(QRect(220, 230, 71, 23));
        navTxtInflation = new QLineEdit(gbNavig);
        navTxtInflation->setObjectName(QStringLiteral("navTxtInflation"));
        navTxtInflation->setGeometry(QRect(80, 230, 81, 23));
        navLblNearness = new QLabel(gbNavig);
        navLblNearness->setObjectName(QStringLiteral("navLblNearness"));
        navLblNearness->setGeometry(QRect(10, 255, 81, 17));
        navLblSmoothing = new QLabel(gbNavig);
        navLblSmoothing->setObjectName(QStringLiteral("navLblSmoothing"));
        navLblSmoothing->setGeometry(QRect(170, 205, 81, 17));
        navLblSmoothBeta = new QLabel(gbNavig);
        navLblSmoothBeta->setObjectName(QStringLiteral("navLblSmoothBeta"));
        navLblSmoothBeta->setGeometry(QRect(170, 255, 51, 17));
        navTxtSmoothBeta = new QLineEdit(gbNavig);
        navTxtSmoothBeta->setObjectName(QStringLiteral("navTxtSmoothBeta"));
        navTxtSmoothBeta->setGeometry(QRect(220, 255, 71, 23));
        navLblSmoothAlpha = new QLabel(gbNavig);
        navLblSmoothAlpha->setObjectName(QStringLiteral("navLblSmoothAlpha"));
        navLblSmoothAlpha->setGeometry(QRect(170, 230, 51, 17));
        navLblInflate = new QLabel(gbNavig);
        navLblInflate->setObjectName(QStringLiteral("navLblInflate"));
        navLblInflate->setGeometry(QRect(10, 230, 71, 17));
        navTxtNearness = new QLineEdit(gbNavig);
        navTxtNearness->setObjectName(QStringLiteral("navTxtNearness"));
        navTxtNearness->setGeometry(QRect(80, 255, 81, 23));
        navLblRadius = new QLabel(gbNavig);
        navLblRadius->setObjectName(QStringLiteral("navLblRadius"));
        navLblRadius->setGeometry(QRect(10, 205, 121, 17));
        gbManip = new QGroupBox(tabGeneral);
        gbManip->setObjectName(QStringLiteral("gbManip"));
        gbManip->setGeometry(QRect(320, 0, 301, 291));
        raTxtAngles6 = new QDoubleSpinBox(gbManip);
        raTxtAngles6->setObjectName(QStringLiteral("raTxtAngles6"));
        raTxtAngles6->setGeometry(QRect(190, 150, 80, 25));
        raTxtAngles6->setKeyboardTracking(false);
        raTxtAngles6->setDecimals(4);
        raTxtAngles6->setMinimum(-3.1416);
        raTxtAngles6->setMaximum(3.1416);
        raTxtAngles6->setSingleStep(0.1);
        raLblAngles3_2 = new QLabel(gbManip);
        raLblAngles3_2->setObjectName(QStringLiteral("raLblAngles3_2"));
        raLblAngles3_2->setGeometry(QRect(150, 80, 41, 17));
        laTxtAngles5 = new QDoubleSpinBox(gbManip);
        laTxtAngles5->setObjectName(QStringLiteral("laTxtAngles5"));
        laTxtAngles5->setGeometry(QRect(50, 125, 80, 25));
        laTxtAngles5->setKeyboardTracking(false);
        laTxtAngles5->setDecimals(4);
        laTxtAngles5->setMinimum(-3.1416);
        laTxtAngles5->setMaximum(3.1416);
        laTxtAngles5->setSingleStep(0.1);
        laTxtAngles1 = new QDoubleSpinBox(gbManip);
        laTxtAngles1->setObjectName(QStringLiteral("laTxtAngles1"));
        laTxtAngles1->setGeometry(QRect(50, 25, 80, 25));
        laTxtAngles1->setKeyboardTracking(false);
        laTxtAngles1->setDecimals(4);
        laTxtAngles1->setMinimum(-3.1416);
        laTxtAngles1->setMaximum(3.1416);
        laTxtAngles1->setSingleStep(0.1);
        raTxtAngles5 = new QDoubleSpinBox(gbManip);
        raTxtAngles5->setObjectName(QStringLiteral("raTxtAngles5"));
        raTxtAngles5->setGeometry(QRect(190, 125, 80, 25));
        raTxtAngles5->setKeyboardTracking(false);
        raTxtAngles5->setDecimals(4);
        raTxtAngles5->setMinimum(-3.1416);
        raTxtAngles5->setMaximum(3.1416);
        raTxtAngles5->setSingleStep(0.1);
        raTxtAngles7 = new QDoubleSpinBox(gbManip);
        raTxtAngles7->setObjectName(QStringLiteral("raTxtAngles7"));
        raTxtAngles7->setGeometry(QRect(190, 175, 80, 25));
        raTxtAngles7->setKeyboardTracking(false);
        raTxtAngles7->setDecimals(4);
        raTxtAngles7->setMinimum(-3.1416);
        raTxtAngles7->setMaximum(3.1416);
        raTxtAngles7->setSingleStep(0.1);
        raTxtAngles1 = new QDoubleSpinBox(gbManip);
        raTxtAngles1->setObjectName(QStringLiteral("raTxtAngles1"));
        raTxtAngles1->setGeometry(QRect(190, 25, 80, 25));
        raTxtAngles1->setKeyboardTracking(false);
        raTxtAngles1->setDecimals(4);
        raTxtAngles1->setMinimum(-3.1416);
        raTxtAngles1->setMaximum(3.1416);
        raTxtAngles1->setSingleStep(0.1);
        laTxtAngles4 = new QDoubleSpinBox(gbManip);
        laTxtAngles4->setObjectName(QStringLiteral("laTxtAngles4"));
        laTxtAngles4->setGeometry(QRect(50, 100, 80, 25));
        laTxtAngles4->setKeyboardTracking(false);
        laTxtAngles4->setDecimals(4);
        laTxtAngles4->setMinimum(-3.1416);
        laTxtAngles4->setMaximum(3.1416);
        laTxtAngles4->setSingleStep(0.1);
        raLblAngles4_2 = new QLabel(gbManip);
        raLblAngles4_2->setObjectName(QStringLiteral("raLblAngles4_2"));
        raLblAngles4_2->setGeometry(QRect(150, 105, 41, 17));
        raLblAngles1_2 = new QLabel(gbManip);
        raLblAngles1_2->setObjectName(QStringLiteral("raLblAngles1_2"));
        raLblAngles1_2->setGeometry(QRect(150, 30, 41, 17));
        laLblAngles2_2 = new QLabel(gbManip);
        laLblAngles2_2->setObjectName(QStringLiteral("laLblAngles2_2"));
        laLblAngles2_2->setGeometry(QRect(10, 55, 41, 17));
        raLblAngles5_2 = new QLabel(gbManip);
        raLblAngles5_2->setObjectName(QStringLiteral("raLblAngles5_2"));
        raLblAngles5_2->setGeometry(QRect(150, 130, 41, 17));
        raTxtAngles4 = new QDoubleSpinBox(gbManip);
        raTxtAngles4->setObjectName(QStringLiteral("raTxtAngles4"));
        raTxtAngles4->setGeometry(QRect(190, 100, 80, 25));
        raTxtAngles4->setKeyboardTracking(false);
        raTxtAngles4->setDecimals(4);
        raTxtAngles4->setMinimum(-3.1416);
        raTxtAngles4->setMaximum(3.1416);
        raTxtAngles4->setSingleStep(0.1);
        laLblAngles6_2 = new QLabel(gbManip);
        laLblAngles6_2->setObjectName(QStringLiteral("laLblAngles6_2"));
        laLblAngles6_2->setGeometry(QRect(10, 155, 41, 17));
        laLblAngles5_2 = new QLabel(gbManip);
        laLblAngles5_2->setObjectName(QStringLiteral("laLblAngles5_2"));
        laLblAngles5_2->setGeometry(QRect(10, 130, 41, 17));
        laTxtAngles6 = new QDoubleSpinBox(gbManip);
        laTxtAngles6->setObjectName(QStringLiteral("laTxtAngles6"));
        laTxtAngles6->setGeometry(QRect(50, 150, 80, 25));
        laTxtAngles6->setKeyboardTracking(false);
        laTxtAngles6->setDecimals(4);
        laTxtAngles6->setMinimum(-3.1416);
        laTxtAngles6->setMaximum(3.1416);
        laTxtAngles6->setSingleStep(0.1);
        laTxtAngles2 = new QDoubleSpinBox(gbManip);
        laTxtAngles2->setObjectName(QStringLiteral("laTxtAngles2"));
        laTxtAngles2->setGeometry(QRect(50, 50, 80, 25));
        laTxtAngles2->setKeyboardTracking(false);
        laTxtAngles2->setDecimals(4);
        laTxtAngles2->setMinimum(-3.1416);
        laTxtAngles2->setMaximum(3.1416);
        laTxtAngles2->setSingleStep(0.1);
        laTxtAngles2->setValue(0);
        raLblAngles6_2 = new QLabel(gbManip);
        raLblAngles6_2->setObjectName(QStringLiteral("raLblAngles6_2"));
        raLblAngles6_2->setGeometry(QRect(150, 155, 41, 17));
        raTxtAngles3 = new QDoubleSpinBox(gbManip);
        raTxtAngles3->setObjectName(QStringLiteral("raTxtAngles3"));
        raTxtAngles3->setGeometry(QRect(190, 75, 80, 25));
        raTxtAngles3->setKeyboardTracking(false);
        raTxtAngles3->setDecimals(4);
        raTxtAngles3->setMinimum(-3.1416);
        raTxtAngles3->setMaximum(3.1416);
        raTxtAngles3->setSingleStep(0.1);
        laTxtAngles7 = new QDoubleSpinBox(gbManip);
        laTxtAngles7->setObjectName(QStringLiteral("laTxtAngles7"));
        laTxtAngles7->setGeometry(QRect(50, 175, 80, 25));
        laTxtAngles7->setKeyboardTracking(false);
        laTxtAngles7->setDecimals(4);
        laTxtAngles7->setMinimum(-3.1416);
        laTxtAngles7->setMaximum(3.1416);
        laTxtAngles7->setSingleStep(0.1);
        laLblAngles4_2 = new QLabel(gbManip);
        laLblAngles4_2->setObjectName(QStringLiteral("laLblAngles4_2"));
        laLblAngles4_2->setGeometry(QRect(10, 105, 41, 17));
        laTxtAngles3 = new QDoubleSpinBox(gbManip);
        laTxtAngles3->setObjectName(QStringLiteral("laTxtAngles3"));
        laTxtAngles3->setGeometry(QRect(50, 75, 80, 25));
        laTxtAngles3->setKeyboardTracking(false);
        laTxtAngles3->setDecimals(4);
        laTxtAngles3->setMinimum(-3.1416);
        laTxtAngles3->setMaximum(3.1416);
        laTxtAngles3->setSingleStep(0.1);
        laLblAngles1_2 = new QLabel(gbManip);
        laLblAngles1_2->setObjectName(QStringLiteral("laLblAngles1_2"));
        laLblAngles1_2->setGeometry(QRect(10, 30, 41, 17));
        raTxtAngles2 = new QDoubleSpinBox(gbManip);
        raTxtAngles2->setObjectName(QStringLiteral("raTxtAngles2"));
        raTxtAngles2->setGeometry(QRect(190, 50, 80, 25));
        raTxtAngles2->setKeyboardTracking(false);
        raTxtAngles2->setDecimals(4);
        raTxtAngles2->setMinimum(-3.1416);
        raTxtAngles2->setMaximum(3.1416);
        raTxtAngles2->setSingleStep(0.1);
        raLblAngles2_2 = new QLabel(gbManip);
        raLblAngles2_2->setObjectName(QStringLiteral("raLblAngles2_2"));
        raLblAngles2_2->setGeometry(QRect(150, 55, 41, 17));
        laLblAngles3_2 = new QLabel(gbManip);
        laLblAngles3_2->setObjectName(QStringLiteral("laLblAngles3_2"));
        laLblAngles3_2->setGeometry(QRect(10, 80, 41, 17));
        laTxtPredefined = new QLineEdit(gbManip);
        laTxtPredefined->setObjectName(QStringLiteral("laTxtPredefined"));
        laTxtPredefined->setGeometry(QRect(10, 250, 131, 27));
        hdLblHeadPoseLbl_3 = new QLabel(gbManip);
        hdLblHeadPoseLbl_3->setObjectName(QStringLiteral("hdLblHeadPoseLbl_3"));
        hdLblHeadPoseLbl_3->setGeometry(QRect(10, 230, 271, 16));
        raTxtPredefined = new QLineEdit(gbManip);
        raTxtPredefined->setObjectName(QStringLiteral("raTxtPredefined"));
        raTxtPredefined->setGeometry(QRect(160, 250, 131, 27));
        laLblAngles6_3 = new QLabel(gbManip);
        laLblAngles6_3->setObjectName(QStringLiteral("laLblAngles6_3"));
        laLblAngles6_3->setGeometry(QRect(10, 200, 41, 17));
        laTxtAnglesG = new QDoubleSpinBox(gbManip);
        laTxtAnglesG->setObjectName(QStringLiteral("laTxtAnglesG"));
        laTxtAnglesG->setGeometry(QRect(50, 200, 80, 25));
        laTxtAnglesG->setKeyboardTracking(false);
        laTxtAnglesG->setDecimals(4);
        laTxtAnglesG->setMinimum(-3.1416);
        laTxtAnglesG->setMaximum(3.1416);
        laTxtAnglesG->setSingleStep(0.1);
        laLblAngles6_4 = new QLabel(gbManip);
        laLblAngles6_4->setObjectName(QStringLiteral("laLblAngles6_4"));
        laLblAngles6_4->setGeometry(QRect(150, 200, 41, 17));
        raTxtAnglesG = new QDoubleSpinBox(gbManip);
        raTxtAnglesG->setObjectName(QStringLiteral("raTxtAnglesG"));
        raTxtAnglesG->setGeometry(QRect(190, 200, 80, 25));
        raTxtAnglesG->setKeyboardTracking(false);
        raTxtAnglesG->setDecimals(4);
        raTxtAnglesG->setMinimum(-3.1416);
        raTxtAnglesG->setMaximum(3.1416);
        raTxtAnglesG->setSingleStep(0.1);
        laLblAngles0_2 = new QLabel(gbManip);
        laLblAngles0_2->setObjectName(QStringLiteral("laLblAngles0_2"));
        laLblAngles0_2->setGeometry(QRect(10, 180, 41, 17));
        laLblAngles0_3 = new QLabel(gbManip);
        laLblAngles0_3->setObjectName(QStringLiteral("laLblAngles0_3"));
        laLblAngles0_3->setGeometry(QRect(150, 180, 41, 17));
        gbHead = new QGroupBox(tabGeneral);
        gbHead->setObjectName(QStringLiteral("gbHead"));
        gbHead->setGeometry(QRect(320, 290, 301, 81));
        hdTxtPan = new QDoubleSpinBox(gbHead);
        hdTxtPan->setObjectName(QStringLiteral("hdTxtPan"));
        hdTxtPan->setGeometry(QRect(40, 20, 81, 25));
        hdTxtPan->setKeyboardTracking(false);
        hdTxtPan->setDecimals(4);
        hdTxtPan->setMinimum(-1.5708);
        hdTxtPan->setMaximum(1.5708);
        hdTxtPan->setSingleStep(0.1);
        hdLblPan = new QLabel(gbHead);
        hdLblPan->setObjectName(QStringLiteral("hdLblPan"));
        hdLblPan->setGeometry(QRect(10, 20, 31, 16));
        label = new QLabel(gbHead);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 45, 31, 16));
        hdTxtTilt = new QDoubleSpinBox(gbHead);
        hdTxtTilt->setObjectName(QStringLiteral("hdTxtTilt"));
        hdTxtTilt->setGeometry(QRect(40, 45, 81, 25));
        hdTxtTilt->setKeyboardTracking(false);
        hdTxtTilt->setDecimals(4);
        hdTxtTilt->setMinimum(-1);
        hdTxtTilt->setMaximum(1);
        hdTxtTilt->setSingleStep(0.1);
        hdTxtTilt->setValue(-0.6);
        hdLblHeadPoseLbl = new QLabel(gbHead);
        hdLblHeadPoseLbl->setObjectName(QStringLiteral("hdLblHeadPoseLbl"));
        hdLblHeadPoseLbl->setGeometry(QRect(130, 20, 91, 16));
        hdTxtPredefined = new QLineEdit(gbHead);
        hdTxtPredefined->setObjectName(QStringLiteral("hdTxtPredefined"));
        hdTxtPredefined->setGeometry(QRect(130, 40, 161, 27));
        gbSpeech = new QGroupBox(tabGeneral);
        gbSpeech->setObjectName(QStringLiteral("gbSpeech"));
        gbSpeech->setGeometry(QRect(10, 370, 611, 101));
        spgTxtSay = new QLineEdit(gbSpeech);
        spgTxtSay->setObjectName(QStringLiteral("spgTxtSay"));
        spgTxtSay->setGeometry(QRect(85, 20, 511, 23));
        spgLabel = new QLabel(gbSpeech);
        spgLabel->setObjectName(QStringLiteral("spgLabel"));
        spgLabel->setGeometry(QRect(10, 20, 31, 16));
        sprLabel = new QLabel(gbSpeech);
        sprLabel->setObjectName(QStringLiteral("sprLabel"));
        sprLabel->setGeometry(QRect(10, 45, 71, 16));
        sprLblLastRecog = new QLabel(gbSpeech);
        sprLblLastRecog->setObjectName(QStringLiteral("sprLblLastRecog"));
        sprLblLastRecog->setGeometry(QRect(100, 70, 471, 20));
        sprTxtFakeRecog = new QLineEdit(gbSpeech);
        sprTxtFakeRecog->setObjectName(QStringLiteral("sprTxtFakeRecog"));
        sprTxtFakeRecog->setGeometry(QRect(85, 45, 511, 23));
        laLblAngles6_5 = new QLabel(gbSpeech);
        laLblAngles6_5->setObjectName(QStringLiteral("laLblAngles6_5"));
        laLblAngles6_5->setGeometry(QRect(10, 70, 81, 17));
        tabWidget->addTab(tabGeneral, QString());
        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "JUSTINA GUI - By Marcosoft", Q_NULLPTR));
        gbNavig->setTitle(QApplication::translate("MainWindow", "Mobile base and navigation", Q_NULLPTR));
        navBtnExecPath->setText(QApplication::translate("MainWindow", "Exec Path", Q_NULLPTR));
        navLblStartPose->setText(QApplication::translate("MainWindow", "Start Pose:", Q_NULLPTR));
        navBtnCalcPath->setText(QApplication::translate("MainWindow", "Calc Path", Q_NULLPTR));
        navLblGoalPose->setText(QApplication::translate("MainWindow", "Goal Pose:", Q_NULLPTR));
        txtLinearX->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "X:", Q_NULLPTR));
        btnRight->setText(QString());
        btnFwd->setText(QString());
        btnLeft->setText(QString());
        txtAngular->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "W:", Q_NULLPTR));
        btnBwd->setText(QString());
        btnCmdVel->setText(QApplication::translate("MainWindow", "Move Base", Q_NULLPTR));
        navTxtSmoothAlpha->setText(QApplication::translate("MainWindow", "0.9", Q_NULLPTR));
        navTxtInflation->setText(QApplication::translate("MainWindow", "0.3", Q_NULLPTR));
        navLblNearness->setText(QApplication::translate("MainWindow", "Cost:", Q_NULLPTR));
        navLblSmoothing->setText(QApplication::translate("MainWindow", "Smoothing:", Q_NULLPTR));
        navLblSmoothBeta->setText(QApplication::translate("MainWindow", "Beta:", Q_NULLPTR));
        navTxtSmoothBeta->setText(QApplication::translate("MainWindow", "0.1", Q_NULLPTR));
        navLblSmoothAlpha->setText(QApplication::translate("MainWindow", "Alpha:", Q_NULLPTR));
        navLblInflate->setText(QApplication::translate("MainWindow", "Inflation:", Q_NULLPTR));
        navTxtNearness->setText(QApplication::translate("MainWindow", "0.5", Q_NULLPTR));
        navLblRadius->setText(QApplication::translate("MainWindow", "Augmented Map:", Q_NULLPTR));
        gbManip->setTitle(QApplication::translate("MainWindow", "Arms and Manipulation", Q_NULLPTR));
        raLblAngles3_2->setText(QApplication::translate("MainWindow", "Th 3:", Q_NULLPTR));
        raLblAngles4_2->setText(QApplication::translate("MainWindow", "Th 4:", Q_NULLPTR));
        raLblAngles1_2->setText(QApplication::translate("MainWindow", "Th 1:", Q_NULLPTR));
        laLblAngles2_2->setText(QApplication::translate("MainWindow", "Th 2:", Q_NULLPTR));
        raLblAngles5_2->setText(QApplication::translate("MainWindow", "Th 5:", Q_NULLPTR));
        laLblAngles6_2->setText(QApplication::translate("MainWindow", "Th 6:", Q_NULLPTR));
        laLblAngles5_2->setText(QApplication::translate("MainWindow", "Th 5:", Q_NULLPTR));
        raLblAngles6_2->setText(QApplication::translate("MainWindow", "Th 6:", Q_NULLPTR));
        laLblAngles4_2->setText(QApplication::translate("MainWindow", "Th 4:", Q_NULLPTR));
        laLblAngles1_2->setText(QApplication::translate("MainWindow", "Th 1:", Q_NULLPTR));
        raLblAngles2_2->setText(QApplication::translate("MainWindow", "Th 2:", Q_NULLPTR));
        laLblAngles3_2->setText(QApplication::translate("MainWindow", "Th 3:", Q_NULLPTR));
        laTxtPredefined->setText(QString());
        hdLblHeadPoseLbl_3->setText(QApplication::translate("MainWindow", "Predefined  Pose    OR     XYZ  RPY  E:", Q_NULLPTR));
        laLblAngles6_3->setText(QApplication::translate("MainWindow", "G:", Q_NULLPTR));
        laLblAngles6_4->setText(QApplication::translate("MainWindow", "G:", Q_NULLPTR));
        laLblAngles0_2->setText(QApplication::translate("MainWindow", "Th 7:", Q_NULLPTR));
        laLblAngles0_3->setText(QApplication::translate("MainWindow", "Th 7:", Q_NULLPTR));
        gbHead->setTitle(QApplication::translate("MainWindow", "Head", Q_NULLPTR));
        hdLblPan->setText(QApplication::translate("MainWindow", "Pan:", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Tilt:", Q_NULLPTR));
        hdLblHeadPoseLbl->setText(QApplication::translate("MainWindow", "Predefined:", Q_NULLPTR));
        gbSpeech->setTitle(QApplication::translate("MainWindow", "Speech synthesis and recognition", Q_NULLPTR));
        spgLabel->setText(QApplication::translate("MainWindow", "Say:", Q_NULLPTR));
        sprLabel->setText(QApplication::translate("MainWindow", "Fake Reco:", Q_NULLPTR));
        sprLblLastRecog->setText(QApplication::translate("MainWindow", "Please bring me the orange juice from the kitchen", Q_NULLPTR));
        laLblAngles6_5->setText(QApplication::translate("MainWindow", "Last Recog:", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tabGeneral), QApplication::translate("MainWindow", "General", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
