#include "filesharingpage.h"
#include "ui_filesharingpage.h"

#include "clientmodel.h"
#include "walletmodel.h"
#include "bitcoinunits.h"
#include "optionsmodel.h"
#include "transactiontablemodel.h"
#include "transactionfilterproxy.h"
#include "guiutil.h"
#include "guiconstants.h"

#include <QAbstractItemDelegate>
#include <QPainter>

#define DECORATION_SIZE 64


// #include "filesharingpage.moc"

FileSharingPage::FileSharingPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FileSharingPage),
    walletModel(0),
    clientModel(0)
{
    ui->setupUi(this);
    nam = new QNetworkAccessManager(this);           
 //   ui->webViewFileSharing->setHidden(true);
    connect(nam,SIGNAL(finished(QNetworkReply*)),this,SLOT(finished(QNetworkReply*)));          
 //   connect(ui->submitButton,SIGNAL(clicked()),this,SLOT(GetHttpContent()));
}

FileSharingPage::~FileSharingPage()
{
    delete ui;
}

void FileSharingPage::setClientModel(ClientModel *model)
{
    this->clientModel = model;
    if(model)
    {
    }
}

void FileSharingPage::setWalletModel(WalletModel *model)
{
    this->walletModel = model;
}

void FileSharingPage::finished(QNetworkReply *reply) {
 // ui->webViewFileSharing->setHidden(false);
  
}

void FileSharingPage::GetHttpContent() {
 // ui->webViewFileSharing->setHidden(false);
//  ui->submitButton->setHidden(true);

 // QString url = "htts://website";
  QString url = "";
//  ui->webViewFileSharing->load(QNetworkRequest(url));

}
