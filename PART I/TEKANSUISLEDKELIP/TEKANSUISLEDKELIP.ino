// Declare the pins for the Button and the LED
int buttonPin = 26;
int LED = 27;

void setup() {
   // Define pin #26 as input and activate the internal pull-up resistor
   pinMode(buttonPin, INPUT_PULLUP);
   // Define pin #27 as output, for the LED
   pinMode(LED, OUTPUT);
}

void loop(){
   // Read the value of the input. It can either be 1 or 0
   int buttonValue = digitalRead(buttonPin);
   if (buttonValue == LOW){
      // If button pushed, turn LED on
  digitalWrite(LED, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(LED, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
   } else {
      // Otherwise, turn the LED off
      digitalWrite(LED, LOW);
   }
}
