#include "..\include\Led.h"

Led::Led(byte pin)
{
    this->pin = pin;
    pinMode(pin, OUTPUT);
    status = 0;
}

void Led::switchOn()
{
    status = 1;
    digitalWrite(pin, HIGH);
}

void Led::switchOFf()
{
    status = 0;
    digitalWrite(pin, status);
}

void Led::changeState()
{
    switch (status)
    {
    case 1:
        switchOFf();

        break;

    default:
        switchOn();
        break;
    }
}

bool Led::getStatus()
{
    return status;
}