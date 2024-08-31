/*On Off unison
    Same principles as the basic on and off, but both LED's blink in unison
*/

#define LED1 12
#define LED2 11
#define LED3 10
#define LED4 9
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);


}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED1, HIGH);  
  delay(100);                     
  digitalWrite(LED1, LOW);  
    delay(100);                     


  digitalWrite(LED2,  HIGH);
   delay(100);                     
  digitalWrite(LED2, LOW);  
  delay(100);                     
                   


  digitalWrite(LED3,  HIGH);
   delay(100);                     
  digitalWrite(LED3, LOW);  
    delay(100);                     


  digitalWrite(LED4,  HIGH);
 delay(100);                     
  digitalWrite(LED4, LOW);  
    delay(400);                     


       digitalWrite(LED3,  HIGH);
   delay(100);                     
  digitalWrite(LED3, LOW);  
    delay(100);                     

  digitalWrite(LED2,  HIGH);
   delay(100);                     
  digitalWrite(LED2, LOW);  
  delay(100);   
       
       digitalWrite(LED1, HIGH);  
  delay(100);                     
  digitalWrite(LED1, LOW);  
    delay(400);  
           
}
