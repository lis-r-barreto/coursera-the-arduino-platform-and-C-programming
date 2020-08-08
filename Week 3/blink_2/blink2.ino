int led = 13;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin led as an output.
  pinMode(led, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  
  for(int i=0;i<=5;i++)
  {
    digitalWrite(led, HIGH); // turn the LED on (HIGH is the voltage level)
    delay(500);  // wait for 0.5 second
    digitalWrite(led, LOW); // turn the LED off by making the voltage LOW
    delay(500); // wait for 0.5 second
  }
  
  for(int i=0;i<=5;i++)
  {
    digitalWrite(led, HIGH); // turn the LED on
    delay(2000); // wait for 2 seconds
    digitalWrite(led, LOW); // turn the LED off
    delay(2000); // wait for 2 seconds
  }
  
}