//This is my first LED on a bread board, where we have two pins (gnd and 3) going from the board into a simple circuit

#define led_pin 3
void setup() 
{
pinMode(led_pin, OUTPUT);
}

void loop() 
{
digitalWrite(led_pin, HIGH);
delay(1000);

digitalWrite(led_pin, LOW);
delay(1000);
}
