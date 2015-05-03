// Steve Lyons
// Day 2 

// LED connected to digital pin 13
int ledPin = 13;

// sets the digital pin as output
void setup()
{
  pinMode(ledPin, OUTPUT);
}

void loop()
{
  // set the LED on
  digitalWrite(ledPin, HIGH);
  
  // wait for a second
  delay(1000);
  
  // sets the LED off
  digitalWrite(ledPin, LOW);
  
  // wait for a second
  delay(1000);
}
