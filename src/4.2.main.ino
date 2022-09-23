//#include <M5Unified.h>
//#include <WiFi.h>
//
//const char* ssid = "";
//const char* password = "";
//const char* ntpServer = "ntp.nict.jp";
//const long gmtOffset_sec = 60 * 60 * 9;
//const int daylightOffset_sec = 0;
//
//void printLocalTime(){
//    struct tm timeInfo;
//    if (getLocalTime(&timeInfo)){
//        M5.Lcd.setCursor(0, 15);
//        M5.Lcd.printf("Data: %04d/%02d/%02d\n", timeInfo.tm_year + 1900, timeInfo.tm_mon + 1, timeInfo.tm_mday);
//    }
//}
//
//void setup() {
//    M5.begin();
//
//    M5.Lcd.fillScreen(BLACK);
//    M5.Lcd.setTextSize(1);
//    M5.Lcd.setCursor(40, 0, 2);
//    M5.Lcd.println("CLOCK TEST");
//
//    Serial.println("Connecting to " + String(ssid));
//    WiFi.begin(ssid, password);
//
//    while (WiFi.status() != WL_CONNECTED){
//        delay(500);
//        Serial.print(".");
//    }
//    Serial.println("CONNECTED");
//
//    configTime(gmtOffset_sec, daylightOffset_sec, ntpServer);
//    printLocalTime();
//
//    WiFi.disconnect(true);
//    WiFi.mode(WIFI_OFF);
//}
//
//void loop() {
//    printLocalTime();
//    delay(500);
//}