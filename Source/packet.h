#ifndef PACKET_H
#define PACKET_H

#include "datatypes.h"
#include <pcap.h>

class Packet{
  public:
    Packet(const struct pcap_pkthdr *packetHeader, const u_char *packetData);

  private:
    IPHeader* ipHeader;
};

#endif // PACKET_H
