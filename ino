int rfPin = 10;

void setup() {
  delay(1000);
  pinMode(rfPin, OUTPUT);
  rfsend();
  delay(250);
  rfsend();
  delay(250);
  rfsend();
}

void preamble(){
  for(int i = 0; i <25; i++){
    digitalWrite(rfPin,HIGH);
    delayMicroseconds(240);
    digitalWrite(rfPin,LOW);
    delayMicroseconds(266);
  }
}
  
void high(){
  digitalWrite(rfPin,HIGH);
  delayMicroseconds(880);
  digitalWrite(rfPin,LOW);
  delayMicroseconds(290);
  }

void low(){
  digitalWrite(rfPin,HIGH);
  delayMicroseconds(240);
  digitalWrite(rfPin,LOW);
  delayMicroseconds(900);
  }

void rfsend() {
  delay(12);
  preamble();
  for(int i = 0; i <3; i++){
    delay(10);
    high();
    high();
    low();
    low();
    low();
    low();
    high();
    high();
    high();
    low();
    low();
    high();
    high();
    high();
    high();
    low();
    }
  }
  

void loop() {
}
