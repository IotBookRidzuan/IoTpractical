

#include <TFT_eSPI.h>       // Hardware-specific library

TFT_eSPI tft = TFT_eSPI();  // Invoke custom library

void setup(void) {
  Serial.begin(115200);
  tft.init();
  tft.invertDisplay(true);
  tft.setRotation(1);
  tft.fillScreen(TFT_BLACK);

}

void loop() {

 
tft.fillScreen(TFT_BLACK);
tft.setTextSize(2);
tft.setCursor(0, 0);
tft.setTextColor(TFT_RED, TFT_BLACK);
tft.println("HELLO MALAYSIA");
delay(5000);

}
