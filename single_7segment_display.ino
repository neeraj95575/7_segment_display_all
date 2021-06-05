#include "SevSeg.h"
SevSeg sevseg; 

void setup(){
    byte numDigits = 1;
    byte digitPins[] = {};
    byte segmentPins[] = {2, 3, 4, 5, 6, 7, 8, 9};
    bool resistorsOnSegments = true;

    byte hardwareConfig = COMMON_ANODE; 
    sevseg.begin(hardwareConfig, numDigits, digitPins, segmentPins, resistorsOnSegments);
    sevseg.setBrightness(90);
}

void loop(){
    for(int i = 0; i < 10; i++){
        sevseg.setNumber(i, i%2);
        delay(1000);
        sevseg.refreshDisplay(); 
        }
}
