#include "protocol.h"

pdu *mkpud(uint uimsgLen)
{
    uint uiPDULen =sizeof(pdu) +uimsgLen;
    pdu *Pdu = (pdu*)malloc(uiPDULen);
    memset(Pdu,0,uiPDULen);
    Pdu->uiPDUlen = uiPDULen;
    Pdu->uiMsgType = uimsgLen;
    return Pdu;
}
