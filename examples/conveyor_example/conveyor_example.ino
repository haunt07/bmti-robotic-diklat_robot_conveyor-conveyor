#include <conveyor.h>

Conveyor conve;
void setup(){
    Serial.begin(115200);
    conve.begin(12);
    Serial.println("Inisialisasi sistem");
}

void loop(){
    Serial.println("Conveyor on");
    conve.on();
    delay(5000);
    Serial.println("Conveyor off");
    conve.off();
    delay(5000);
}