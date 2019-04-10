#ifndef MASTERNODELISTALL_H
#define MASTERNODELISTALL_H

#include "masternode.h"
#include "platformstyle.h"
#include "sync.h"
#include "util.h"

#include <QMenu>
#include <QTimer>
#include <QWidget>

#define MASTERNODELIST_UPDATE_SECONDS 15
#define MASTERNODELIST_FILTER_COOLDOWN_SECONDS 3

namespace Ui
{
class MasternodeListAll;
}

class ClientModel;
class WalletModel;

QT_BEGIN_NAMESPACE
class QModelIndex;
QT_END_NAMESPACE

/* Masternode Manager page widget */
class MasternodeListAll : public QWidget
{
    Q_OBJECT

public:
    explicit MasternodeListAll(QWidget* parent = 0);
    ~MasternodeListAll();

    void setClientModel(ClientModel* clientModel);
    void setWalletModel(WalletModel* walletModel);

private:
    int64_t nTimeFilterUpdated;
    bool fFilterUpdated;

public Q_SLOTS:
    void updateNodeList();

Q_SIGNALS:

private:
    QTimer* timer;
    Ui::MasternodeListAll* ui;
    ClientModel* clientModel;
    WalletModel* walletModel;
    QString strCurrentFilter;

private Q_SLOTS:
    void on_filterLineEdit_textChanged(const QString& strFilterIn);
};
#endif // MASTERNODELISTALL_H

