void setup() {
  // initialize digital pin 7 as an output.
  pinMode(7, OUTPUT);
}

void loop() {
  //Periodic Time : 2 Seconds, Duty Cycle : 25%
  digitalWrite(7, HIGH);   
  delay(500);                      
  digitalWrite(7, LOW);   
  delay(1500);            
}
