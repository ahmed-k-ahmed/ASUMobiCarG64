
void setup() {
  // initialize digital pins 4,5,6,7 as an output.
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop() {
  // Set pin 4 to hight for 500 msec then back to low
  digitalWrite(4, HIGH);   
  delay(500);                       
  digitalWrite(4, LOW);    

   // Set pin 5 to hight for 500 msec then back to low
  digitalWrite(5, HIGH);   
  delay(500);                       
  digitalWrite(5, LOW);    
 
    // Set pin 6 to hight for 500 msec then back to low
  digitalWrite(6, HIGH);   
  delay(500);                       
  digitalWrite(6, LOW);    
 
    // Set pin 7 to hight for 500 msec then back to low
  digitalWrite(7, HIGH);   
  delay(500);                       
  digitalWrite(7, LOW); 

    // Set pin 6 to hight for 500 msec then back to low
  digitalWrite(6, HIGH);   
  delay(500);                       
  digitalWrite(6, LOW);

    // Set pin 5 to hight for 500 msec then back to low
  digitalWrite(5, HIGH);   
  delay(500);                       
  digitalWrite(5, LOW); 
                     
}
