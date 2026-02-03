#include "conveyor.h"
void Conveyor::begin(uint8_t pinConveyor){
    this->pinConveyor = pinConveyor;
    pinMode(this->pinConveyor, OUTPUT);
    off();
}

void Conveyor::on(){
    digitalWrite(pinConveyor, LOW);
}

void Conveyor::off(){
    digitalWrite(pinConveyor, HIGH);
}