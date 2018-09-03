/********************************************************************************
** Form generated from reading UI file 'PBMainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PBMAINWINDOW_H
#define UI_PBMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListView>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PBMainWindowClass
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout;
    QListView *m_ProgramFileListLV;
    QPushButton *m_LoadProgramsBtn;
    QVBoxLayout *verticalLayout_3;
    QTextEdit *m_EditorTE;
    QPlainTextEdit *m_ConsoleTE;
    QPushButton *m_RunProgramBtn;

    void setupUi(QWidget *PBMainWindowClass)
    {
        if (PBMainWindowClass->objectName().isEmpty())
            PBMainWindowClass->setObjectName(QStringLiteral("PBMainWindowClass"));
        PBMainWindowClass->resize(800, 500);
        verticalLayout_2 = new QVBoxLayout(PBMainWindowClass);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setSizeConstraint(QLayout::SetMaximumSize);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMaximumSize);
        m_ProgramFileListLV = new QListView(PBMainWindowClass);
        m_ProgramFileListLV->setObjectName(QStringLiteral("m_ProgramFileListLV"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_ProgramFileListLV->sizePolicy().hasHeightForWidth());
        m_ProgramFileListLV->setSizePolicy(sizePolicy);
        m_ProgramFileListLV->setMinimumSize(QSize(150, 400));
        m_ProgramFileListLV->setMaximumSize(QSize(250, 16777215));

        verticalLayout->addWidget(m_ProgramFileListLV);

        m_LoadProgramsBtn = new QPushButton(PBMainWindowClass);
        m_LoadProgramsBtn->setObjectName(QStringLiteral("m_LoadProgramsBtn"));
        m_LoadProgramsBtn->setMinimumSize(QSize(150, 0));
        m_LoadProgramsBtn->setMaximumSize(QSize(250, 16777215));

        verticalLayout->addWidget(m_LoadProgramsBtn);


        horizontalLayout_4->addLayout(verticalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        m_EditorTE = new QTextEdit(PBMainWindowClass);
        m_EditorTE->setObjectName(QStringLiteral("m_EditorTE"));
        sizePolicy.setHeightForWidth(m_EditorTE->sizePolicy().hasHeightForWidth());
        m_EditorTE->setSizePolicy(sizePolicy);
        m_EditorTE->setMinimumSize(QSize(400, 400));
        QFont font;
        font.setFamily(QStringLiteral("Consolas"));
        font.setPointSize(12);
        m_EditorTE->setFont(font);
        m_EditorTE->setTabStopWidth(40);

        verticalLayout_3->addWidget(m_EditorTE);

        m_ConsoleTE = new QPlainTextEdit(PBMainWindowClass);
        m_ConsoleTE->setObjectName(QStringLiteral("m_ConsoleTE"));
        sizePolicy.setHeightForWidth(m_ConsoleTE->sizePolicy().hasHeightForWidth());
        m_ConsoleTE->setSizePolicy(sizePolicy);
        m_ConsoleTE->setMinimumSize(QSize(50, 0));
        m_ConsoleTE->setMaximumSize(QSize(16777215, 150));
        QFont font1;
        font1.setFamily(QStringLiteral("Consolas"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        m_ConsoleTE->setFont(font1);
        m_ConsoleTE->setAcceptDrops(false);
        m_ConsoleTE->setReadOnly(true);
        m_ConsoleTE->setTabStopWidth(40);

        verticalLayout_3->addWidget(m_ConsoleTE);

        m_RunProgramBtn = new QPushButton(PBMainWindowClass);
        m_RunProgramBtn->setObjectName(QStringLiteral("m_RunProgramBtn"));

        verticalLayout_3->addWidget(m_RunProgramBtn);


        horizontalLayout_4->addLayout(verticalLayout_3);


        verticalLayout_2->addLayout(horizontalLayout_4);


        retranslateUi(PBMainWindowClass);
        QObject::connect(m_LoadProgramsBtn, SIGNAL(clicked()), PBMainWindowClass, SLOT(SetFilesDirectory()));
        QObject::connect(m_ProgramFileListLV, SIGNAL(clicked(QModelIndex)), PBMainWindowClass, SLOT(ReadFile()));
        QObject::connect(m_RunProgramBtn, SIGNAL(clicked()), PBMainWindowClass, SLOT(RunProgram()));

        QMetaObject::connectSlotsByName(PBMainWindowClass);
    } // setupUi

    void retranslateUi(QWidget *PBMainWindowClass)
    {
        PBMainWindowClass->setWindowTitle(QApplication::translate("PBMainWindowClass", "Practice Bioinformatics", nullptr));
        m_LoadProgramsBtn->setText(QApplication::translate("PBMainWindowClass", "Load programs", nullptr));
        m_ConsoleTE->setPlaceholderText(QApplication::translate("PBMainWindowClass", ">>>", nullptr));
        m_RunProgramBtn->setText(QApplication::translate("PBMainWindowClass", "Run program", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PBMainWindowClass: public Ui_PBMainWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PBMAINWINDOW_H
