#include "include\Main.h"
#include "Arduino.h"

double Input; //MEasured Current
byte buttonPins[] = { SWITCH_PIN_MOS1, SWITCH_PIN_MOS2, BUTTON_PIN_SWAP };
shopper shopperMain(PWM_PIN_1, PWM_FREQ);
shopper shopperBackup(PWM_PIN_2, PWM_FREQ);
Led ledMos1(LED_PIN_MOS_1);
Led ledMos2(LED_PIN_MOS_2);
Led ledSwap(BUTTON_PIN_SWAP);
MosfetMatrix matrix(mosfet1Pin, mosfet2Pin);
Sensor currentSensor(PIN_INPUT, 8);

// int hotSwap(double currentMeasure)
// { // Function for the HotSwap event
//   if (hotSwapEnable == true)
//   {
//     if ((currentMeasure <= hotSwapLimit))
//     {
//       // Switch Mosfets for Hotswap
//       matrix.switchToPS2();

//       // PWM to 100% till current rises to wanted value
//       do
//       {
//         ledcWrite(ledChannel, maxPwm);
//       } while (analogRead(PIN_INPUT) <= sollwert);
//       hotSwapEnable = false;
//       return 1;
//     }
//   }
//   return 0;
// }

void setup()
{
    //initialize the variables we're linked to for PID
    Input = currentSensor.getCurrentSensed();
    //Initialize PID for shopper
    //shopperMain.PidInit(&Input, SETPOINT, KP, KI, KD);
    //shopperBackup.PidInit(&Input, SETPOINT, KP, KI, KD);
    Serial.begin(115200);
    pinMode(12, OUTPUT);
}

void loop()
{
    //Aktivate HotSwap with switch
    /* if (digitalRead(hotSwapEnablePin) == true)
      hotSwapEnable = true;
    if (hotSwapEnable == true)
      digitalWrite(onboardLed, HIGH); */

    digitalWrite(13, HIGH);
    //Serial.println("main loop ");
    //Input = currentSensor.getCurrentSensed();

    //shopperMain.PidCompute();
}
