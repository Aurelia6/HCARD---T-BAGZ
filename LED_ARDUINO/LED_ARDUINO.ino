// LAB8 - 讀取光敏電阻 (v2)

int photocellPin = 2; // 光敏電阻 (photocell) 接在 anallog pin 2
int photocellVal = 0; // photocell variable
int minLight = 200;   // 最小光線門檻值
int ledPin = 9;
int ledState = 0; 

void setup() {
  pinMode(ledPin, OUTPUT); 
  Serial.begin(9600);
}

void loop() {
  // 讀取光敏電阻並輸出到 Serial Port 
  photocellVal = analogRead(photocellPin);
  Serial.println(photocellVal);   
  
  // 光線不足時打開 LED
  if (photocellVal < minLight && ledState == 0) {
    digitalWrite(ledPin, HIGH); // turn on LED
    ledState = 1;
  }
  
  // 光線充足時關掉 LED
  if (photocellVal > minLight && ledState == 1) {
    digitalWrite(ledPin, LOW); // turn off LED
    ledState = 0;
  }  
  
  delay(100);       
}