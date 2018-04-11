
#ifndef PAGES_H
#define PAGES_H

#include <QWidget>
#include <QDir>

QT_BEGIN_NAMESPACE
class QLineEdit;
class QComboBox;
class QLabel;
class QPushButton;
class QTableWidget;
class QTableWidgetItem;
class QListWidget;
class QListWidgetItem;
class QStackedWidget;
class SubGroundPage1;
class SubGroundPage2;
class SubGroundPage3;
class SubGroundPage4;
class SubGroundPage5;
class SubSkyPage1;
class SubSkyPage2;
QT_END_NAMESPACE

//母类界面定义
class VideoPage : public QWidget
{
    Q_OBJECT

public:
    VideoPage(QWidget *parent = 0);
    QString  videoPath;

signals:
     void sendPath(QString path);

private slots:
    void browse();
    void find();
    void openFileOfItem(int row, int column);

private:
    QStringList findFiles(const QStringList &files, const QString &text);
    void showFiles(const QStringList &files);
    QPushButton *createButton(const QString &text, const char *member);
    QComboBox *createComboBox(const QString &text = QString());
    void createFilesTable();

    QComboBox *fileComboBox;
    QComboBox *textComboBox;
    QComboBox *directoryComboBox;
    QLabel *fileLabel;
    QLabel *textLabel;
    QLabel *directoryLabel;
    QLabel *filesFoundLabel;
    QPushButton *browseButton;
    QPushButton *findButton;
    QTableWidget *filesTable;
    QString directory;
    QDir currentDir;
};


class GroundPage : public QWidget
{
    Q_OBJECT

public:
    GroundPage(QWidget *parent = 0);

    SubGroundPage1 *mSubGroundPage1;
    SubGroundPage2 *mSubGroundPage2;
    SubGroundPage3 *mSubGroundPage3;
    SubGroundPage4 *mSubGroundPage4;
    SubGroundPage5 *mSubGroundPage5;

public slots:
    void GroundchangePage(QListWidgetItem *current, QListWidgetItem *previous);    
private:
     void GroundcreateIcons();
     QListWidget *GroundcontentsWidget;
     QStackedWidget *GroundpagesWidget;
};

class SkyPage : public QWidget
{
    Q_OBJECT

public:
    SkyPage(QWidget *parent = 0);
    SubSkyPage1 *mSubSkyPage1;
    SubSkyPage2 *mSubSkyPage2;

public slots:
    void SkychangePage(QListWidgetItem *current, QListWidgetItem *previous);
private:
      void SkycreateIcons();
      QListWidget *SkycontentsWidget;
      QStackedWidget *SkypagesWidget;
};


class BriefPage : public QWidget
{
public:
    BriefPage(QWidget *parent = 0);
};
#endif
