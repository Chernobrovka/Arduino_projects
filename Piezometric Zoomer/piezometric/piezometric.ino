#define PIEZO 3

int del = 500;

void setup(){
  pinMode( PIEZO, OUTPUT);
}

void loop(){
  analogWrite(PIEZO, 128);
  delay(del);
  digitalWrite( PIEZO, LOW);
  delay(del);
}
