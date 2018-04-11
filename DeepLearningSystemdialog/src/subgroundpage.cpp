#include <QtWidgets>
#include <QProcess>
#include <QTextEdit>

#include "./include/pages.h"
#include "./include/subgroundpage.h"
#include "./include/configdialog.h"

//对地检测子类实现
SubGroundPage1::SubGroundPage1(QWidget *parent)
    : QWidget(parent)
{
    textBrowserSubGroundPage1 = new QTextBrowser;
    QString file_fullSubGroundPage1 = ":/txt/GroundDetection1/KCF_GroundDetection.txt";
    QFile file(file_fullSubGroundPage1);
      if (!file.open(QFile::ReadOnly | QFile::Text))
      {
           QMessageBox::warning(this, tr("Application"),
                                   tr("Cannot read file %1:\n%2.")
                                .arg(file_fullSubGroundPage1)
                                   .arg(file.errorString()));
           return;
      }
      QTextStream in(&file);
      textBrowserSubGroundPage1->setPlainText(in.readAll());
      file.close();

    textBrowserSubGroundPage1->setStyleSheet ("border:1px groove gray;background-color:linen;border-radius:10px;padding:2px 4px;");
    SubGroundedit1 = SubGroundPage1createLineEdit(tr(""));
    SubGroundedit1->setStyleSheet ("border:1px groove gray;border-radius:10px;padding:2px 4px;");

    QPushButton *SubGroundstartButton1 = new QPushButton(tr("运行"));
    SubGroundstartButton1->setStyleSheet ("border:1px groove gray;border-radius:10px;padding:2px 4px;");
    QObject::connect(SubGroundstartButton1,SIGNAL(clicked()),this, SLOT(SubGroundstartButton_clicked1()));
    QPushButton *SubGroundstopButton1 = new QPushButton(tr("停止"));
    SubGroundstopButton1->setStyleSheet ("border:1px groove gray;border-radius:10px;padding:2px 4px;");
    QObject::connect(SubGroundstopButton1,SIGNAL(clicked()),this, SLOT(SubGroundstopButton_clicked1()));

     QGridLayout *SubGroundmainLayout1 = new QGridLayout;
     SubGroundmainLayout1->addWidget(textBrowserSubGroundPage1,0,0,1,2);
     SubGroundmainLayout1->addWidget(SubGroundedit1,1,0,1,1);
     SubGroundmainLayout1->addWidget(SubGroundstartButton1,1,1,1,1);
     SubGroundmainLayout1->addWidget(SubGroundstopButton1,2,1,1,1);
     setLayout(SubGroundmainLayout1);

     file_logtxtGroundPage1 = new QFile(this);
     file_logtxtGroundPage1->setFileName("1.txt");

}

void SubGroundPage1::SubGroundstartButton_clicked1()
{
    QString SubGroundPage1fileName = "/home/jalywangtuxiang/QT/build-detect_track_0904_yangdong-Desktop_Qt_5_5_1_GCC_64bit-Debug/detect_track_0904_yangdong ";
    if (pathSubGroundPage1 != "")
    {
        SubGroundPage1fileName += SubGroundedit1->text();
        SubGroundPage1fileName += "-v ";
        SubGroundPage1fileName += pathSubGroundPage1;
        char* program;
        QByteArray ba = SubGroundPage1fileName.toLatin1();
        program = ba.data();

        pro = new QProcess;
        pro->start(program);

         if (file_logtxtGroundPage1->exists())
                 file_logtxtGroundPage1->remove();
        connect(pro,SIGNAL(readyReadStandardOutput()),this,SLOT(showOutPutSubGroundPage1()));
    }
    if (pathSubGroundPage1 == "")
    {
     char* program;
     QByteArray ba = SubGroundPage1fileName.toLatin1();
     program = ba.data();

     pro = new QProcess;
     pro->start(program);

      if (file_logtxtGroundPage1->exists())
              file_logtxtGroundPage1->remove();
     connect(pro,SIGNAL(readyReadStandardOutput()),this,SLOT(showOutPutSubGroundPage1()));
       }
}

void SubGroundPage1::SubGroundstopButton_clicked1()
{
    if(pro)
    pro->close();
    delete pro;
    pro = 0;
}
void SubGroundPage1::showOutPutSubGroundPage1()
{
    abc = pro->readAllStandardOutput();
    textBrowserSubGroundPage1->setPlainText(abc);

   if(!file_logtxtGroundPage1->open(QIODevice::WriteOnly  | QIODevice::Text|QIODevice::Append))
   {
      QMessageBox::warning(this,"sdf","can't open",QMessageBox::Yes);
   }

   QTextStream in(file_logtxtGroundPage1);
   in<<abc<<"\n";
   file_logtxtGroundPage1->close();

}
void SubGroundPage1::getPathSubGroundPage1(QString ipathSubGroundPage1)
{
    pathSubGroundPage1 = ipathSubGroundPage1;
}

QLineEdit *SubGroundPage1::SubGroundPage1createLineEdit(const QString &text)
{
    QLineEdit *LineEditSubGroundPage1 = new QLineEdit;
    LineEditSubGroundPage1->setText(text);
    return LineEditSubGroundPage1;
}


SubGroundPage2::SubGroundPage2(QWidget *parent)
    : QWidget(parent)
{
    textBrowserSubGroundPage2 = new QTextBrowser;
    QString file_fullSubGroundPage2 = ":/txt/GroundDetection2/MultipleTarget_GroundDetection.txt";
    QFile file(file_fullSubGroundPage2);
      if (!file.open(QFile::ReadOnly | QFile::Text))
      {
           QMessageBox::warning(this, tr("Application"),
                                   tr("Cannot read file %1:\n%2.")
                                .arg(file_fullSubGroundPage2)
                                   .arg(file.errorString()));
           return;
      }
      QTextStream in(&file);
      textBrowserSubGroundPage2->setPlainText(in.readAll());
      file.close();
    textBrowserSubGroundPage2->setStyleSheet ("border:1px groove gray;background-color:linen;border-radius:10px;padding:2px 4px;");

    SubGroundedit2 = SubGroundPage2createLineEdit(tr(""));
    SubGroundedit2->setStyleSheet ("border:1px groove gray;border-radius:10px;padding:2px 4px;");

    QPushButton *SubGroundstartButton2 = new QPushButton(tr("运行"));
    QPushButton *SubGroundstopButton2 = new QPushButton(tr("停止"));
    SubGroundstartButton2->setStyleSheet ("border:1px groove gray;border-radius:10px;padding:2px 4px;");
    SubGroundstopButton2->setStyleSheet ("border:1px groove gray;border-radius:10px;padding:2px 4px;");
    QObject::connect(SubGroundstartButton2,SIGNAL(clicked()),this, SLOT(SubGroundstartButton_clicked2()));
    QObject::connect(SubGroundstopButton2,SIGNAL(clicked()),this, SLOT(SubGroundstopButton_clicked2()));



    QGridLayout *SubGroundmainLayout2 = new QGridLayout;
    SubGroundmainLayout2->addWidget(textBrowserSubGroundPage2,0,0,1,2);
    SubGroundmainLayout2->addWidget(SubGroundedit2,1,0,1,1);
    SubGroundmainLayout2->addWidget(SubGroundstartButton2,1,1,1,1);
    SubGroundmainLayout2->addWidget(SubGroundstopButton2,2,1,1,1);
    setLayout(SubGroundmainLayout2);


    file_logtxtGroundPage2 = new QFile(this);
    file_logtxtGroundPage2->setFileName("1.txt");

}

void SubGroundPage2::SubGroundstartButton_clicked2()
{
   QString SubGroundPage2fileName = "/home/jalywangtuxiang/QT/build-detect_track_0904_yangdong-Desktop_Qt_5_5_1_GCC_64bit-Debug/detect_track_0904_yangdong ";

   if (pathSubGroundPage2 != "")
   {
       SubGroundPage2fileName += SubGroundedit2->text();
       SubGroundPage2fileName += "-v ";
       SubGroundPage2fileName += pathSubGroundPage2;
       char* program;
       QByteArray ba = SubGroundPage2fileName.toLatin1();
       program = ba.data();

       pro = new QProcess;
       pro->start(program);

        if (file_logtxtGroundPage2->exists())
                file_logtxtGroundPage2->remove();
       connect(pro,SIGNAL(readyReadStandardOutput()),this,SLOT(showOutPutSubGroundPage2()));
   }
   if (pathSubGroundPage2 == "")
   {
    char* program;
    QByteArray ba = SubGroundPage2fileName.toLatin1();
    program = ba.data();

    pro = new QProcess;
    pro->start(program);

    if (file_logtxtGroundPage2->exists())
             file_logtxtGroundPage2->remove();
    connect(pro,SIGNAL(readyReadStandardOutput()),this,SLOT(showOutPutSubGroundPage2()));
      }
}

void SubGroundPage2::SubGroundstopButton_clicked2()
{
   if(pro)
   pro->close();
   delete pro;
   pro = 0;
}
void SubGroundPage2::showOutPutSubGroundPage2()
{
   abc = pro->readAllStandardOutput();
   textBrowserSubGroundPage2->setPlainText(abc);

  if(!file_logtxtGroundPage2->open(QIODevice::WriteOnly  | QIODevice::Text|QIODevice::Append))
  {
     QMessageBox::warning(this,"sdf","can't open",QMessageBox::Yes);
  }

  QTextStream in(file_logtxtGroundPage2);
  in<<abc<<"\n";
  file_logtxtGroundPage2->close();

}

void SubGroundPage2::getPathSubGroundPage2(QString ipathSubGroundPage2)
{
    pathSubGroundPage2 = ipathSubGroundPage2;
}

QLineEdit *SubGroundPage2::SubGroundPage2createLineEdit(const QString &text)
{
    QLineEdit *LineEditSubGroundPage2 = new QLineEdit;
    LineEditSubGroundPage2->setText(text);
    return LineEditSubGroundPage2;
}

SubGroundPage3::SubGroundPage3(QWidget *parent)
    : QWidget(parent)
{
    textBrowserSubGroundPage3 = new QTextBrowser;
    QString file_fullSubGroundPage3 = ":/txt/GroundDetection3/TargetConsistency_GroundDetection.txt";
    QFile file(file_fullSubGroundPage3);
      if (!file.open(QFile::ReadOnly | QFile::Text))
      {
           QMessageBox::warning(this, tr("Application"),
                                   tr("Cannot read file %1:\n%2.")
                                .arg(file_fullSubGroundPage3)
                                   .arg(file.errorString()));
           return;
      }
      QTextStream in(&file);
      textBrowserSubGroundPage3->setPlainText(in.readAll());
      file.close();
      textBrowserSubGroundPage3->setStyleSheet ("border:1px groove gray;background-color:linen;border-radius:10px;padding:2px 4px;");

    SubGroundedit3 = SubGroundPage3createLineEdit(tr(""));
    SubGroundedit3->setStyleSheet ("border:1px groove gray;border-radius:10px;padding:2px 4px;");

    QPushButton *SubGroundstartButton3 = new QPushButton(tr("运行"));
    SubGroundstartButton3->setStyleSheet ("border:1px groove gray;border-radius:10px;padding:2px 4px;");
    QObject::connect(SubGroundstartButton3,SIGNAL(clicked()),this, SLOT(SubGroundstartButton_clicked3()));
    QPushButton *SubGroundstopButton3 = new QPushButton(tr("停止"));
    SubGroundstopButton3->setStyleSheet ("border:1px groove gray;border-radius:10px;padding:2px 4px;");
    QObject::connect(SubGroundstopButton3,SIGNAL(clicked()),this, SLOT(SubGroundstopButton_clicked3()));


    QGridLayout *SubGroundmainLayout3 = new QGridLayout;
    SubGroundmainLayout3->addWidget(textBrowserSubGroundPage3,0,0,1,2);
    SubGroundmainLayout3->addWidget(SubGroundedit3,1,0,1,1);
    SubGroundmainLayout3->addWidget(SubGroundstartButton3,1,1,1,1);
    SubGroundmainLayout3->addWidget(SubGroundstopButton3,2,1,1,1);
    setLayout(SubGroundmainLayout3);

    file_logtxtGroundPage3 = new QFile(this);
    file_logtxtGroundPage3->setFileName("1.txt");
}
void SubGroundPage3::SubGroundstartButton_clicked3()
{
    QString SubGroundPage3fileName = "/home/jalywangtuxiang/QT/build-detect_track_0904_yangdong-Desktop_Qt_5_5_1_GCC_64bit-Debug/detect_track_0904_yangdong ";
        if (pathSubGroundPage3 != "")
        {
            SubGroundPage3fileName += SubGroundedit3->text();
            SubGroundPage3fileName += "-v ";
            SubGroundPage3fileName += pathSubGroundPage3;
            char* program;
            QByteArray ba = SubGroundPage3fileName.toLatin1();
            program = ba.data();

            pro = new QProcess;
            pro->start(program);

             if (file_logtxtGroundPage3->exists())
                     file_logtxtGroundPage3->remove();
            connect(pro,SIGNAL(readyReadStandardOutput()),this,SLOT(showOutPutSubGroundPage3()));
        }
        if (pathSubGroundPage3 == "")
        {
         char* program;
         QByteArray ba = SubGroundPage3fileName.toLatin1();
         program = ba.data();

         pro = new QProcess;
         pro->start(program);

          if (file_logtxtGroundPage3->exists())
                  file_logtxtGroundPage3->remove();
         connect(pro,SIGNAL(readyReadStandardOutput()),this,SLOT(showOutPutSubGroundPage3()));
           }
    }

    void SubGroundPage3::SubGroundstopButton_clicked3()
    {
        if(pro)
        pro->close();
        delete pro;
        pro = 0;
    }
    void SubGroundPage3::showOutPutSubGroundPage3()
    {
        abc = pro->readAllStandardOutput();
        textBrowserSubGroundPage3->setPlainText(abc);

       if(!file_logtxtGroundPage3->open(QIODevice::WriteOnly  | QIODevice::Text|QIODevice::Append))
       {
          QMessageBox::warning(this,"sdf","can't open",QMessageBox::Yes);
       }

       QTextStream in(file_logtxtGroundPage3);
       in<<abc<<"\n";
       file_logtxtGroundPage3->close();

    }

void SubGroundPage3::getPathSubGroundPage3(QString ipathSubGroundPage3)
{
    pathSubGroundPage3 = ipathSubGroundPage3;
}

QLineEdit *SubGroundPage3::SubGroundPage3createLineEdit(const QString &text)
{
    QLineEdit *LineEditSubGroundPage3 = new QLineEdit;
    LineEditSubGroundPage3->setText(text);
    return LineEditSubGroundPage3;
}


SubGroundPage4::SubGroundPage4(QWidget *parent)
    : QWidget(parent)
{
    textBrowserSubGroundPage4 = new QTextBrowser;
    QString file_fullSubGroundPage4 = ":/txt/GroundDetection4/NCC_GroundDetection.txt";
    QFile file(file_fullSubGroundPage4);
      if (!file.open(QFile::ReadOnly | QFile::Text))
          {
               QMessageBox::warning(this, tr("Application"),
                                       tr("Cannot read file %1:\n%2.")
                                    .arg(file_fullSubGroundPage4)
                                       .arg(file.errorString()));
               return;
          }
          QTextStream in(&file);
          textBrowserSubGroundPage4->setPlainText(in.readAll());
          file.close();
    textBrowserSubGroundPage4->setStyleSheet ("border:1px groove gray;background-color:linen;border-radius:10px;padding:2px 4px;");

    SubGroundedit4 = SubGroundPage4createLineEdit(tr(""));
    SubGroundedit4->setStyleSheet ("border:1px groove gray;border-radius:10px;padding:2px 4px;");

    QPushButton *SubGroundstartButton4 = new QPushButton(tr("运行"));
    SubGroundstartButton4->setStyleSheet ("border:1px groove gray;border-radius:10px;padding:2px 4px;");
    QObject::connect(SubGroundstartButton4,SIGNAL(clicked()),this, SLOT(SubGroundstartButton_clicked4()));
    QPushButton *SubGroundstopButton4 = new QPushButton(tr("停止"));
    SubGroundstopButton4->setStyleSheet ("border:1px groove gray;border-radius:10px;padding:2px 4px;");
    QObject::connect(SubGroundstopButton4,SIGNAL(clicked()),this, SLOT(SubGroundstopButton_clicked4()));

     QGridLayout *SubGroundmainLayout4 = new QGridLayout;
     SubGroundmainLayout4->addWidget(textBrowserSubGroundPage4,0,0,1,2);
     SubGroundmainLayout4->addWidget(SubGroundedit4,1,0,1,1);
     SubGroundmainLayout4->addWidget(SubGroundstartButton4,1,1,1,1);
     SubGroundmainLayout4->addWidget(SubGroundstopButton4,2,1,1,1);
     setLayout(SubGroundmainLayout4);

     file_logtxtGroundPage4 = new QFile(this);
     file_logtxtGroundPage4->setFileName("1.txt");
}
void SubGroundPage4::SubGroundstartButton_clicked4()
{
    QString SubGroundPage4fileName = "/home/jalywangtuxiang/QT/build-detect_track_0904_yangdong-Desktop_Qt_5_5_1_GCC_64bit-Debug/detect_track_0904_yangdong ";
        if (pathSubGroundPage4 != "")
        {
            SubGroundPage4fileName += SubGroundedit4->text();
            SubGroundPage4fileName += "-v ";
            SubGroundPage4fileName += pathSubGroundPage4;
            char* program;
            QByteArray ba = SubGroundPage4fileName.toLatin1();
            program = ba.data();

            pro = new QProcess;
            pro->start(program);

             if (file_logtxtGroundPage4->exists())
                     file_logtxtGroundPage4->remove();
            connect(pro,SIGNAL(readyReadStandardOutput()),this,SLOT(showOutPutSubGroundPage4()));
        }
        if (pathSubGroundPage4 == "")
        {
         char* program;
         QByteArray ba = SubGroundPage4fileName.toLatin1();
         program = ba.data();

         pro = new QProcess;
         pro->start(program);

          if (file_logtxtGroundPage4->exists())
                  file_logtxtGroundPage4->remove();
         connect(pro,SIGNAL(readyReadStandardOutput()),this,SLOT(showOutPutSubGroundPage4()));
           }
    }

    void SubGroundPage4::SubGroundstopButton_clicked4()
    {
        if(pro)
        pro->close();
        delete pro;
        pro = 0;
    }
    void SubGroundPage4::showOutPutSubGroundPage4()
    {
        abc = pro->readAllStandardOutput();
        textBrowserSubGroundPage4->setPlainText(abc);

       if(!file_logtxtGroundPage4->open(QIODevice::WriteOnly  | QIODevice::Text|QIODevice::Append))
       {
          QMessageBox::warning(this,"sdf","can't open",QMessageBox::Yes);
       }

       QTextStream in(file_logtxtGroundPage4);
       in<<abc<<"\n";
       file_logtxtGroundPage4->close();

    }

void SubGroundPage4::getPathSubGroundPage4(QString ipathSubGroundPage4)
{
    pathSubGroundPage4 = ipathSubGroundPage4;
}

QLineEdit *SubGroundPage4::SubGroundPage4createLineEdit(const QString &text)
{
    QLineEdit *LineEditSubGroundPage4 = new QLineEdit;
    LineEditSubGroundPage4->setText(text);
    return LineEditSubGroundPage4;
}

SubGroundPage5::SubGroundPage5(QWidget *parent)
    : QWidget(parent)
{
    textBrowserSubGroundPage5 = new QTextBrowser;
    QString file_fullSubGroundPage5 = ":/txt/GroundDetection5/NCCConsistency_GroundDetection.txt";
    QFile file(file_fullSubGroundPage5);
       if (!file.open(QFile::ReadOnly | QFile::Text))
          {
               QMessageBox::warning(this, tr("Application"),
                                       tr("Cannot read file %1:\n%2.")
                                    .arg(file_fullSubGroundPage5)
                                       .arg(file.errorString()));
               return;
          }
          QTextStream in(&file);
          textBrowserSubGroundPage5->setPlainText(in.readAll());
          file.close();
    textBrowserSubGroundPage5->setStyleSheet ("border:1px groove gray;background-color:linen;border-radius:10px;padding:2px 4px;");

    SubGroundedit5 = SubGroundPage5createLineEdit(tr(""));
    SubGroundedit5->setStyleSheet ("border:1px groove gray;border-radius:10px;padding:2px 4px;");

    QPushButton *SubGroundstartButton5 = new QPushButton(tr("运行"));
    SubGroundstartButton5->setStyleSheet ("border:1px groove gray;border-radius:10px;padding:2px 4px;");
    QObject::connect(SubGroundstartButton5,SIGNAL(clicked()),this, SLOT(SubGroundstartButton_clicked5()));
    QPushButton *SubGroundstopButton5 = new QPushButton(tr("停止"));
    SubGroundstopButton5->setStyleSheet ("border:1px groove gray;border-radius:10px;padding:2px 4px;");
    QObject::connect(SubGroundstopButton5,SIGNAL(clicked()),this, SLOT(SubGroundstopButton_clicked5()));

     QGridLayout *SubGroundmainLayout5 = new QGridLayout;
     SubGroundmainLayout5->addWidget(textBrowserSubGroundPage5,0,0,1,2);
     SubGroundmainLayout5->addWidget(SubGroundedit5,1,0,1,1);
     SubGroundmainLayout5->addWidget(SubGroundstartButton5,1,1,1,1);
     SubGroundmainLayout5->addWidget(SubGroundstopButton5,2,1,1,1);
     setLayout(SubGroundmainLayout5);

     file_logtxtGroundPage5 = new QFile(this);
     file_logtxtGroundPage5->setFileName("1.txt");
}
void SubGroundPage5::SubGroundstartButton_clicked5()
{
    QString SubGroundPage5fileName = "/home/jalywangtuxiang/QT/build-detect_track_0904_yangdong-Desktop_Qt_5_5_1_GCC_64bit-Debug/detect_track_0904_yangdong ";
        if (pathSubGroundPage5 != "")
        {
            SubGroundPage5fileName += SubGroundedit5->text();
            SubGroundPage5fileName += "-v ";
            SubGroundPage5fileName += pathSubGroundPage5;
            char* program;
            QByteArray ba = SubGroundPage5fileName.toLatin1();
            program = ba.data();

            pro = new QProcess;
            pro->start(program);

             if (file_logtxtGroundPage5->exists())
                     file_logtxtGroundPage5->remove();
            connect(pro,SIGNAL(readyReadStandardOutput()),this,SLOT(showOutPutSubGroundPage5()));
        }
        if (pathSubGroundPage5 == "")
        {
         char* program;
         QByteArray ba = SubGroundPage5fileName.toLatin1();
         program = ba.data();

         pro = new QProcess;
         pro->start(program);

          if (file_logtxtGroundPage5->exists())
                  file_logtxtGroundPage5->remove();
         connect(pro,SIGNAL(readyReadStandardOutput()),this,SLOT(showOutPutSubGroundPage5()));
           }
    }

    void SubGroundPage5::SubGroundstopButton_clicked5()
    {
        if(pro)
        pro->close();
        delete pro;
        pro = 0;
    }
    void SubGroundPage5::showOutPutSubGroundPage5()
    {
        abc = pro->readAllStandardOutput();
        textBrowserSubGroundPage5->setPlainText(abc);

       if(!file_logtxtGroundPage5->open(QIODevice::WriteOnly  | QIODevice::Text|QIODevice::Append))
       {
          QMessageBox::warning(this,"sdf","can't open",QMessageBox::Yes);
       }

       QTextStream in(file_logtxtGroundPage5);
       in<<abc<<"\n";
       file_logtxtGroundPage5->close();

    }
void SubGroundPage5::getPathSubGroundPage5(QString ipathSubGroundPage5)
{
    pathSubGroundPage5 = ipathSubGroundPage5;
}


QLineEdit *SubGroundPage5::SubGroundPage5createLineEdit(const QString &text)
{
    QLineEdit *LineEditSubGroundPage5 = new QLineEdit;
    LineEditSubGroundPage5->setText(text);
    return LineEditSubGroundPage5;
}
