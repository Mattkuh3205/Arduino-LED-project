//simple SOS blink, timing probably needs to be adjusted, but it does blink proper code
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}


//SOS
// the loop function runs over and over again forever
void loop() {

  //3 short
  digitalWrite(LED_BUILTIN, HIGH); 
  delay(500);                    
  digitalWrite(LED_BUILTIN, LOW);   
  delay(500);                    

  digitalWrite(LED_BUILTIN, HIGH);  
  delay(500);                    
  digitalWrite(LED_BUILTIN, LOW); 
  delay(500); 

  digitalWrite(LED_BUILTIN, HIGH); 
  delay(500);                     
  digitalWrite(LED_BUILTIN, LOW);   
  delay(1000); 

  //3 long
  digitalWrite(LED_BUILTIN, HIGH);  
  delay(1000);                   
  digitalWrite(LED_BUILTIN, LOW);   
  delay(1000);                     

 digitalWrite(LED_BUILTIN, HIGH);  
  delay(1000);                    
  digitalWrite(LED_BUILTIN, LOW);  
  delay(1000); 

   digitalWrite(LED_BUILTIN, HIGH);  
  delay(1000);                   
  digitalWrite(LED_BUILTIN, LOW);   
  delay(2000); 

   digitalWrite(LED_BUILTIN, HIGH); 
  delay(500);                    
  digitalWrite(LED_BUILTIN, LOW);   
  delay(500);                    

  digitalWrite(LED_BUILTIN, HIGH);  
  delay(500);                    
  digitalWrite(LED_BUILTIN, LOW); 
  delay(500); 

  digitalWrite(LED_BUILTIN, HIGH); 
  delay(500);                     
  digitalWrite(LED_BUILTIN, LOW);   
  delay(1000); 
}
