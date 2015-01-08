/******************************************************************
*
*  CyberLink for C++
*
*  Copyright (C) Satoshi Konno 2002
*
*  File: NotifyListener.h
*
*  Revision;
*
*  07/05/03
*    - first revision
*
******************************************************************/

#ifndef _CLINK_NOTIFYLISTENER_H_
#define _CLINK_NOTIFYLISTENER_H_

#include <uhttp/util/Listener.h>
#include <cybergarage/upnp/ssdp/SSDPPacket.h>

namespace CyberLink {

class NotifyListener : public uHTTP::Listener {
public:
  virtual bool deviceNotifyReceived(SSDPPacket *ssdpPacket) = 0;
};

}

#endif
