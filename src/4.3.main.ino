//#include <M5Unified.h>
//#include <WebServer.h>
//
//const char* ssid = "";
//const char* password = "";
//WebServer server(80);
//
//void handleRoot() {
//    String body = "\tENV2 UNIT TEST on WEB\n";
//    body += "This is M5Stack Core2 Server ...\n";
//    server.send(200, "text/plain", body);
//}
//
//void handleNotFound() {
//    server.send(404, "text/plain", "File Not Found\n\n");
//}
//
//void setup(){
//    M5.begin();
//
//    WiFi.begin(ssid, password);
//    Serial.println("Connecting to " + String(ssid));
//
//    while (WiFi.status() != WL_CONNECTED){
//        delay(500);
//        Serial.print(".");
//    }
//    Serial.println("CONNECTED");
//
//    M5.Lcd.setTextSize(2);
//    M5.Lcd.println("Connected!!");
//    M5.Lcd.print("IP: ");
//    M5.Lcd.println(WiFi.localIP());
//
//    server.on("/", handleRoot);
//    server.onNotFound(handleNotFound);
//
//    server.begin();
//    Serial.println("HTTP server started!");
//}
//
//void loop(){
//    server.handleClient();
//    delay(100);
//}