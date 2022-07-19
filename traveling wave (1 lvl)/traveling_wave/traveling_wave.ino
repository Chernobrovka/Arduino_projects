
//
//void setup(){
//  pinMode(2, OUTPUT);
//  pinMode(3, OUTPUT);
//  pinMode(4, OUTPUT);
//  pinMode(5, OUTPUT);
//  pinMode(6, OUTPUT);
//}
//
//void loop(){
//  digitalWrite(2, HIGH);
//  delay(500);
//  digitalWrite(2, LOW);
//  digitalWrite(3, HIGH);
//  delay(500);
//  digitalWrite(3, LOW);
//  digitalWrite(4, HIGH);
//  delay(500);
//  digitalWrite(4, LOW);
//  digitalWrite(5, HIGH);
//  delay(500);
//  digitalWrite(5, LOW);
//  digitalWrite(6, HIGH);
//  delay(500);
//  digitalWrite(6, LOW);
//  digitalWrite(5, HIGH);
//  delay(500);
//  digitalWrite(5, LOW);
//  digitalWrite(4, HIGH);
//  delay(500);
//  digitalWrite(4, LOW);
//  digitalWrite(3, HIGH);
//  delay(500);
//  digitalWrite(3, LOW);
//}

// METHOD with for cycle ( with ШИМ ) 

int d = 5;
void setup(){
  pinMode( 3, OUTPUT);
}

void loop(){
  for ( int a = 0; a < 256 ; a++){
    analogWrite(3, a);
    delay(d);
  }
  for ( int a = 255 ; a >= 0; a--){
    analogWrite(3, a);
    delay(d);
  }
  delay(200);
}
