#include <ESP8266WiFi.h>
#include "Arduino.h"
#pragma once
class WifiClient
{ public:
	WifiClient();
	~WifiClient();
private:
	const char* ssid;
	const char* password;
};

