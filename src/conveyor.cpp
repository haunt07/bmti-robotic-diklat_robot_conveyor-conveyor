#include "conveyor.h"
void Conveyor::begin(uint8_t pinConveyor){
    this->pinConveyor = pinConveyor;
    pinMode(this->pinConveyor, OUTPUT);
    Off();
}

void Conveyor::On(){
    digitalWrite(pinConveyor, LOW);
}

void Conveyor::Off(){
    digitalWrite(pinConveyor, HIGH);
}