#include <Arduino.h>
#include "Wire.h"

void setup(){
    Serial.begin(115200);
    Wire.begin();
}

void loop(){
    // Do nothing here
    Serial.println("Looping...");
    delay(1000);
}