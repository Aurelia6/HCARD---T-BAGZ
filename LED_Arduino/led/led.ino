int photocellPin = 2; // (photocell) analog pin 2
int photocellVal = 0; // photocell variable
int minLight = 650;   // Threshold
int ledPin_1 = 9;
int ledPin_2 = 8;
int ledState = 0; 

void setup() {
  pinMode(ledPin_1, OUTPUT);
  pinMode(ledPin_2, OUTPUT); 
  Serial.begin(9600);
}

void loop() {
  // Serial Port 
  photocellVal = analogRead(photocellPin);
  Serial.println(photocellVal);   
  
  // LED
  if (photocellVal < minLight && ledState == 0) {
    digitalWrite(ledPin_1, HIGH); // turn on LED
    digitalWrite(ledPin_2, HIGH);
    ledState = 1;
  }
  
  // LED
  if (photocellVal > minLight && ledState == 1) {
    digitalWrite(ledPin_1, LOW); // turn off LED
    digitalWrite(ledPin_2, LOW);
    ledState = 0;
  }  
  
  delay(100);       
}