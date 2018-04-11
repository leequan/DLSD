#ifndef SUBCONFIGDIALOG_H
#define SUBCONFIGDIALOG_H

#include <QWidget>

QT_BEGIN_NAMESPACE
class QLineEdit;
class QProcess;
class QTextBrowser;
class QFile;
QT_END_NAMESPACE


//对地检测跟踪子类定义
class SubGroundPage1 : public QWidget
{
     Q_OBJECT

public:
     SubGroundPage1(QWidget *parent = 0);

public slots:
    void SubGroundstartButton_clicked1();
    void getPathSubGroundPage1(QString pathSubGroundPage1);
    void showOutPutSubGroundPage1();
    void SubGroundstopButton_clicked1();

private:
    QLineEdit *SubGroundPage1createLineEdit(const QString &text = QString());
    QLineEdit *SubGroundedit1;
    QString pathSubGroundPage1;

    QProcess *pro;
    QTextBrowser *textBrowserSubGroundPage1 ;
    QString abc;
    QString fileName ;
    QFile *file_logtxtGroundPage1;
    QString SubGroundPage1fileName ;
};

class SubGroundPage2 : public QWidget
{
     Q_OBJECT

public:
    SubGroundPage2(QWidget *parent = 0);

public slots:
    void SubGroundstartButton_clicked2();
    void getPathSubGroundPage2(QString pathSubGroundPage2);
    void showOutPutSubGroundPage2();
    void SubGroundstopButton_clicked2();

private:
    QLineEdit *SubGroundPage2createLineEdit(const QString &text = QString());
    QLineEdit *SubGroundedit2;
    QString pathSubGroundPage2;

    QProcess *pro;
    QTextBrowser *textBrowserSubGroundPage2;
    QString abc;
    QString fileName;
    QFile *file_logtxtGroundPage2;
    QString SubGroundPage2fileName ;
};

class SubGroundPage3 : public QWidget
{
    Q_OBJECT

public:
    SubGroundPage3(QWidget *parent = 0);

public slots:
    void SubGroundstartButton_clicked3();
    void getPathSubGroundPage3(QString pathSubGroundPage3);
    void showOutPutSubGroundPage3();
    void SubGroundstopButton_clicked3();

private:
    QLineEdit *SubGroundPage3createLineEdit(const QString &text = QString());
    QLineEdit *SubGroundedit3;
    QString pathSubGroundPage3;

    QProcess *pro;
    QTextBrowser *textBrowserSubGroundPage3 ;
    QString abc;
    QString fileName ;
    QFile *file_logtxtGroundPage3;
    QString SubGroundPage3fileName ;
};

class SubGroundPage4 : public QWidget
{
    Q_OBJECT

public:
    SubGroundPage4(QWidget *parent = 0);

public slots:
    void SubGroundstartButton_clicked4();
    void getPathSubGroundPage4(QString pathSubGroundPage4);
    void showOutPutSubGroundPage4();
    void SubGroundstopButton_clicked4();

private:
    QLineEdit *SubGroundPage4createLineEdit(const QString &text = QString());
    QLineEdit *SubGroundedit4;
    QString pathSubGroundPage4;

    QProcess *pro;
    QTextBrowser *textBrowserSubGroundPage4 ;
    QString abc;
    QString fileName ;
    QFile *file_logtxtGroundPage4;
    QString SubGroundPage4fileName ;
};

class SubGroundPage5 : public QWidget
{
    Q_OBJECT

public:
    SubGroundPage5(QWidget *parent = 0);

public slots:
    void SubGroundstartButton_clicked5();
    void getPathSubGroundPage5(QString pathSubGroundPage5);
    void showOutPutSubGroundPage5();
    void SubGroundstopButton_clicked5();

private:
    QLineEdit *SubGroundPage5createLineEdit(const QString &text = QString());
    QLineEdit *SubGroundedit5;
    QString pathSubGroundPage5;

    QProcess *pro;
    QTextBrowser *textBrowserSubGroundPage5 ;
    QString abc;
    QString fileName ;
    QFile *file_logtxtGroundPage5;
    QString SubGroundPage5fileName ;
};
#endif
