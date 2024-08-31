/* On off

  By defining separate pins from the GPIO, the user is able to blink 2 separate LEDs
  Note, that a ground should be connected normally to the first LED, then a second jumper next to the ground goes to the next LED
  

*/
#define LED_PIN 12
#define LED 11
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_PIN, OUTPUT);
    pinMode(LED, OUTPUT);

}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_PIN, HIGH);  
  delay(1000);                     
  digitalWrite(LED_PIN, LOW);
  delay(1000);                      

  digitalWrite(LED,  HIGH);
  delay(1000);                     

  digitalWrite(LED, LOW); 
         delay(1000);                     
           
}
