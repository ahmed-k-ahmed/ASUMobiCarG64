int led1 =4;
int led2 =5;
int led3 =6;
int led4 =7;

void setup(){
  pinMode (led1,output)
  pinMode (led2,output)
  pinMode (led3,output)
  pinMode (led4,output)
  
  
}
void loop()
{

  digitalWrite(led1, HIGH);   
  delay(1000);                  
  digitalWrite(led1, LOW);    
  delay(1000); 
  digitalWrite(led2, HIGH);   
  delay(1000);                  
  digitalWrite(led2, LOW);    
  delay(1000);   
digitalWrite(led3, HIGH);   
  delay(1000);                  
  digitalWrite(led3, LOW);    
  delay(1000);
  digitalWrite(led4, HIGH);   
  delay(1000);                  
  digitalWrite(led4, LOW);    
  delay(1000);  

}
