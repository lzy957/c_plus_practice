#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTextCodec>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    file.FileOpen();
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void gb2312ToUtf8(std::string& strGb2312)
{

QTextCodec* utf8Codec= QTextCodec::codecForName("utf-8");
QTextCodec* gb2312Codec = QTextCodec::codecForName("gb2312");

QString strUnicode= gb2312Codec->toUnicode(strGb2312.c_str());
QByteArray ByteUtf8= utf8Codec->fromUnicode(strUnicode);

strGb2312= ByteUtf8.data();
}

void utf8ToGb2312(std::string& strUtf8)
{
QTextCodec* utf8Codec= QTextCodec::codecForName("utf-8");
QTextCodec* gb2312Codec = QTextCodec::codecForName("gb2312");

QString strUnicode= utf8Codec->toUnicode(strUtf8.c_str());
QByteArray ByteGb2312= gb2312Codec->fromUnicode(strUnicode);

strUtf8= ByteGb2312.data();
}

void MainWindow::on_pushButton_clicked()
{
    QString py;
    py=ui->lineEdit->text();
//    file.FileOpen();
    CIndex index;
    CChncity* tempt=new CChncity;
    tempt=index.SearchNameIndex(py,file.Cityset,file.map->proj);
    tempt->Mark(file.map->proj);
    gb2312ToUtf8(tempt->name);
    QString xs,ys,nameqs;
    nameqs=QString::fromStdString(tempt->name);
    xs=tr( " coordination x: %1" ).arg(tempt->x);
    ys=tr( " coordination y: %1" ).arg(tempt->y);
    ui->label->setText("name:"+nameqs+xs+ys);
    file.map->proj->toUI(tempt->x,tempt->y);
    ui->label_2->setGeometry(file.map->proj->uix-6,file.map->proj->uiy-17,15,15);
    ui->label_2->setText("⬇️");
}

void MainWindow::mousePressEvent(QMouseEvent *event)
{
    float x=event->pos().x();
    float y=event->pos().y();
    file.map->proj->uitoworld(x,y);
    CGeopoint pt;
    pt.x=file.map->proj->ox;
    pt.y=file.map->proj->oy;
    CSearch search;
    CChncity* tempt=new CChncity;
    tempt=search.GraphicsSearch(file.map->wrect,pt,file.Cityset);
    if(tempt!=0x00)
    {
        gb2312ToUtf8(tempt->name);
        QString xs,ys,nameqs;
        nameqs=QString::fromStdString(tempt->name);
        xs=tr( " coordination x: %1" ).arg(tempt->x);
        ys=tr( " coordination y: %1" ).arg(tempt->y);
        ui->label->setText("name:"+nameqs+xs+ys);
        file.map->proj->toUI(tempt->x,tempt->y);
        ui->label_2->setGeometry(file.map->proj->uix-6,file.map->proj->uiy-17,15,15);
        ui->label_2->setText("⬇️");
    }
else
    {
        ui->label->setText("Try again");

    }
}
