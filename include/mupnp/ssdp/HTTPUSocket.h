/******************************************************************
*
*  CyberLink for C++
*
*  Copyright (C) Satoshi Konno 2002
*
*  File: HTTPUSocket.h
*
*  Revision;
*
*  06/05/03
*    - first revision
*
******************************************************************/

#ifndef _CLINK_HTTPUSOCKET_H_
#define _CLINK_HTTPUSOCKET_H_

#include <uhttp/net/DatagramSocket.h>
#include <cybergarage/upnp/ssdp/SSDPPacket.h>

namespace CyberLink {
class HTTPUSocket  {
  uHTTP::DatagramSocket ssdpUniSock;

 public:
  ////////////////////////////////////////////////
  // Constructor
  ////////////////////////////////////////////////

  HTTPUSocket();
  
  ~HTTPUSocket();

  ////////////////////////////////////////////////
  // open
  ////////////////////////////////////////////////
  
  bool open(int bindPort = -1, const std::string &bindAddr = "");

  ////////////////////////////////////////////////
  // close
  ////////////////////////////////////////////////

  bool close();

  ////////////////////////////////////////////////
  // DatagramSocket
  ////////////////////////////////////////////////

  uHTTP::DatagramSocket &getDatagramSocket() {
    return ssdpUniSock;
  }

  ////////////////////////////////////////////////
  // bindAddr
  ////////////////////////////////////////////////

  const char *getLocalAddress() {
    return ssdpUniSock.getLocalAddress();
  }

  ////////////////////////////////////////////////
  // post/receive
  ////////////////////////////////////////////////
  
  bool post(const std::string &addr, int port, const std::string &msg);

  bool receive(SSDPPacket *ssdpPacket);

};

}

#endif

