#include <ESP8266WiFi.h>
#include <Adafruit_NeoPixel.h>
#include <time.h>
#include <math.h>

#define LED_PIN   D2
#define LED_COUNT 24

Adafruit_NeoPixel leds(LED_COUNT, LED_PIN, NEO_GRB + NEO_KHZ800);

const char* ssid = //"Magenta475780";
  "HideYoWi-Fi";
const char* password = //"47efje498749";
  "M@th3m@gicsTim3";

void setup() {

    Serial.begin(115200);

    WiFi.hostname("ir");
    WiFi.begin(ssid, password);

    Serial.print("Connecting");
    while (WiFi.status() != WL_CONNECTED) {
        delay(500);
        Serial.print(".");
    }

    Serial.println();
    Serial.println("Connected!");
    Serial.print("Open: http://");
    Serial.println(WiFi.localIP());
    configTime(
               "CET-1CEST,M3.5.0,M10.5.0/3",
               "pool.ntp.org"
               );

    while (time(nullptr) < 100000) {
      delay(100);
    }

    leds.begin();
    // Red: R, G, B
    leds.setBrightness(5);
    leds.show();

    Serial.printf("Flash chip size: %u bytes\n", ESP.getFlashChipSize());
    Serial.printf("Real flash size: %u bytes\n", ESP.getFlashChipRealSize());

}



float gaussian24(int i, int center) {
  int d = abs(i - center);
  d = min(d, 24 - d);  // circular distance

  const float sigma = 1.5;

  return exp(-(d * d) / (2.0 * sigma * sigma));
}

void gaussianLeds(int center, uint8_t r, uint8_t g, uint8_t b) {
    for (int i = 0; i < 24; i++) {
        float x = gaussian24(i, center);

        leds.setPixelColor(
            i,
            leds.Color(r * x, g * x, b * x)
        );
    }

    leds.show();
}

static int i = 0;
static int current_led_seconds = 0;
static int current_led_min = 0;
static int current_led_hour = 0;

void loop() {
  // server.handleClient();



  time_t now = time(nullptr);
  struct tm* t = localtime(&now);


  leds.setPixelColor(current_led_seconds, 0);
  leds.setPixelColor(current_led_min, 0);
  leds.setPixelColor(current_led_hour, 0);

  current_led_hour = (t->tm_hour % 12) * LED_COUNT / 12;
  current_led_min = t->tm_min * LED_COUNT / 60;
  current_led_seconds = t->tm_sec * LED_COUNT / 60;

  gaussianLeds(current_led_seconds, 230, 20, 203);

  leds.setPixelColor(current_led_hour,
                     leds.Color(0, 255, 0));
  leds.setPixelColor(current_led_min,
                     leds.Color(255, 0, 0));
  /* leds.setPixelColor(current_led_seconds, */
                     /* leds.Color(34, 20, 255)); */

  Serial.printf(
                "%02d:%02d:%02d\n",
                t->tm_hour,
                t->tm_min,
                t->tm_sec
                );

  leds.show();

  delay(100);

}
