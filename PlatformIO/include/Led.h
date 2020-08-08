#pragma once
#include <Arduino.h>
class Led
{
private:
    byte status;
    bool pin;

public:
    Led(byte pin);
    void switchOn();
    void switchOFf();
    void changeState();
    bool getStatus();
};