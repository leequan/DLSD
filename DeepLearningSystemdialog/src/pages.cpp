#include <QtWidgets>

#include "./include/pages.h"
#include "./include/subgroundpage.h"
#include "./include/subskypage.h"
#include "./include/configdialog.h"

VideoPage::VideoPage(QWidget *parent)
    : QWidget(parent)
{

    QPushButton *browseButton = createButton(tr("&Browse..."), SLOT(browse()));
    findButton = createButton(tr("&Find"), SLOT(find()));
    browseButton->setStyleSheet ("border:1px groove gray;border-radius:10px;padding:2px 4px;");
    findButton->setStyleSheet ("border:1px groove gray;border-radius:10px;padding:2px 4px;");

    fileComboBox = createComboBox(tr("*"));
    textComboBox = createComboBox();
    directoryComboBox = createComboBox(QDir::currentPath()); //自定义初始化路径"/home/jalywangtuxiang/videos"

    fileLabel = new QLabel(tr("Named:"));
    textLabel = new QLabel(tr("Camera:")); //Containing text
    directoryLabel = new QLabel(tr("Directory:"));  //In directory
    filesFoundLabel = new QLabel;

    createFilesTable();\

    QGridLayout *mainLayout = new QGridLayout;
    mainLayout->addWidget(fileLabel, 0, 0);
    mainLayout->addWidget(fileComboBox, 0, 1, 1, 2);
    mainLayout->addWidget(textLabel, 1, 0);
    mainLayout->addWidget(textComboBox, 1, 1, 1, 2);
    mainLayout->addWidget(directoryLabel, 2, 0);
    mainLayout->addWidget(directoryComboBox, 2, 1);
    mainLayout->addWidget(browseButton, 2, 2);
    mainLayout->addWidget(filesTable, 3, 0, 1, 3);
    mainLayout->addWidget(filesFoundLabel, 4, 0, 1, 2);
    mainLayout->addWidget(findButton, 4, 2);
    setLayout(mainLayout);

    directory = QDir::currentPath();//自定义初始化路径"/home/jalywangtuxiang/videos"
}

GroundPage::GroundPage(QWidget *parent)
    : QWidget(parent)
{
    GroundcontentsWidget = new QListWidget;
    GroundcontentsWidget->setViewMode(QListView::IconMode);
    GroundcontentsWidget->setMovement(QListView::Static);
    GroundcontentsWidget->setResizeMode(QListView::Adjust);
    GroundcontentsWidget->setMaximumWidth(200);
    GroundcontentsWidget->setMinimumWidth(120);
    GroundcontentsWidget->setMinimumHeight(600);
    GroundcontentsWidget->setSpacing(24);

    GroundpagesWidget = new QStackedWidget;
    mSubGroundPage1 = new SubGroundPage1(this);
    mSubGroundPage2 = new SubGroundPage2(this);
    mSubGroundPage3 = new SubGroundPage3(this);
    mSubGroundPage4 = new SubGroundPage4(this);
    mSubGroundPage5 = new SubGroundPage5(this);

    GroundpagesWidget->addWidget(mSubGroundPage1);
    GroundpagesWidget->addWidget(mSubGroundPage2);
    GroundpagesWidget->addWidget(mSubGroundPage3);
    GroundpagesWidget->addWidget(mSubGroundPage4);
    GroundpagesWidget->addWidget(mSubGroundPage5);
    GroundcontentsWidget->setStyleSheet ("border:1px groove gray;border-radius:10px;padding:2px 4px;");

//    QPushButton *GroundcloseButton = new QPushButton(tr("Close"));
//    GroundcloseButton->setStyleSheet ("border:1px groove gray;border-radius:10px;padding:2px 4px;");

    GroundcreateIcons();
    GroundcontentsWidget->setCurrentRow(0);

//    connect(GroundcloseButton, SIGNAL(clicked()), this, SLOT(close()));

    QHBoxLayout *horizontalLayout2 = new QHBoxLayout;
    horizontalLayout2->addWidget(GroundcontentsWidget);
    horizontalLayout2->addWidget(GroundpagesWidget, 1);

    QHBoxLayout *buttonsLayout2 = new QHBoxLayout;
    buttonsLayout2->addStretch(1);
//    buttonsLayout2->addWidget(GroundcloseButton);

    QGridLayout *mainLayout2 = new QGridLayout;
    mainLayout2->addLayout(horizontalLayout2,0,0);
    mainLayout2->addLayout(buttonsLayout2,1,0);
    setLayout(mainLayout2);


}

void GroundPage::GroundcreateIcons()
{
    QListWidgetItem *GroundButton1 = new QListWidgetItem(GroundcontentsWidget);
    GroundButton1->setText(QObject::tr("KCF检测跟踪"));
    GroundButton1->setSizeHint(QSize(120,30));
    GroundButton1->setTextAlignment(Qt::AlignHCenter);
    GroundButton1->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled);

    QListWidgetItem *GroundButton2 = new QListWidgetItem(GroundcontentsWidget);
    GroundButton2->setText(QObject::tr("KCF多目标检测跟踪"));
    GroundButton2->setTextAlignment(Qt::AlignHCenter);
    GroundButton2->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled);

    QListWidgetItem *GroundButton3 = new QListWidgetItem(GroundcontentsWidget);
    GroundButton3->setText(QObject::tr("KCF目标一致性"));
    GroundButton3->setTextAlignment(Qt::AlignHCenter);
    GroundButton3->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled);

    QListWidgetItem *GroundButton4 = new QListWidgetItem(GroundcontentsWidget);
    GroundButton4->setText(QObject::tr("NCC检测跟踪"));
    GroundButton4->setTextAlignment(Qt::AlignHCenter);
    GroundButton4->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled);

    QListWidgetItem *GroundButton5 = new QListWidgetItem(GroundcontentsWidget);
    GroundButton5->setText(QObject::tr("NCC一致性"));
    GroundButton5->setTextAlignment(Qt::AlignHCenter);
    GroundButton5->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled);

    QObject::connect(GroundcontentsWidget,
            SIGNAL(currentItemChanged(QListWidgetItem*,QListWidgetItem*)),
             this, SLOT(GroundchangePage(QListWidgetItem*,QListWidgetItem*)));
}

void GroundPage::GroundchangePage(QListWidgetItem *current, QListWidgetItem *previous)
{
    if (!current)
        current = previous;
    GroundpagesWidget->setCurrentIndex(GroundcontentsWidget->row(current));
}


SkyPage::SkyPage(QWidget *parent)
    : QWidget(parent)
{

    SkycontentsWidget = new QListWidget;
    SkycontentsWidget->setViewMode(QListView::IconMode);
    SkycontentsWidget->setIconSize(QSize(64, 64));
    SkycontentsWidget->setMovement(QListView::Static);
    SkycontentsWidget->setResizeMode(QListView::Adjust);
    SkycontentsWidget->setMaximumWidth(180);
    SkycontentsWidget->setMinimumWidth(120);
    SkycontentsWidget->setMinimumHeight(600);
    SkycontentsWidget->setSpacing(24);

    SkypagesWidget = new QStackedWidget;
    mSubSkyPage1 = new SubSkyPage1(this);
    mSubSkyPage2 = new SubSkyPage2(this);

    SkypagesWidget->addWidget(mSubSkyPage1);
    SkypagesWidget->addWidget(mSubSkyPage2);
    SkycontentsWidget->setStyleSheet ("border:1px groove gray;border-radius:10px;padding:2px 4px;");

//    QPushButton *SkycloseButton = new QPushButton(tr("Close"));
//    SkycloseButton->setStyleSheet ("border:1px groove gray;border-radius:10px;padding:2px 4px;");

    SkycreateIcons();
    SkycontentsWidget->setCurrentRow(0);

//    connect(SkycloseButton, SIGNAL(clicked()), this, SLOT(close()));

    QHBoxLayout *horizontalLayout2 = new QHBoxLayout;
    horizontalLayout2->addWidget(SkycontentsWidget);
    horizontalLayout2->addWidget(SkypagesWidget, 1);

    QHBoxLayout *buttonsLayout2 = new QHBoxLayout;
    buttonsLayout2->addStretch(1);
//    buttonsLayout2->addWidget(SkycloseButton);

    QGridLayout *mainLayout2 = new QGridLayout;
    mainLayout2->addLayout(horizontalLayout2,0,0);
    mainLayout2->addLayout(buttonsLayout2,1,0);
    setLayout(mainLayout2);



}

void SkyPage::SkycreateIcons()
{

    QListWidgetItem *SkyButton1 = new QListWidgetItem(SkycontentsWidget);
    SkyButton1->setText(QObject::tr("KCF检测跟踪"));
    SkyButton1->setTextAlignment(Qt::AlignHCenter);
    SkyButton1->setTextAlignment(Qt::AlignVCenter);
    SkyButton1->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled);

    QListWidgetItem *SkyButton2 = new QListWidgetItem(SkycontentsWidget);
    SkyButton2->setText(QObject::tr("NCC检测跟踪"));
    SkyButton2->setTextAlignment(Qt::AlignHCenter);
    SkyButton2->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled);

    QObject::connect(SkycontentsWidget,
            SIGNAL(currentItemChanged(QListWidgetItem*,QListWidgetItem*)),
             this, SLOT(SkychangePage(QListWidgetItem*,QListWidgetItem*)));
}

void SkyPage::SkychangePage(QListWidgetItem *current, QListWidgetItem *previous)
{
    if (!current)
        current = previous;
    SkypagesWidget->setCurrentIndex(SkycontentsWidget->row(current));
}


BriefPage::BriefPage(QWidget *parent)
    : QWidget(parent)
{
    QTextBrowser *textBrowser = new QTextBrowser;
    QString file_full = ":/txt/BriefIntroduction.txt";
    QFile file(file_full);
      if (!file.open(QFile::ReadOnly | QFile::Text))
      {
           QMessageBox::warning(this, tr("Application"),
                                   tr("Cannot read file %1:\n%2.")
                                .arg(file_full)
                                   .arg(file.errorString()));
           return;
      }
      QTextStream in(&file);
      textBrowser->setPlainText(in.readAll());
      file.close();
      textBrowser->setStyleSheet ("border:1px groove gray;background-color:linen;border-radius:10px;padding:2px 4px;");

    QGridLayout *SubBriefmainLayout = new QGridLayout;
    SubBriefmainLayout->addWidget(textBrowser,0,0,1,2);
    setLayout(SubBriefmainLayout);

}

void VideoPage::browse()
{
    //getOpenFileName是直接打开文件函数，参数一样;QDir::currentPath() 可以用路径代替"/home/jalywangtuxiang/Videos/"
    directory = QFileDialog::getExistingDirectory(this,
                               tr("Find Files"),QDir::currentPath() );
    if (!directory.isEmpty()) {
        if (directoryComboBox->findText(directory) == -1)
            directoryComboBox->addItem(directory);
        directoryComboBox->setCurrentIndex(directoryComboBox->findText(directory));
    }
}

static void updateComboBox(QComboBox *comboBox)
{
    if (comboBox->findText(comboBox->currentText()) == -1)
        comboBox->addItem(comboBox->currentText());
}

void VideoPage::find()
{
    filesTable->setRowCount(0);

    QString fileName = fileComboBox->currentText();
    QString text = textComboBox->currentText();
    QString path = directoryComboBox->currentText();

    updateComboBox(fileComboBox);
    updateComboBox(textComboBox);
    updateComboBox(directoryComboBox);

    currentDir = QDir(path);
    QStringList files;
    if (fileName.isEmpty())
        fileName = "*";
    files = currentDir.entryList(QStringList(fileName),
                                 QDir::Files | QDir::NoSymLinks);

    if (!text.isEmpty())
        files = findFiles(files, text);
    showFiles(files);
}

QStringList VideoPage::findFiles(const QStringList &files, const QString &text)
{
    QProgressDialog progressDialog(this);
    progressDialog.setCancelButtonText(tr("&Cancel"));
    progressDialog.setRange(0, files.size());
    progressDialog.setWindowTitle(tr("Find Files"));

    QStringList foundFiles;

    for (int i = 0; i < files.size(); ++i) {
        progressDialog.setValue(i);
        progressDialog.setLabelText(tr("Searching file number %1 of %2...")
                                    .arg(i).arg(files.size()));
        qApp->processEvents();

        if (progressDialog.wasCanceled())
            break;

        QFile file(currentDir.absoluteFilePath(files[i]));

        if (file.open(QIODevice::ReadOnly)) {
            QString line;
            QTextStream in(&file);
            while (!in.atEnd()) {
                if (progressDialog.wasCanceled())
                    break;
                line = in.readLine();
                if (line.contains(text)) {
                    foundFiles << files[i];
                    break;
                }
            }
        }
    }
    return foundFiles;
}

void VideoPage::showFiles(const QStringList &files)
{
    for (int i = 0; i < files.size(); ++i) {
        QFile file(currentDir.absoluteFilePath(files[i]));
        qint64 size = QFileInfo(file).size();

        QTableWidgetItem *fileNameItem = new QTableWidgetItem(files[i]);
        fileNameItem->setFlags(fileNameItem->flags() ^ Qt::ItemIsEditable);
        QTableWidgetItem *sizeItem = new QTableWidgetItem(tr("%1 KB")
                                             .arg(int((size + 1023) / 1024)));
        sizeItem->setTextAlignment(Qt::AlignRight | Qt::AlignVCenter);
        sizeItem->setFlags(sizeItem->flags() ^ Qt::ItemIsEditable);

        int row = filesTable->rowCount();
        filesTable->insertRow(row);
        filesTable->setItem(row, 0, fileNameItem);
        filesTable->setItem(row, 1, sizeItem);
    }
    filesFoundLabel->setText(tr("%1 file(s) found").arg(files.size()) +
                             (" (Double click on a file to open it)"));
    filesFoundLabel->setWordWrap(true);
}

QPushButton *VideoPage::createButton(const QString &text, const char *member)
{
    QPushButton *button = new QPushButton(text);
    connect(button, SIGNAL(clicked()), this, member);
    return button;
}

QComboBox *VideoPage::createComboBox(const QString &text)
{
    QComboBox *comboBox = new QComboBox;
    comboBox->setEditable(true);
    comboBox->addItem(text);
    comboBox->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
    return comboBox;
}

void VideoPage::createFilesTable()
{
    filesTable = new QTableWidget(0, 2);
    filesTable->setSelectionBehavior(QAbstractItemView::SelectRows);
    filesTable->setStyleSheet ("border:1px groove gray;background-color:linen;border-radius:10px;padding:2px 4px;");

    QStringList labels;
    labels << tr("Filename") << tr("Size");
    filesTable->setHorizontalHeaderLabels(labels);
    filesTable->horizontalHeader()->setSectionResizeMode(0, QHeaderView::Stretch);
    filesTable->verticalHeader()->hide();
    filesTable->setShowGrid(false);

    connect(filesTable, SIGNAL(cellClicked(int,int)),
            this, SLOT(openFileOfItem(int,int)));  //只能双击:SIGNAL(cellActivated(int,int))
}

void VideoPage::openFileOfItem(int row, int /* column */)
{
    QTableWidgetItem *item = filesTable->item(row, 0);
//  QDesktopServices::openUrl(QUrl::fromLocalFile(currentDir.absoluteFilePath(item->text()))); 双击打开文件函数
    videoPath = currentDir.absoluteFilePath(item->text());
    emit sendPath(videoPath);
}

