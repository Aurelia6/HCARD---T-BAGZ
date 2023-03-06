// /*********
//   Rui Santos
//   Complete project details at https://RandomNerdTutorials.com/vs-code-platformio-ide-esp32-esp8266-arduino/
// *********/

// #include <Arduino.h>

// #define LED 1

// void setup() {
//   // put your setup code here, to run once:
//   Serial.begin(115200);
//   pinMode(LED, OUTPUT);
// }

// void loop() {
//   // put your main code here, to run repeatedly:
//   digitalWrite(LED, HIGH);
//   Serial.println("LED is on");
//   delay(1000);
//   digitalWrite(LED, LOW);
//   Serial.println("LED is off");
//   delay(1000);
// }


//LED BUILT_IN is GPIO 33 
void setup() {
  pinMode(33, OUTPUT); // Set the pin as output
}

// Remember that the pin work with inverted logic
// LOW to Turn on and HIGH to turn off
void loop() {
  digitalWrite(33, LOW); //Turn on
  delay (1000); //Wait 1 sec
  digitalWrite(33, HIGH); //Turn off
  delay (1000); //Wait 1 sec
}