
#include "Adafruit_NeoPixel.h"
#define LED_COUNT 12
#define LED_PIN 12
Adafruit_NeoPixel strip = Adafruit_NeoPixel(LED_COUNT, LED_PIN, NEO_RGB + NEO_KHZ800);
void setup()
{
  strip.begin();
}

void loop(){
  for(int i = 0; i< LED_COUNT; i++){
    strip.setPixelColor(i, strip.Color(255, 0, 0)); //red
  }
  strip.show();
  delay(1000);
  //.....................................................
  for(int i = 0; i< LED_COUNT; i++){
    strip.setPixelColor(i, strip.Color(0, 255, 0)); //green
  }
  strip.show();
  delay(1000);
  //.....................................................
   for(int i = 0; i< LED_COUNT; i++){
    strip.setPixelColor(i, strip.Color(0, 0, 255)); //blue
  }
  strip.show();
  delay(1000); 
  //.....................................................
   for(int i = 0; i< LED_COUNT; i++){
    strip.setPixelColor(i, strip.Color(70, 50, 120)); //grey
  }
  strip.show();
  delay(1000); 
  //....................................................
    for(int i = 0; i< LED_COUNT; i++){
    strip.setPixelColor(i, strip.Color(255, 255, 255)); //white
  }
  strip.show();
  delay(1000); 
    
}
