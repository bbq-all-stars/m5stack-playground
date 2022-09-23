//#include <M5Unified.h>
//#include <Avatar.h>
//#include <faces/DogFace.h>
//
//using namespace m5avatar;
//Avatar avatar;
//
//const char* lyrics[] = {"Hello,", "brave", "dog", "and", "what a", "beautiful", "cat"};
//const int lyricsSize = sizeof(lyrics) / sizeof(char*);
//int lyricsIdx = 0;
//
//void setup(){
//    M5.begin();
//    avatar.init();
//}
//
//void loop(){
//    M5.update();
//    if (M5.BtnA.wasPressed()){
//        const char* i = lyrics[lyricsIdx++ % lyricsSize];
//        avatar.setSpeechText(i);
//        avatar.setMouthOpenRatio(0.7);
//        delay(200);
//        avatar.setMouthOpenRatio(0);
//    }
//
//}