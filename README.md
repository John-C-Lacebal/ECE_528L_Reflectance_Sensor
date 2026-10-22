# ECE 528/L - Robotics and Embedded Systems with Lab
**CSU Northridge**

**Department of Electrical and Computer Engineering**

## Reflectance Sensor Lab
The Reflectance Sensor lab interfaces with the following:

* User LEDs of the TI MSP432 LaunchPad
* 8-Channel QTRX Sensor Array - [Product Link](https://www.pololu.com/product/3672)

## Pre-Lab
1. Each reflectance sensor consists of a dimmable IR emitter coupled with a phototransistor that responds based on how much of the emitter’s light is reflected back to it. The QTRX Reflectance Sensor Array has eight reflectance sensors. Its operating voltage is 2.9 to 5.5 V.

2. CTRL EVEN (P5.3 on TI-RSLK MSP432) and CTRL ODD (P9.2 on TI-RSLK MSP432) enable the even-numbered and odd-numbered pins, respectively. Both are pulled to logic high by default when the sensor array is powered on.

3. 

````c
void P5_0_and_P9_7_Init(void) {
    P5->SEL0 &= ~0x01;
    P5->SEL1 &= ~0x01;
    P5->DIR |= 0x01;
    P5->OUT &= ~0x01;

    P9->SEL0 &= ~0x80;
    P9->SEL1 &= ~0x80;
    P9->DIR |= 0x80;
    P9->OUT &= ~0x80;
}
````
