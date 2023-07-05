#include <FastLED.h>
#include <Keypad.h>

#define LED_PIN 6
#define NUM_LEDS 30

#define COLOR_ORDER GRB
CRGB leds[NUM_LEDS];

const byte righe = 4;
const byte colonne = 4;

char keys[righe][colonne] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

byte colpin[colonne] = {9, 8, 7, 6};
byte rigpin[righe] = {13, 12, 11, 10};

Keypad keypad = Keypad(makeKeymap(keys), rigpin, colpin, righe, colonne);

void setLEDs1n() {
  // Spegni tutti i LED
  FastLED.clear();

  // Accendi i tre LED desiderati
  leds[19] = CRGB::Blue;
  leds[20] = CRGB::Blue;
  leds[21] = CRGB::Blue;
  leds[22] = CRGB::Blue;
  leds[23] = CRGB::Red;
  leds[24] = CRGB::Blue;
  leds[25] = CRGB::Blue;
  leds[26] = CRGB::Blue;
  leds[27] = CRGB::Blue;
  leds[28] = CRGB::Blue;
  leds[29] = CRGB::Blue;
  leds[30] = CRGB::Blue;
  FastLED.show();
}
void setLEDs2n() {
  // Spegni tutti i LED
  FastLED.clear();

  // Accendi i tre LED desiderati
  leds[1] = CRGB::Blue;
  leds[2] = CRGB::Blue;
  leds[3] = CRGB::Blue;
  leds[4] = CRGB::Blue;
  leds[5] = CRGB::Blue;
  leds[6] = CRGB::Blue;
  leds[13] = CRGB::Blue;
  leds[14] = CRGB::Blue;
  leds[15] = CRGB::Blue;
  leds[16] = CRGB::Blue;
  leds[17] = CRGB::Blue;
  leds[18] = CRGB::Blue;
  leds[19] = CRGB::Blue;
  leds[20] = CRGB::Blue;
  leds[21] = CRGB::Blue;
  leds[22] = CRGB::Blue;
  leds[23] = CRGB::Blue;
  leds[24] = CRGB::Blue;
  leds[31] = CRGB::Blue;
  leds[32] = CRGB::Blue;
  leds[33] = CRGB::Blue;
  leds[34] = CRGB::Blue;
  leds[35] = CRGB::Blue;
  leds[36] = CRGB::Blue;
  leds[37] = CRGB::Blue;
  leds[38] = CRGB::Blue;
  leds[39] = CRGB::Blue;
  leds[40] = CRGB::Blue;
  leds[41] = CRGB::Blue;
  leds[42] = CRGB::Blue;

  FastLED.show();
}
void setLEDs3n() {
  // Spegni tutti i LED
  FastLED.clear();

  // Accendi i tre LED desiderati
  leds[1] = CRGB::Blue;
  leds[2] = CRGB::Blue;
  leds[3] = CRGB::Blue;
  leds[4] = CRGB::Blue;
  leds[5] = CRGB::Blue;
  leds[6] = CRGB::Blue;
  leds[14] = CRGB::Blue;
  leds[15] = CRGB::Blue;
  leds[16] = CRGB::Blue;
  leds[17] = CRGB::Blue;
  leds[18] = CRGB::Blue;
  leds[19] = CRGB::Blue;
  leds[20] = CRGB::Blue;
  leds[21] = CRGB::Blue;
  leds[22] = CRGB::Blue;
  leds[23] = CRGB::Blue;
  leds[24] = CRGB::Blue;
  leds[25] = CRGB::Blue;
  leds[26] = CRGB::Blue;
  leds[27] = CRGB::Blue;
  leds[28] = CRGB::Blue;
  leds[29] = CRGB::Blue;
  leds[30] = CRGB::Blue;
  FastLED.show();
}
void setLEDs4n() {
  // Spegni tutti i LED
  FastLED.clear();

  // Accendi i tre LED desiderati
  leds[1] = CRGB::Blue;
  leds[2] = CRGB::Blue;
  leds[3] = CRGB::Blue;
  leds[4] = CRGB::Blue;
  leds[5] = CRGB::Blue;
  leds[6] = CRGB::Blue;
  leds[7] = CRGB::Blue;
  leds[8] = CRGB::Blue;
  leds[9] = CRGB::Blue;
  leds[10] = CRGB::Blue;
  leds[11] = CRGB::Blue;
  leds[12] = CRGB::Blue;
  leds[19] = CRGB::Blue;
  leds[20] = CRGB::Blue;
  leds[21] = CRGB::Blue;
  leds[22] = CRGB::Blue;
  leds[23] = CRGB::Blue;
  leds[24] = CRGB::Blue;
  leds[25] = CRGB::Blue;
  leds[26] = CRGB::Blue;
  leds[27] = CRGB::Blue;
  leds[28] = CRGB::Blue;
  leds[29] = CRGB::Blue;
  leds[30] = CRGB::Blue;
  leds[31] = CRGB::Blue;
  leds[32] = CRGB::Blue;
  leds[33] = CRGB::Blue;
  leds[34] = CRGB::Blue;
  leds[35] = CRGB::Blue;
  leds[36] = CRGB::Blue;
  leds[37] = CRGB::Blue;
  leds[38] = CRGB::Blue;
  leds[39] = CRGB::Blue;
  leds[40] = CRGB::Blue;
  leds[41] = CRGB::Blue;
  leds[42] = CRGB::Blue;
  FastLED.show();
}
void setLEDs5n() {
  // Spegni tutti i LED
  FastLED.clear();

  // Accendi i tre LED desiderati
  leds[1] = CRGB::Blue;
  leds[2] = CRGB::Blue;
  leds[3] = CRGB::Blue;
  leds[4] = CRGB::Blue;
  leds[5] = CRGB::Blue;
  leds[6] = CRGB::Blue;
  leds[7] = CRGB::Blue;
  leds[8] = CRGB::Blue;
  leds[9] = CRGB::Blue;
  leds[10] = CRGB::Blue;
  leds[11] = CRGB::Blue;
  leds[12] = CRGB::Blue;
  leds[13] = CRGB::Blue;
  leds[14] = CRGB::Blue;
  leds[15] = CRGB::Blue;
  leds[16] = CRGB::Blue;
  leds[17] = CRGB::Blue;
  leds[18] = CRGB::Blue;
  leds[25] = CRGB::Blue;
  leds[26] = CRGB::Blue;
  leds[27] = CRGB::Blue;
  leds[28] = CRGB::Blue;
  leds[29] = CRGB::Blue;
  leds[30] = CRGB::Blue;
  leds[31] = CRGB::Blue;
  leds[32] = CRGB::Blue;
  leds[33] = CRGB::Blue;
  leds[34] = CRGB::Blue;
  leds[35] = CRGB::Blue;
  leds[36] = CRGB::Blue;
  FastLED.show();
}
void setLEDs6n() {
  // Spegni tutti i LED
  FastLED.clear();

  // Accendi i tre LED desiderati
  leds[1] = CRGB::Blue;
  leds[2] = CRGB::Blue;
  leds[3] = CRGB::Blue;
  leds[4] = CRGB::Blue;
  leds[5] = CRGB::Blue;
  leds[6] = CRGB::Blue;
  leds[7] = CRGB::Blue;
  leds[8] = CRGB::Blue;
  leds[9] = CRGB::Blue;
  leds[10] = CRGB::Blue;
  leds[11] = CRGB::Blue;
  leds[12] = CRGB::Blue;
  leds[13] = CRGB::Blue;
  leds[14] = CRGB::Blue;
  leds[15] = CRGB::Blue;
  leds[16] = CRGB::Blue;
  leds[17] = CRGB::Blue;
  leds[18] = CRGB::Blue;
  leds[25] = CRGB::Blue;
  leds[26] = CRGB::Blue;
  leds[27] = CRGB::Blue;
  leds[28] = CRGB::Blue;
  leds[29] = CRGB::Blue;
  leds[30] = CRGB::Blue;
  leds[31] = CRGB::Blue;
  leds[32] = CRGB::Blue;
  leds[33] = CRGB::Blue;
  leds[34] = CRGB::Blue;
  leds[35] = CRGB::Blue;
  leds[36] = CRGB::Blue;
  leds[37] = CRGB::Blue;
  leds[38] = CRGB::Blue;
  leds[39] = CRGB::Blue;
  leds[40] = CRGB::Blue;
  leds[41] = CRGB::Blue;
  leds[42] = CRGB::Blue;
  FastLED.show();
}
void setLEDs7n() {
  // Spegni tutti i LED
  FastLED.clear();

  // Accendi i tre LED desiderati
  leds[1] = CRGB::Blue;
  leds[2] = CRGB::Blue;
  leds[3] = CRGB::Blue;
  leds[4] = CRGB::Blue;
  leds[5] = CRGB::Blue;
  leds[6] = CRGB::Blue;
  leds[13] = CRGB::Blue;
  leds[14] = CRGB::Blue;
  leds[15] = CRGB::Blue;
  leds[16] = CRGB::Blue;
  leds[17] = CRGB::Blue;
  leds[18] = CRGB::Blue;
  leds[19] = CRGB::Blue;
  leds[20] = CRGB::Blue;
  leds[21] = CRGB::Blue;
  leds[22] = CRGB::Blue;
  leds[23] = CRGB::Blue;
  leds[24] = CRGB::Blue;
  leds[25] = CRGB::Blue;
  leds[26] = CRGB::Blue;
  leds[27] = CRGB::Blue;
  leds[28] = CRGB::Blue;
  leds[29] = CRGB::Blue;
  leds[30] = CRGB::Blue;
  FastLED.show();
}
void setLEDs8n() {
  // Spegni tutti i LED
  FastLED.clear();

  // Accendi i tre LED desiderati
  leds[1] = CRGB::Blue;
  leds[2] = CRGB::Blue;
  leds[3] = CRGB::Blue;
  leds[4] = CRGB::Blue;
  leds[5] = CRGB::Blue;
  leds[6] = CRGB::Blue;
  leds[7] = CRGB::Blue;
  leds[8] = CRGB::Blue;
  leds[9] = CRGB::Blue;
  leds[10] = CRGB::Blue;
  leds[11] = CRGB::Blue;
  leds[12] = CRGB::Blue;
  leds[13] = CRGB::Blue;
  leds[14] = CRGB::Blue;
  leds[15] = CRGB::Blue;
  leds[16] = CRGB::Blue;
  leds[17] = CRGB::Blue;
  leds[18] = CRGB::Blue;
  leds[19] = CRGB::Blue;
  leds[20] = CRGB::Blue;
  leds[21] = CRGB::Blue;
  leds[22] = CRGB::Blue;
  leds[23] = CRGB::Blue;
  leds[24] = CRGB::Blue;
  leds[25] = CRGB::Red;
  leds[26] = CRGB::Blue;
  leds[27] = CRGB::Blue;
  leds[28] = CRGB::Blue;
  leds[29] = CRGB::Blue;
  leds[30] = CRGB::Blue;
  leds[31] = CRGB::Blue;
  leds[32] = CRGB::Blue;
  leds[33] = CRGB::Blue;
  leds[34] = CRGB::Blue;
  leds[35] = CRGB::Blue;
  leds[36] = CRGB::Blue;
  leds[37] = CRGB::Blue;
  leds[38] = CRGB::Blue;
  leds[39] = CRGB::Blue;
  leds[40] = CRGB::Blue;
  leds[41] = CRGB::Blue;
  leds[42] = CRGB::Blue;
  FastLED.show();
}
void setLEDs9n() {
  // Spegni tutti i LED
  FastLED.clear();

  // Accendi i tre LED desiderati
  leds[1] = CRGB::Blue;
  leds[2] = CRGB::Blue;
  leds[3] = CRGB::Blue;
  leds[4] = CRGB::Blue;
  leds[5] = CRGB::Blue;
  leds[6] = CRGB::Blue;
  leds[7] = CRGB::Blue;
  leds[8] = CRGB::Blue;
  leds[9] = CRGB::Blue;
  leds[10] = CRGB::Blue;
  leds[11] = CRGB::Blue;
  leds[12] = CRGB::Blue;
  leds[13] = CRGB::Blue;
  leds[14] = CRGB::Blue;
  leds[15] = CRGB::Blue;
  leds[16] = CRGB::Blue;
  leds[17] = CRGB::Blue;
  leds[18] = CRGB::Blue;
  leds[19] = CRGB::Blue;
  leds[20] = CRGB::Blue;
  leds[21] = CRGB::Blue;
  leds[22] = CRGB::Blue;
  leds[23] = CRGB::Blue;
  leds[24] = CRGB::Blue;
  leds[25] = CRGB::Blue;
  leds[26] = CRGB::Blue;
  leds[27] = CRGB::Blue;
  leds[28] = CRGB::Blue;
  leds[29] = CRGB::Blue;
  leds[30] = CRGB::Blue;
  FastLED.show();
}
void setLEDs0n() {
  // Spegni tutti i LED
  FastLED.clear();

  // Accendi i tre LED desiderati
  leds[1] = CRGB::Black;
  leds[2] = CRGB::Black;
  leds[3] = CRGB::Black;
  leds[4] = CRGB::Black;
  leds[5] = CRGB::Black;
  leds[6] = CRGB::Black;
  leds[7] = CRGB::Blue;
  leds[8] = CRGB::Blue;
  leds[9] = CRGB::Blue;
  leds[10] = CRGB::Blue;
  leds[11] = CRGB::Blue;
  leds[12] = CRGB::Blue;
  leds[13] = CRGB::Blue;
  leds[14] = CRGB::Blue;
  leds[15] = CRGB::Blue;
  leds[16] = CRGB::Blue;
  leds[17] = CRGB::Blue;
  leds[18] = CRGB::Blue;
  leds[19] = CRGB::Blue;
  leds[20] = CRGB::Blue;
  leds[21] = CRGB::Blue;
  leds[22] = CRGB::Blue;
  leds[23] = CRGB::Blue;
  leds[24] = CRGB::Blue;
  leds[25] = CRGB::Blue;
  leds[26] = CRGB::Blue;
  leds[27] = CRGB::Blue;
  leds[28] = CRGB::Blue;
  leds[29] = CRGB::Blue;
  leds[30] = CRGB::Blue;
  leds[31] = CRGB::Blue;
  leds[32] = CRGB::Blue;
  leds[33] = CRGB::Blue;
  leds[34] = CRGB::Blue;
  leds[35] = CRGB::Blue;
  leds[36] = CRGB::Blue;
  leds[37] = CRGB::Blue;
  leds[38] = CRGB::Blue;
  leds[39] = CRGB::Blue;
  leds[40] = CRGB::Blue;
  leds[41] = CRGB::Blue;
  leds[42] = CRGB::Blue;
  FastLED.show();
}


void setup() {
  FastLED.addLeds<WS2812, LED_PIN, COLOR_ORDER>(leds, NUM_LEDS);
  FastLED.setBrightness(50);
  FastLED.show();
}

void loop() {
  char key = keypad.getKey();

  if (key == '1') {
    setLEDs1n();  // Accendi tre LED
  }
  if (key == '2') {
    setLEDs2n();  // Accendi tre LED
  }
  if (key == '3') {
    setLEDs3n();  // Accendi tre LED
  }
  if (key == '4') {
    setLEDs4n();  // Accendi tre LED
  }
  if (key == '5') {
    setLEDs5n();  // Accendi tre LED
  }
  if (key == '6') {
    setLEDs6n();  // Accendi tre LED
  }
  if (key == '7') {
    setLEDs7n();  // Accendi tre LED
  }
  if (key == '8') {
    setLEDs8n();  // Accendi tre LED
  }
  if (key == '9') {
    setLEDs9n();  // Accendi tre LED
  }
  if (key == '0') {
    setLEDs0n();  // Accendi tre LED
  }
}

