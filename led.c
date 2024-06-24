/*
    Project name : ESP32 LED
    Modified Date: 24-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/esp32-led
*/

// Pin connected to the LED
const int ledPin = 2; // GPIO 2 on ESP32

void setup() 
{
  pinMode(ledPin, OUTPUT); // Initialize the LED pin as an output
}

void loop() 
{
  digitalWrite(ledPin, HIGH); // Turn on the LED
  delay(1000); // Wait for 1 second

}
