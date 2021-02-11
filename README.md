# Arduino library for the Multiple Pololu DRV8835 Dual Motor Driver Shield

Version: 1.0.0 <br>
Release date: 2020-02-12 <br>

## Summary

This is a library for an
[Arduino-compatible controller](https://www.pololu.com/arduino) that
interfaces with the
[Pololu DRV8835 Dual Motor Driver Shield for Arduino](https://www.pololu.com/catalog/product/2511).
It makes it simple to drive multiple two brushed, DC motors.

It is Fork of [Polulu Arduino DRV8835 Library](https://github.com/pololu/drv8835-motor-shield/), with changes made to accomodate the multiple instances of Motors when connected to a Arduino Board through constrcutor arguments. 

Constructor Function to Instance as many motor shields as needed:

- `DRV8835MotorShield(unsigned char pin1, unsigned char pin2, unsigned char pin3, unsigned char pin4, boolean flip1, boolean flip2)
Use Following Constructor Function Syntax to Instance as many motor shields as needed:

#include <DRV8835MotorShield.h> <br>

DRV8835MotorShield m1(5,4,3,2,false,false); <br>
DRV8835MotorShield m2(6,7,8,9,false,true);<br>
<br>
<br>
<br>
Note (Assignnments are as follows for above examples): <br>
<br>
DRV8835MotorShield m1(5,4,3,2,false,false);<br>
| Pin| Description |
| --- | --- |
| 5 | Aph |
| 4 | Aen |
| 3 | Bph |
| 2 | Ben |
| Motor1 Flip | false |
| Motor2 Flip | false |

<br>
DRV8835MotorShield m2(6,7,8,9,false,true);<br>
| Pin| Description |
| --- | --- |
| 6 | Aph |
| 7 | Aen |
| 8 | Bph |
| 9 | Ben |
| Motor1 Flip | false |
| Motor2 Flip | true |
<br>

## Getting started


### Software

1. Download the zip
2. Rename the folder "lps-arduino-xxxx" to "DRV8835MotorShield".
3. Drag the "DRV8835MotorShield" folder into the "libraries" directory inside your
   Arduino sketchbook directory. You can view your sketchbook location by
   opening the "File" menu and selecting "Preferences" in the Arduino IDE. If
   there is not already a "libraries" folder in that location, you should make
   the folder yourself.
4. After installing the library, restart the Arduino IDE.


## Documentation

Refer :  [Polulu Arduino DRV8835 Library](https://github.com/pololu/drv8835-motor-shield/)

## Version history
* 1.0.0 (2014-08-15): Original release.
