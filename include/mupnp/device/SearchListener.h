/******************************************************************
*
*  CyberLink for C++
*
*  Copyright (C) Satoshi Konno 2002
*
*  File: SearchListener.h
*
*  Revision;
*
*  07/05/03
*    - first revision
*
******************************************************************/

#ifndef _CLINK_SSDPSEARCHLISTENER_H_
#define _CLINK_SSDPSEARCHLISTENER_H_

#include <uhttp/util/Listener.h>
#include <cybergarage/upnp/ssdp/SSDPPacket.h>

namespace CyberLink {
    
class SearchListener : public uHTTP::Listener {
public:
  virtual bool deviceSearchReceived(SSDPPacket *ssdpPacket) = 0;
};

}

#endif
