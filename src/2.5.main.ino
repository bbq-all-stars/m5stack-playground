//#include <M5Core2.h>
//
//void setup() {
//  M5.begin();
//  M5.Lcd.setTextSize(4);
//}
//
//void loop() {
//  M5.update();
//  M5.Lcd.setCursor(0, 0);
//
//  if (M5.BtnA.wasReleased()){
//    M5.Lcd.fillScreen(RED);
//    M5.Lcd.print("red");
//    Serial.println("red---------------");
//
//  } else if (M5.BtnB.wasReleased()){
//    M5.Lcd.fillScreen(GREEN);
//    M5.Lcd.print("green");
//    Serial.println("green---------------");
//
//  } else if (M5.BtnC.wasReleased()){
//    M5.Lcd.fillScreen(BLUE);
//    M5.Lcd.print("blue");
//    Serial.println("blue---------------");
//
//  } else if (M5.BtnB.wasReleasefor(1000)){
//    M5.Lcd.clear();
//    Serial.println("clear---------------");
//  }
//}