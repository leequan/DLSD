#include <QtWidgets>

#include "./include/pages.h"
#include "./include/subskypage.h"
#include "./include/configdialog.h"

//对空检测子类实现
SubSkyPage1::SubSkyPage1(QWidget *parent)
    : QWidget(parent)
{

   textBrowserSubSkyPage1 = new QTextBrowser;
    QString file_fullSubSkyPage1 = ":/txt/SkyDetection1/KCF_SkyDetection.txt";
    QFile file(file_fullSubSkyPage1);
       if (!file.open(QFile::ReadOnly | QFile::Text))
          {
               QMessageBox::warning(this, tr("Application"),
                                       tr("Cannot read file %1:\n%2.")
                                    .arg(file_fullSubSkyPage1)
                                       .arg(file.errorString()));
               return;
          }
          QTextStream in(&file);
          textBrowserSubSkyPage1->setPlainText(in.readAll());
          file.close();
    textBrowserSubSkyPage1->setStyleSheet ("border:1px groove gray;background-color:linen;border-radius:10px;padding:2px 4px;");
    SubSkyedit1 = SubSkyPage1createLineEdit(tr(""));
    SubSkyedit1->setStyleSheet ("border:1px groove gray;border-radius:10px;padding:2px 4px;");

    QPushButton *SubSkystartButton1 = new QPushButton(tr("运行"));
    SubSkystartButton1->setStyleSheet ("border:1px groove gray;border-radius:10px;padding:2px 4px;");
    QObject::connect(SubSkystartButton1,SIGNAL(clicked()),this, SLOT(SubSkystartButton_clicked1()));
    QPushButton *SubSkystopButton1 = new QPushButton(tr("停止"));
    SubSkystopButton1->setStyleSheet ("border:1px groove gray;border-radius:10px;padding:2px 4px;");
    QObject::connect(SubSkystopButton1,SIGNAL(clicked()),this, SLOT(SubSkystopButton_clicked1()));


     QGridLayout *SubSkymainLayout1 = new QGridLayout;
     SubSkymainLayout1->addWidget(textBrowserSubSkyPage1,0,0,1,2);
     SubSkymainLayout1->addWidget(SubSkyedit1,1,0,1,1);
     SubSkymainLayout1->addWidget(SubSkystartButton1,1,1,1,1);
     SubSkymainLayout1->addWidget(SubSkystopButton1,2,1,1,1);
     setLayout(SubSkymainLayout1);

     file_logtxtSkyPage1 = new QFile(this);
     file_logtxtSkyPage1->setFileName("1.txt");
}

void SubSkyPage1::SubSkystartButton_clicked1()
{
    QString SubSkyPage1fileName = "/home/jalywangtuxiang/QT/build-detect_track_0904_yangdong-Desktop_Qt_5_5_1_GCC_64bit-Debug/detect_track_0904_yangdong ";
    if (pathSubSkyPage1 != "")
    {
        SubSkyPage1fileName += SubSkyedit1->text();
        SubSkyPage1fileName += "-v ";
        SubSkyPage1fileName += pathSubSkyPage1;
        char* program;
        QByteArray ba = SubSkyPage1fileName.toLatin1();
        program = ba.data();

        pro = new QProcess;
        pro->start(program);

         if (file_logtxtSkyPage1->exists())
                 file_logtxtSkyPage1->remove();
        connect(pro,SIGNAL(readyReadStandardOutput()),this,SLOT(showOutPutSubSkyPage1()));
    }
    if (pathSubSkyPage1 == "")
    {
     char* program;
     QByteArray ba = SubSkyPage1fileName.toLatin1();
     program = ba.data();

     pro = new QProcess;
     pro->start(program);

      if (file_logtxtSkyPage1->exists())
              file_logtxtSkyPage1->remove();
     connect(pro,SIGNAL(readyReadStandardOutput()),this,SLOT(showOutPutSubSkyPage1()));
       }
}

void SubSkyPage1::SubSkystopButton_clicked1()
{
    if(pro)
    pro->close();
    delete pro;
    pro = 0;
}
void SubSkyPage1::showOutPutSubSkyPage1()
{
    abc = pro->readAllStandardOutput();
    textBrowserSubSkyPage1->setPlainText(abc);

   if(!file_logtxtSkyPage1->open(QIODevice::WriteOnly  | QIODevice::Text|QIODevice::Append))
   {
      QMessageBox::warning(this,"sdf","can't open",QMessageBox::Yes);
   }

   QTextStream in(file_logtxtSkyPage1);
   in<<abc<<"\n";
   file_logtxtSkyPage1->close();

}

void SubSkyPage1::getPathSubSkyPage1(QString ipathSubSkyPage1)
{
    pathSubSkyPage1 = ipathSubSkyPage1;
}

QLineEdit *SubSkyPage1::SubSkyPage1createLineEdit(const QString &text)
{
    QLineEdit *LineEditSubSkyPage1 = new QLineEdit;
    LineEditSubSkyPage1->setText(text);
    return LineEditSubSkyPage1;
}


//SubSkyPage2::SubSkyPage2(QWidget *parent)
//    : QWidget(parent)
//{
//    QTextBrowser *textBrowserSubSkyPage2 = new QTextBrowser;
//    QString file_fullSubSkyPage2 = ":/txt/SkyDetection2/NCC_SkyDetection.txt";
//    QFile file(file_fullSubSkyPage2);
//          if (!file.open(QFile::ReadOnly | QFile::Text))
//          {
//               QMessageBox::warning(this, tr("Application"),
//                                       tr("Cannot read file %2:\n%2.")
//                                    .arg(file_fullSubSkyPage2)
//                                       .arg(file.errorString()));
//               return;
//          }
//          QTextStream in(&file);
//          textBrowserSubSkyPage2->setPlainText(in.readAll());
//          file.close();
//    textBrowserSubSkyPage2->setStyleSheet ("border:1px groove gray;background-color:linen;border-radius:10px;padding:2px 4px;");
//    SubSkyedit2 = SubSkyPage2createLineEdit(tr(""));
//    SubSkyedit2->setStyleSheet ("border:1px groove gray;border-radius:10px;padding:2px 4px;");

//    QPushButton *SubSkystartButton2 = new QPushButton(tr("运行"));
//    SubSkystartButton2->setStyleSheet ("border:1px groove gray;border-radius:10px;padding:2px 4px;");
//    QObject::connect(SubSkystartButton2,SIGNAL(clicked()),this, SLOT(SubSkystartButton_clicked2()));
//    QPushButton *SubSkystopButton2 = new QPushButton(tr("停止"));
//    SubSkystopButton2->setStyleSheet ("border:1px groove gray;border-radius:10px;padding:2px 4px;");
//    QObject::connect(SubSkystopButton2,SIGNAL(clicked()),this, SLOT(SubSkystopButton_clicked2()));

//     QGridLayout *SubSkymainLayout2 = new QGridLayout;
//     SubSkymainLayout2->addWidget(textBrowserSubSkyPage2,0,0,1,2);
//     SubSkymainLayout2->addWidget(SubSkyedit2,1,0,1,1);
//     SubSkymainLayout2->addWidget(SubSkystartButton2,1,1,1,1);
//     SubSkymainLayout2->addWidget(SubSkystopButton2,2,1,1,1);
//     setLayout(SubSkymainLayout2);

//     file_logtxtSkyPage2 = new QFile(this);
//     file_logtxtSkyPage2->setFileName("1.txt");
//}

//void SubSkyPage2::SubSkystartButton_clicked2()
//{
//    QString SubSkyPage2fileName = "/home/jalywangtuxiang/QT/build-detect_track_0904_yangdong-Desktop_Qt_5_5_1_GCC_64bit-Debug/detect_track_0904_yangdong ";
//    if (pathSubSkyPage2 != "")
//        {
//            SubSkyPage2fileName += SubSkyedit2->text();
//            SubSkyPage2fileName += "-v ";
//            SubSkyPage2fileName += pathSubSkyPage2;
//            char* program;
//            QByteArray ba = SubSkyPage2fileName.toLatin1();
//            program = ba.data();

//            pro = new QProcess;
//            pro->start(program);

//             if (file_logtxtSkyPage2->exists())
//                     file_logtxtSkyPage2->remove();
//            connect(pro,SIGNAL(readyReadStandardOutput()),this,SLOT(showOutPutSubSkyPage2()));
//        }
//        if (pathSubSkyPage2 == "")
//        {
//         char* program;
//         QByteArray ba = SubSkyPage2fileName.toLatin1();
//         program = ba.data();

//         pro = new QProcess;
//         pro->start(program);

//          if (file_logtxtSkyPage2->exists())
//                  file_logtxtSkyPage2->remove();
//         connect(pro,SIGNAL(readyReadStandardOutput()),this,SLOT(showOutPutSubSkyPage2()));
//           }
//    }

//    void SubSkyPage2::SubSkystopButton_clicked2()
//    {
//        if(pro)
//        pro->close();
//        delete pro;
//        pro = 0;
//    }
//    void SubSkyPage2::showOutPutSubSkyPage2()
//    {
//        abc = pro->readAllStandardOutput();
//        textBrowserSubSkyPage2->setPlainText(abc);

//       if(!file_logtxtSkyPage2->open(QIODevice::WriteOnly  | QIODevice::Text|QIODevice::Append))
//       {
//          QMessageBox::warning(this,"sdf","can't open",QMessageBox::Yes);
//       }

//       QTextStream in(file_logtxtSkyPage2);
//       in<<abc<<"\n";
//       file_logtxtSkyPage2->close();

//    }

//void SubSkyPage2::getPathSubSkyPage2(QString ipathSubSkyPage2)
//{
//    pathSubSkyPage2 = ipathSubSkyPage2;
//}

//QLineEdit *SubSkyPage2::SubSkyPage2createLineEdit(const QString &text)
//{
//    QLineEdit *LineEditSubSkyPage2 = new QLineEdit;
//    LineEditSubSkyPage2->setText(text);
//    return LineEditSubSkyPage2;
//}

SubSkyPage2::SubSkyPage2(QWidget *parent)
    : QWidget(parent)
{

   textBrowserSubSkyPage2 = new QTextBrowser;
    QString file_fullSubSkyPage2 = ":/txt/SkyDetection2/NCC_SkyDetection.txt";
    QFile file(file_fullSubSkyPage2);
       if (!file.open(QFile::ReadOnly | QFile::Text))
          {
               QMessageBox::warning(this, tr("Application"),
                                       tr("Cannot read file %1:\n%2.")
                                    .arg(file_fullSubSkyPage2)
                                       .arg(file.errorString()));
               return;
          }
          QTextStream in(&file);
          textBrowserSubSkyPage2->setPlainText(in.readAll());
          file.close();
    textBrowserSubSkyPage2->setStyleSheet ("border:1px groove gray;background-color:linen;border-radius:10px;padding:2px 4px;");
    SubSkyedit2 = SubSkyPage2createLineEdit(tr(""));
    SubSkyedit2->setStyleSheet ("border:1px groove gray;border-radius:10px;padding:2px 4px;");

    QPushButton *SubSkystartButton2 = new QPushButton(tr("运行"));
    SubSkystartButton2->setStyleSheet ("border:1px groove gray;border-radius:10px;padding:2px 4px;");
    QObject::connect(SubSkystartButton2,SIGNAL(clicked()),this, SLOT(SubSkystartButton_clicked2()));
    QPushButton *SubSkystopButton2 = new QPushButton(tr("停止"));
    SubSkystopButton2->setStyleSheet ("border:1px groove gray;border-radius:10px;padding:2px 4px;");
    QObject::connect(SubSkystopButton2,SIGNAL(clicked()),this, SLOT(SubSkystopButton_clicked2()));


     QGridLayout *SubSkymainLayout2 = new QGridLayout;
     SubSkymainLayout2->addWidget(textBrowserSubSkyPage2,0,0,1,2);
     SubSkymainLayout2->addWidget(SubSkyedit2,1,0,1,1);
     SubSkymainLayout2->addWidget(SubSkystartButton2,1,1,1,1);
     SubSkymainLayout2->addWidget(SubSkystopButton2,2,1,1,1);
     setLayout(SubSkymainLayout2);

     file_logtxtSkyPage2 = new QFile(this);
     file_logtxtSkyPage2->setFileName("1.txt");
}

void SubSkyPage2::SubSkystartButton_clicked2()
{
    QString SubSkyPage2fileName = "/home/jalywangtuxiang/QT/build-detect_track_0904_yangdong-Desktop_Qt_5_5_1_GCC_64bit-Debug/detect_track_0904_yangdong ";
    if (pathSubSkyPage2 != "")
    {
        SubSkyPage2fileName += SubSkyedit2->text();
        SubSkyPage2fileName += "-v ";
        SubSkyPage2fileName += pathSubSkyPage2;
        char* program;
        QByteArray ba = SubSkyPage2fileName.toLatin1();
        program = ba.data();

        pro = new QProcess;
        pro->start(program);

         if (file_logtxtSkyPage2->exists())
                 file_logtxtSkyPage2->remove();
        connect(pro,SIGNAL(readyReadStandardOutput()),this,SLOT(showOutPutSubSkyPage2()));
    }
    if (pathSubSkyPage2 == "")
    {
     char* program;
     QByteArray ba = SubSkyPage2fileName.toLatin1();
     program = ba.data();

     pro = new QProcess;
     pro->start(program);

      if (file_logtxtSkyPage2->exists())
              file_logtxtSkyPage2->remove();
     connect(pro,SIGNAL(readyReadStandardOutput()),this,SLOT(showOutPutSubSkyPage2()));
       }
}

void SubSkyPage2::SubSkystopButton_clicked2()
{
    if(pro)
    pro->close();
    delete pro;
    pro = 0;
}
void SubSkyPage2::showOutPutSubSkyPage2()
{
    abc = pro->readAllStandardOutput();
    textBrowserSubSkyPage2->setPlainText(abc);

   if(!file_logtxtSkyPage2->open(QIODevice::WriteOnly  | QIODevice::Text|QIODevice::Append))
   {
      QMessageBox::warning(this,"sdf","can't open",QMessageBox::Yes);
   }

   QTextStream in(file_logtxtSkyPage2);
   in<<abc<<"\n";
   file_logtxtSkyPage2->close();

}

void SubSkyPage2::getPathSubSkyPage2(QString ipathSubSkyPage2)
{
    pathSubSkyPage2 = ipathSubSkyPage2;
}

QLineEdit *SubSkyPage2::SubSkyPage2createLineEdit(const QString &text)
{
    QLineEdit *LineEditSubSkyPage2 = new QLineEdit;
    LineEditSubSkyPage2->setText(text);
    return LineEditSubSkyPage2;
}
