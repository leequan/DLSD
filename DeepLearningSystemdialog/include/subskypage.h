#ifndef SUBSKYPAGE
#define SUBSKYPAGE

#include <QWidget>

QT_BEGIN_NAMESPACE
class QLineEdit;
class QProcess;
class QTextBrowser;
class QFile;
QT_END_NAMESPACE

//对空检测跟踪子类定义
class SubSkyPage1 : public QWidget
{
     Q_OBJECT

public:
    SubSkyPage1(QWidget *parent = 0);

public slots:
    void SubSkystartButton_clicked1();
    void getPathSubSkyPage1(QString pathSubSkyPage1);

    void showOutPutSubSkyPage1();
    void SubSkystopButton_clicked1();

private:
        QLineEdit *SubSkyPage1createLineEdit(const QString &text = QString());
        QLineEdit *SubSkyedit1;
        QString pathSubSkyPage1;

        QProcess *pro;
        QTextBrowser *textBrowserSubSkyPage1 ;
        QString abc;
        QString fileName ;
        QFile *file_logtxtSkyPage1;
        QString SubSkyPage1fileName ;
};

class SubSkyPage2 : public QWidget
{
     Q_OBJECT

public:
    SubSkyPage2(QWidget *parent = 0);

public slots:
    void SubSkystartButton_clicked2();
    void getPathSubSkyPage2(QString pathSubSkyPage1);

    void showOutPutSubSkyPage2();
    void SubSkystopButton_clicked2();

private:
        QLineEdit *SubSkyPage2createLineEdit(const QString &text = QString());
        QLineEdit *SubSkyedit2;
        QString pathSubSkyPage2;

        QProcess *pro;
        QTextBrowser *textBrowserSubSkyPage2 ;
        QString abc;
        QString fileName ;
        QFile *file_logtxtSkyPage2;
        QString SubSkyPage2fileName ;
};
#endif // SUBSKYPAGE

