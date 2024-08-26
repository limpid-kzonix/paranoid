#include <Arduino.h>

// put function declarations here:
int myFunction(int, int);
#define LED_PIN_1 A6
#define LED_PIN_2 A7


void setup()
{
  // Initialize the digital pin LED_BUILTIN as an output.
  pinMode(LED_PIN_1, OUTPUT);
  pinMode(LED_PIN_2, OUTPUT);
}


void loop()
{

  delay(1000);
  // Turn the LED on (HIGH is the voltage level)
  digitalWrite(LED_PIN_1, HIGH);
  delay(3000); // Wait for a second

  // Turn the LED off by making the voltage LOW
  digitalWrite(LED_PIN_1, LOW);
  delay(1000); // Wait for a second

  // Turn the LED on (HIGH is the voltage level)
  digitalWrite(LED_PIN_2, HIGH);
  delay(100); // Wait for a second

  // Turn the LED off by making the voltage LOW
  digitalWrite(LED_PIN_2, LOW);
  delay(100); // Wait for a second

  // Turn the LED on (HIGH is the voltage level)
  digitalWrite(LED_PIN_1, HIGH);
  delay(100); // Wait for a second

  // Turn the LED off by making the voltage LOW
  digitalWrite(LED_PIN_1, LOW);
  delay(100); // Wait for a second

  // Turn the LED on (HIGH is the voltage level)
  digitalWrite(LED_PIN_1, HIGH);
  delay(100); // Wait for a second

  // Turn the LED off by making the voltage LOW
  digitalWrite(LED_PIN_1, LOW);
  delay(100); // Wait for a secon
  // Turn the LED on (HIGH is the voltage level)
  digitalWrite(LED_PIN_1, HIGH);
  delay(100); // Wait for a second

  // Turn the LED off by making the voltage LOW
  digitalWrite(LED_PIN_1, LOW);
  delay(100); // Wait for a second

  // Turn the LED on (HIGH is the voltage level)
  digitalWrite(LED_PIN_1, HIGH);
  delay(100); // Wait for a second

  // Turn the LED off by making the voltage LOW
  digitalWrite(LED_PIN_1, LOW);
  delay(100); // Wait for a second
  // Turn the LED on (HIGH is the voltage level)
  digitalWrite(LED_PIN_1, HIGH);
  delay(100); // Wait for a second

  // Turn the LED off by making the voltage LOW
  digitalWrite(LED_PIN_1, LOW);
  delay(100); // Wait for a second

  // Turn the LED on (HIGH is the voltage level)
  digitalWrite(LED_PIN_1, HIGH);
  delay(100); // Wait for a second

  // Turn the LED off by making the voltage LOW
  digitalWrite(LED_PIN_1, LOW);
  delay(100); // Wait for a second
    // Turn the LED on (HIGH is the voltage level)
  digitalWrite(LED_PIN_1, HIGH);
  delay(100); // Wait for a second

  // Turn the LED off by making the voltage LOW
  digitalWrite(LED_PIN_1, LOW);
  delay(10); // Wait for a second

  // Turn the LED on (HIGH is the voltage level)
  digitalWrite(LED_PIN_1, HIGH);
  delay(10); // Wait for a second

  // Turn the LED off by making the voltage LOW
  digitalWrite(LED_PIN_1, LOW);
  delay(10); // Wait for a second
  // Turn the LED off by making the voltage LOW
  digitalWrite(LED_PIN_1, LOW);
  delay(10); // Wait for a second

  // Turn the LED on (HIGH is the voltage level)
  digitalWrite(LED_PIN_1, HIGH);
  delay(10); // Wait for a second

  // Turn the LED off by making the voltage LOW
  digitalWrite(LED_PIN_1, LOW);
  delay(10); // Wait for a second
  // Turn the LED off by making the voltage LOW
  digitalWrite(LED_PIN_1, LOW);
  delay(10); // Wait for a second

  // Turn the LED on (HIGH is the voltage level)
  digitalWrite(LED_PIN_1, HIGH);
  delay(10); // Wait for a second

  // Turn the LED off by making the voltage LOW
  digitalWrite(LED_PIN_1, LOW);
  delay(10); // Wait for a second
}

// put function definitions here:
int myFunction(int x, int y)
{
  return x + y;
}