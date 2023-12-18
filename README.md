# IntroductionToRobotics

### Welcome everybody! :wave: :sunflower: :sunflower:

In this repository you can find all the projects and knowledge on a basic level of Robotics.

Introduction to Robotics (2023 - 2024)

Starting from this point, you can see all the homework:

## Homework 0:

Task1: Install Arduino IDE. :heavy_check_mark: You can download it from [here](https://www.arduino.cc/en/software) 

[This is the latest version of Arduino IDE](https://github.com/BetJohn/IntroductionToRobotics/blob/main/Arduino%20IDE%20-%20Photo.jpg)


## Homework 1: RGB LED :bulb:

Task: Create a breadboard circuit with a LED which is adjusted by 3 potentiometers. :heavy_check_mark:

### In this task I used: 
### 3 Potentioemeters, 3 Resistors, 1 RGB LED, 1 Breadboard, 1 Arduino UNO,1 USB cable and many cables

I have connected the 3 potentiometers to analog pins A0,A1 and A2. 

The RGB LED is connected to digital pins 9,10 and 11. 

The resistors are connected to every RGB pin.

The RGB LED pins get the values from the potentiometers mapped from 0 to 255.

### This is the circuit setup :bulb: [Photo](https://github.com/BetJohn/IntroductionToRobotics/blob/main/Homework1/ledRGB_Setup.jpg)

Code can be download [here](https://github.com/BetJohn/IntroductionToRobotics/blob/main/Homework1/ledRGB.c%2B%2B)


## Homework 2: Elevator simulator :elevator: 

Task: Design a control system that simulates a 3-floor elevator using the Arduino platform

### Materials used:
### 3 Butttons, 4 LEDs, 1 Breadboard, 1 Arduino UNO, 1 USB cable, 1 Buzzer and many cables

I have connected the 3 buttons to digital pins 2,3 and 4.

The 4 LEDs are connected to digital pins 11,12,13 and 7(blinking LED).

The buzzer is connected to digital pin 5.

The LEDs are used to show the current floor and the blinking LED is used to show the elevator is moving.

The buzzer is used to make a sound when the elevator arrives at a floor.

### This is the circuit setup :elevator: [Photo](https://github.com/BetJohn/IntroductionToRobotics/blob/main/Homework2/Elevator_Setup.jpg)

Link to Youtube [here](https://youtu.be/kmI19xoIzjw)

## Homework 3: Seven Segment Display :1234: 

Task: Create a breadboard circuit with a Seven Segment Display which is controlled by 1 joystick.

### Materials used:
### 1 Joystick, 1 Seven Segment Display, 1 Breadboard, 1 Arduino UNO, 1 USB cable, 8 resistors and many cables

I have connected the 8 pins to digital pins 4,5,6,7,8,9,10 and 12

The joystick is connected to analog pins A0, A1 and A2 - for the X, Y and button.

The resistors are connected to every pin of the Seven Segment Display.

The Seven Segment Display move the light depending on the position of the joystick.

Link to Youtube [here](https://www.youtube.com/watch?v=p0jv8QHuTU0&ab_channel=IoanBenescu)

## Homework 5: Serial Communication in Arduino Uno :computer: 

### Materials used:
### 1 Arduino UNO, 1 USB cable, 1 Breadboard, 1 RGB LED, 1 Photoresistor, 1 Ultrasonic Sensor, 5 resistos and many cables

I have connected the RGB LED to digital pins.

The photoresistor is connected to analog pin A0.

The ultrasonic sensor is connected to digital pins 2 and 3.

The resistors are connected to every RGB pin.

The RGB LED changes the color depending on the light intensity or the distance from the ultrasonic sensor.

The project is controlled by the serial monitor in Arduino IDE.

Link to Youtube [here](https://youtu.be/C5rDWU4X4Ek)

## Homework 6: Bomberman Game :bomb:

### Materials used:
### 1 Arduino UNO, 1 USB cable, 2 Breadboards, 1 Matrix LED, 1 Joystick, 1 Buzzer, 1 Shift Register, 2 Capacitors, 1 10k Ohm Resistor and many cables

I have connected the joystick to analog pins A0, A1 and A2.

The Matrix Led is controled by the shift register.

The buzzer is connected to digital pin 5.

The capacitors are connected to the shift register.

The 10k Ohm resistor is connected to the shift register.

The project is a game where you have to plant bombs and destroy all the walls.

Game is over when you are hit by a bomb or you destroy all the walls.

Setup: [Photo](https://github.com/BetJohn/IntroductionToRobotics/blob/main/Homework6/Setup.jpg)

Link to Youtube [here](https://youtu.be/GfAONn3tBfs)


## Homework 7: Matrix game on 8x8 LED Matrix & LCD Display - Alpha phase :video_game: 


### Materials used:
### 1 Arduino UNO, 1 USB cable, 2 Breadboards, 1 Matrix LED, 1 Joystick, 1 Buzzer, 1 Shift Register, 2 Capacitors, 1 10k Ohm Resistor,Liquid Crystal Display and many cables

I have connected the joystick to analog pins A0, A1 and A2.

The Matrix Led is controled by the shift register.

The capacitors are connected to the shift register.

The 10k Ohm resistor is connected to the shift register.

The LCD Display is connected to digital pins 12, 11, 5, 4, 3, 2.

The project is a game where you have to clear the walls with bombs.

You can start the game by pressing the joystick button and navigate with the joystick.

Game is over when you are hit by a bomb or you destroy all the walls.

Setup: [Photo](https://github.com/BetJohn/IntroductionToRobotics/blob/main/Homework7/Setup.jpg)