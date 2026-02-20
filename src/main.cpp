#include <Arduino.h>
/**
 * @file main.cpp
 * @brief Embedded RGB LED Control (Digital + PWM)
 * @author TANMAY SINGHAL
 * @date 2026-02-17
 *
 * @details
 * Controls RGB LED using digital ON/OFF
 * and analog PWM brightness control.
 */

 // TODO 1:
 // Define RED pin (Use 9)
 int redPin = 9;

 // TODO 2:
 // Define GREEN pin (Use 10)
 int greenPin = 10;

 // TODO 3:
 // Define BLUE pin (Use 11)
 int bluePin = 11;

void setup() {

    // TODO 4:
    // Initialize Serial communication (9600 baud)
    Serial.begin(9600);

    // TODO 5:
    // Configure RGB pins as OUTPUT
    pinMode(redPin, OUTPUT);
    pinMode(greenPin, OUTPUT);
    pinMode(bluePin, OUTPUT);

    // TODO 6:
    // Print initialization message
    Serial.println("RGB LED Control System Started");
}

void loop() {

    // -------- DIGITAL MODE --------

    // TODO 7:
    // Turn ON red (digital HIGH)
    digitalWrite(redPin, HIGH);
    delay(1000);

    // TODO 8:
    // Turn OFF red
    digitalWrite(redPin, LOW);
    delay(1000);

    // -------- ANALOG (PWM) MODE --------

    // TODO 9:
    // Set RED brightness using analogWrite()
    analogWrite(redPin, 255);   // Full brightness

    // TODO 10:
    // Set GREEN brightness using analogWrite()
    analogWrite(greenPin, 100); // Medium brightness

    // TODO 11:
    // Set BLUE brightness using analogWrite()
    analogWrite(bluePin, 50);   // Low brightness

    // TODO 12:
    // Add delay for visible transition
    delay(2000);
}
