// Arduino LED for HCARD 
int photocellPin = 2; // photoresistor is connected to anallog pin 2 (Input of the system)
int photocellVal = 0; // photocell variable
int minLight = 400;   // minimum intensity of light 
int ledPin = 9; //LED is connected to digital pin 9 (output of the system)
int ledState = 0; //initialize the state of LED

void setup() {
  pinMode(ledPin, OUTPUT); 
  //Serial.begin(9600);
  Serial.begin(115200);
}

void loop() {
  // Read the voltage across photoresistor (v2) and print it out through serial port
  photocellVal = analogRead(photocellPin);
  Serial.println(photocellVal);   
  
  // When the envirnment is dark, turn on the LED
  if (photocellVal < minLight && ledState == 0) {
    digitalWrite(ledPin, HIGH); // turn on the LED
    ledState = 1;
  }
  
  // When the environment is light, turn off the LED
  if (photocellVal > minLight && ledState == 1) {
    digitalWrite(ledPin, LOW); // turn off the LED
    ledState = 0;
  }  
  
  delay(100);       
}