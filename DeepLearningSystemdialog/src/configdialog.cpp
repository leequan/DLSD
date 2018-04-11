
#include <QtWidgets>
#include "./include/configdialog.h"
#include "./include/subgroundpage.h"
#include "./include/subskypage.h"
#include "./include/pages.h"
#include <QSplitter>

ConfigDialog::ConfigDialog()
{
    contentsWidget = new QListWidget;
    contentsWidget->setViewMode(QListView::IconMode);
    contentsWidget->setIconSize(QSize(64, 64));
    contentsWidget->setMovement(QListView::Static); //设置图标可不可以移动，默认是可移动的，但可以改成静态的：
    contentsWidget->setResizeMode(QListView::Adjust); //设置QListView大小改变时，图标的调整模式，默认是固定的，但可以改成自动调整：
    contentsWidget->setMaximumWidth(160);
    contentsWidget->setMinimumWidth(135);
    contentsWidget->setMinimumHeight(600);
    contentsWidget->setSpacing(24); //表示各个控件之间的上下间距
    contentsWidget->setStyleSheet ("border:1px groove gray;border-radius:10px;padding:2px 4px;");

    pagesWidget = new QStackedWidget;
    m_VideoPage = new VideoPage(this);
    m_GroundPage = new GroundPage(this);
    m_SkyPage = new SkyPage(this);

    connect(m_VideoPage, SIGNAL(sendPath(QString)),m_GroundPage-> mSubGroundPage1,SLOT(getPathSubGroundPage1(QString)));
    connect(m_VideoPage, SIGNAL(sendPath(QString)),m_GroundPage-> mSubGroundPage2,SLOT(getPathSubGroundPage2(QString)));
    connect(m_VideoPage, SIGNAL(sendPath(QString)),m_GroundPage-> mSubGroundPage3,SLOT(getPathSubGroundPage3(QString)));
    connect(m_VideoPage, SIGNAL(sendPath(QString)),m_GroundPage-> mSubGroundPage4,SLOT(getPathSubGroundPage4(QString)));
    connect(m_VideoPage, SIGNAL(sendPath(QString)),m_GroundPage-> mSubGroundPage5,SLOT(getPathSubGroundPage5(QString)));

    connect(m_VideoPage, SIGNAL(sendPath(QString)),m_SkyPage-> mSubSkyPage1,SLOT(getPathSubSkyPage1(QString)));
    connect(m_VideoPage, SIGNAL(sendPath(QString)),m_SkyPage-> mSubSkyPage2,SLOT(getPathSubSkyPage2(QString)));

    pagesWidget->addWidget(m_VideoPage);
    pagesWidget->addWidget(m_GroundPage);
    pagesWidget->addWidget(m_SkyPage);
    pagesWidget->addWidget(new BriefPage);

    createIcons();
    contentsWidget->setCurrentRow(0);

    QHBoxLayout *horizontalLayout = new QHBoxLayout;
    horizontalLayout->addWidget(contentsWidget);
    horizontalLayout->addWidget(pagesWidget, 1);

    QVBoxLayout *mainLayout = new QVBoxLayout;
    mainLayout->addLayout(horizontalLayout);
    setLayout(mainLayout);


}

void ConfigDialog::createIcons()
{
    QListWidgetItem *VideoButton = new QListWidgetItem(contentsWidget);
    VideoButton->setIcon(QIcon(":/images/video.png"));
    VideoButton->setText(tr("测试视频路径"));
    VideoButton->setTextAlignment(Qt::AlignHCenter);
    VideoButton->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled);

    QListWidgetItem *GroundButton = new QListWidgetItem(contentsWidget);
    GroundButton->setIcon(QIcon(":/images/car.png"));
    GroundButton->setText(tr("对地检测跟踪"));
    GroundButton->setTextAlignment(Qt::AlignHCenter);
    GroundButton->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled);

    QListWidgetItem *SkyButton = new QListWidgetItem(contentsWidget);
    SkyButton->setIcon(QIcon(":/images/air.jpg"));
    SkyButton->setText(tr("对空检测跟踪"));
    SkyButton->setTextAlignment(Qt::AlignHCenter);
    SkyButton->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled);

    QListWidgetItem *BriefButton = new QListWidgetItem(contentsWidget);
    BriefButton->setIcon(QIcon(":/images/software.jpg"));
    BriefButton->setText(tr("软件简介说明"));
    BriefButton->setTextAlignment(Qt::AlignHCenter);
    BriefButton->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled);

    connect(contentsWidget,
            SIGNAL(currentItemChanged(QListWidgetItem*,QListWidgetItem*)),
            this, SLOT(changePage(QListWidgetItem*,QListWidgetItem*)));
}


void ConfigDialog::changePage(QListWidgetItem *current, QListWidgetItem *previous)
{
    if (!current)
        current = previous;

    pagesWidget->setCurrentIndex(contentsWidget->row(current));
}
