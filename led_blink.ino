int ledPin=5;
void setup() {
 Serial.begin(9600);
 pinMode(ledPin,OUTPUT);

}

void loop() {
  
  digitalWrite(ledPin,HIGH);
  delay (5000);
  digitalWrite(ledPin, LOW);
  delay(3000);
}