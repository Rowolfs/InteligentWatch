#include "WifiClient.h"
WifiClient::WifiClient() {
	ssid = "RooMi555";
	password = "30051979";
	WiFi.begin(ssid, password);
	while (WiFi.status() != WL_CONNECTED) {
		delay(500);
		Serial.begin(9600);
		Serial.print(".");
	}
	Serial.print("Connected");
}
WifiClient::~WifiClient() {
	delete ssid;
	delete password;

}