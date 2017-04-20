// RGBW (Red Green Blue White Neo-Pixel starter code
// 16 LEDS  increment
// CW Coleman 170413
int clearColor();
int redColor();
int greenColor();
int blueColor();
#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
  #include <avr/power.h>
#endif

#define PIN 6

#define NUM_LEDS 16

#define BRIGHTNESS 50

Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUM_LEDS, PIN, NEO_GRBW + NEO_KHZ800);


void setup() {
  Serial.begin(115200);
  strip.setBrightness(BRIGHTNESS);
  strip.begin();
  strip.show(); // Initialize all pixels to 'off'
}

// Initialize some variables for the void loop()


void loop() {
  clearColor(); redColor();
  clearColor(); greenColor();
  clearColor(); blueColor();
  clearColor(); whiteColor();
}
int clearColor(){
  int red = 0, green= 0, blue = 0, white = 10;
int wait = 50;
int led = 0;
int i;
    for ( led = 0; led < 16; led++){  
    strip.setPixelColor(led, red, green , blue, white);
  }//end of for loop
    strip.show();
    delay(wait);
    red = red + 64;
    green = green + 0;
    blue = blue + 32;
    white = white + 4;

    if (red > 255) red = 0;
    if (green > 255) green = 0;
    if (blue > 255) blue = 0;
    if (white > 50) white = 0;
       
    if (red < 0) red = 255;
    if (green  < 0) green = 50;
    if (blue < 0) blue = 255;
    if (white  < 0 ) white = 50;
}

int redColor(){
  int red = 255, green= 0, blue = 255, white = 0;
int wait = 1000;
int led = 0;
int i;
    for ( led = 0; led < 16; led++){  
    strip.setPixelColor(led, red, green , blue, white);
  }//end of for loop
    strip.show();
    delay(wait);
    red = red + 64;
    green = green + 0;
    blue = blue + 32;
    white = white + 4;

    if (red > 255) red = 0;
    if (green > 255) green = 0;
    if (blue > 255) blue = 0;
    if (white > 50) white = 0;
       
    if (red < 0) red = 255;
    if (green  < 0) green = 50;
    if (blue < 0) blue = 255;
    if (white  < 0 ) white = 50;
}


int greenColor(){
  int red = 75, green= 0, blue = 75, white = 0;
int wait = 1000;
int led = 0;
int i;
    for ( led = 0; led < 16; led++){  
    strip.setPixelColor(led, red, green , blue, white);
  }//end of for loop
    strip.show();
    delay(wait);
    red = red + 64;
    green = green + 0;
    blue = blue + 32;
    white = white + 4;

    if (red > 255) red = 0;
    if (green > 255) green = 0;
    if (blue > 255) blue = 0;
    if (white > 50) white = 0;
       
    if (red < 0) red = 255;
    if (green  < 0) green = 50;
    if (blue < 0) blue = 255;
    if (white  < 0 ) white = 50;
}

int blueColor(){
  int red = 25, green= 0, blue = 25, white = 0;
int wait = 1000;
int led = 0;
int i;
    for ( led = 0; led < 16; led++){  
    strip.setPixelColor(led, red, green , blue, white);
  }//end of for loop
    strip.show();
    delay(wait);
    red = red + 64;
    green = green + 0;
    blue = blue + 32;
    white = white + 4;

    if (red > 255) red = 0;
    if (green > 255) green = 0;
    if (blue > 255) blue = 0;
    if (white > 50) white = 0;
       
    if (red < 0) red = 255;
    if (green  < 0) green = 50;
    if (blue < 0) blue = 255;
    if (white  < 0 ) white = 50;
}

int whiteColor(){
  int red = 75, green= 0, blue = 75, white = 0;
int wait = 1000;
int led = 0;
int i;
    for ( led = 0; led < 16; led++){  
    strip.setPixelColor(led, red, green , blue, white);
  }//end of for loop
    strip.show();
    delay(wait);
    red = red + 64;
    green = green + 0;
    blue = blue + 32;
    white = white + 4;

    if (red > 255) red = 0;
    if (green > 255) green = 0;
    if (blue > 255) blue = 0;
    if (white > 50) white = 0;
       
    if (red < 0) red = 255;
    if (green  < 0) green = 50;
    if (blue < 0) blue = 255;
    if (white  < 0 ) white = 50;
}
