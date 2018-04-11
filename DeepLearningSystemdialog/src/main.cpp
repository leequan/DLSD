#include "./include/configdialog.h"
#include <QApplication>
#include "./include/pages.h"
#include <QtWidgets>
#include <QBitmap>


int main(int argc, char *argv[])
{
    Q_INIT_RESOURCE(configdialog);

    QApplication app(argc, argv);
    app.setApplicationDisplayName("深度学习图像处理算法演示系统");
    ConfigDialog dialog;
    dialog.setWindowFlags(Qt::Widget);
    dialog.setStyleSheet("background-color:beige");
    return dialog.exec();
}
