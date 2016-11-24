#ifndef DATATYPES_H
#define DATATYPES_H

typedef struct IPHeader{
    unsigned char headerLength :4;
    unsigned char version :4;
    unsigned char typeOfService;
    unsigned short totalLength;
    unsigned short identificator;

    unsigned char fragmentOffsetFirstPart :5;

    unsigned char moreFragment :1;
    unsigned char dontFragment :1;
    unsigned char reserved :1;

    unsigned char fragmentOffsetSecondPart;

    unsigned char timeToLive;
    unsigned char protocol;
    unsigned short checksum;
    unsigned int sourceAddress;
    unsigned int destinationAddress;
}IPHeader;

typedef struct TCPHeader{
    unsigned short sourcePort;
    unsigned short destinationPort;
    unsigned int sequenceNumber;
    unsigned int acknowledgementNumber;

    unsigned char nonseSumFlag :1;
    unsigned char reserved :3;
    unsigned char dataOffset :4;

    unsigned char finishFlag :1;
    unsigned char synchroniseFlag :1;
    unsigned char resetFlag :1;
    unsigned char pushFlag :1;
    unsigned char acknowledgementFlag :1;
    unsigned char urgentFlag :1;

    unsigned char ECN_echoFlag :1;
    unsigned char congestionWindowReducedFlag :1;

    unsigned short window;
    unsigned short checksum;
    unsigned short urgentPointer;
}TCPHeader;


typedef struct UDPHeader{
    unsigned short sourcePort;
    unsigned short destinationPort;
    unsigned short length;
    unsigned short CRC;
}UDPHeader;

typedef struct ICMPHeader{
    unsigned char type;
    unsigned char code;
    unsigned short checksum;
    unsigned int restOfHeader;
}ICMPHeader;

#endif // DATATYPES_H
