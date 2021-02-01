

// Declare the pins for the Button and the LED
int buttonPin = 26;
int LED = 27;

#include <TFT_eSPI.h>       // Hardware-specific library

TFT_eSPI tft = TFT_eSPI();  // Invoke custom library

void setup(void) {
  Serial.begin(115200);
  tft.init();
  tft.invertDisplay(true);
  tft.setRotation(1);
  tft.fillScreen(TFT_BLACK);
 // Define pin #26 as input and activate the internal pull-up resistor
  pinMode(buttonPin, INPUT_PULLUP);
 // Define pin #27 as output, for the LED
  pinMode(LED, OUTPUT);
}

void loop() {

 
tft.fillScreen(TFT_BLACK);
tft.setTextSize(3);
tft.setCursor(0, 0);

// Read the value of the input. It can either be 1 or 0
int buttonValue = digitalRead(buttonPin);
  if (buttonValue == LOW){
      // If button pushed, turn LED on
  digitalWrite(LED, HIGH);   // turn the LED on (HIGH is the voltage level)
  tft.setCursor(0, 0);
  tft.setTextColor(TFT_RED, TFT_BLACK);
  tft.println("LED ON");
  delay(1000);                       // wait for a second
  digitalWrite(LED, LOW);    // turn the LED off by making the voltage LOW
  tft.setCursor(0, 0);
  tft.setTextColor(TFT_RED, TFT_BLACK);
  tft.println("LED OFF");
  delay(1000);                       // wait for a second
   } else {
      // Otherwise, turn the LED off
      digitalWrite(LED, LOW);
      tft.setTextColor(TFT_RED, TFT_BLACK);
      tft.println("OFF BLINK");
      delay(1000);
   }

}
