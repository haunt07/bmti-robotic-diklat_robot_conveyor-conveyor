#ifndef CONVEYOR_H
#define CONVEYOR_H
#include <Arduino.h>
class Conveyor{
    private:
    uint8_t pinConveyor;

    public:
    void begin(uint8_t pinConveyor);
    void on();
    void off();
};
#endif