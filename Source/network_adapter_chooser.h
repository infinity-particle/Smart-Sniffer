#ifndef NETWORKADAPTERCHOOSER_H
#define NETWORKADAPTERCHOOSER_H

#include <QDebug>
#include <QString>
#include <QWidget>
#include <pcap.h>
#include <QMessageBox>

class NetworkAdapterChooser : public QWidget{
    Q_OBJECT

  public:
    NetworkAdapterChooser(QWidget* parent = nullptr);

  private:
    pcap_if_t* allNetworkAdapters;
    pcap_if_t* choosedNetworkAdapter;
    QString* errorBuffer;
};

#endif // NETWORKADAPTERCHOOSER_H
