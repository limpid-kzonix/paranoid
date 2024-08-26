#include <Arduino.h>

// put function declarations here:
int myFunction(int, int);
#define LED_PIN PC13


void setup()
{
  // Initialize the digital pin LED_BUILTIN as an output.
  pinMode(LED_PIN, OUTPUT);
}


void loop()
{

  // Turn the LED on (HIGH is the voltage level)
  digitalWrite(LED_PIN, HIGH);
  delay(50); // Wait for a second

  digitalWrite(LED_PIN, LOW);
  delay(50); // Wait for a second
}