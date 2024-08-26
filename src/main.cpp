#include <Arduino.h>

// put function declarations here:
int myFunction(int, int);

void setup()
{
  // Initialize the digital pin LED_BUILTIN as an output.
  pinMode(PC13, OUTPUT);
}

void loop()
{

  delay(1000);
  // Turn the LED on (HIGH is the voltage level)
  digitalWrite(PC13, HIGH);
  delay(3000); // Wait for a second

  // Turn the LED off by making the voltage LOW
  digitalWrite(PC13, LOW);
  delay(1000); // Wait for a second

  // Turn the LED on (HIGH is the voltage level)
  digitalWrite(PC13, HIGH);
  delay(100); // Wait for a second

  // Turn the LED off by making the voltage LOW
  digitalWrite(PC13, LOW);
  delay(100); // Wait for a second

  // Turn the LED on (HIGH is the voltage level)
  digitalWrite(PC13, HIGH);
  delay(100); // Wait for a second

  // Turn the LED off by making the voltage LOW
  digitalWrite(PC13, LOW);
  delay(100); // Wait for a second

  // Turn the LED on (HIGH is the voltage level)
  digitalWrite(PC13, HIGH);
  delay(100); // Wait for a second

  // Turn the LED off by making the voltage LOW
  digitalWrite(PC13, LOW);
  delay(100); // Wait for a second
}

// put function definitions here:
int myFunction(int x, int y)
{
  return x + y;
}