/******************************************************************
*
*	CyberLink for Java
*
*	Copyright (C) Satoshi Konno 2002-2004
*
*	File : TestDevice.h
*
******************************************************************/

#ifndef _CLINK_TESTHTTPSERVER_H_
#define _CLINK_TESTHTTPSERVER_H_

#include <string>
#include <cybergarage/upnp/CyberLink.h>

class TestHTTPServer : public uHTTP::HTTPServer, public uHTTP::HTTPRequestListener
{
public:

	static const char *TEST_URI;
	static const char *TEST_INPUTSTREAM_URI;
	static const char *TEST_CHUNKED_URI;

public:

	TestHTTPServer();

	////////////////////////////////////////////////
	// setContent
	////////////////////////////////////////////////

	std::string content;

	void setContent(const char *value)
	{
		content = value;
	}

	////////////////////////////////////////////////
	// HttpRequestListner
	////////////////////////////////////////////////

	void httpRequestRecieved(uHTTP::HTTPRequest *httpReq);
	void httpInputStreamRequestRecieved(uHTTP::HTTPRequest *httpReq);
	void httpChunkedStreamRequestRecieved(uHTTP::HTTPRequest *httpReq);

	////////////////////////////////////////////////
	// update
	////////////////////////////////////////////////

	void update();
};

#endif

