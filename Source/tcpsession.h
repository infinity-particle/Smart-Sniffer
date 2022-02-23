#ifndef TCPSESSION_H
#define TCPSESSION_H

#include "tcp_packet.h"
#include <QList>
#include <QDebug>

class TcpSession
{
    public:
        TcpSession();
        TcpSession(QString sourceIP,QString destinatioIP);
        void addPacket(TCP_packet newPacket);
        void setSourceIP(QString sourceIP);
        void setDestinationIP(QString destinationIP);
        QString getSourceIP() const;
        QString getDestinationIP() const;
        int getNumberOfPackets();
        TcpSession& operator = (const TcpSession& session);
        friend bool operator == (const TcpSession& first, const TcpSession& second);
        bool operator == (const TcpSession session);
        QList<TCP_packet>* getPackets();
        QList<TCP_packet> getPacketsToSave();
    private:
        QList<TCP_packet> packets;
        QString sourceIP;
        QString destinationIP;
};

#endif // TCPSESSION_H
