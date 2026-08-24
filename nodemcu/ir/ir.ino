#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>
#include <LittleFS.h>

#define TAG(name, ...) "<" name ">" __VA_ARGS__ "</" name ">"
#define TAG_A(name, attrs, ...) \
    "<" name " " attrs ">" __VA_ARGS__ "</" name ">"

#define DIV_A(attrs, ...)  TAG_A("div", attrs, __VA_ARGS__)
#define SPAN_A(attrs, ...) TAG_A("span", attrs, __VA_ARGS__)
#define P_A(attrs, ...)    TAG_A("p", attrs, __VA_ARGS__)
#define A_A(attrs, ...)    TAG_A("a", attrs, __VA_ARGS__)
#define FORM_A(attrs, ...)    TAG_A("form", attrs, __VA_ARGS__)
#define INPUT_A(attrs, ...)    TAG_A("input", attrs, __VA_ARGS__)
#define BUTTON_A(attrs, ...)    TAG_A("button", attrs, __VA_ARGS__)

#define HTML(...)  TAG("html",  __VA_ARGS__)
#define HEAD(...)  TAG("head",  __VA_ARGS__)
#define TITLE(...) TAG("title", __VA_ARGS__)
#define BODY(...)  TAG("body",  __VA_ARGS__)


#define DIV(...)   TAG("div",   __VA_ARGS__)
#define SPAN(...)  TAG("span",  __VA_ARGS__)
#define P(...)     TAG("p",     __VA_ARGS__)

#define H1(...)    TAG("h1",    __VA_ARGS__)
#define H2(...)    TAG("h2",    __VA_ARGS__)
#define H3(...)    TAG("h3",    __VA_ARGS__)

#define UL(...)    TAG("ul",    __VA_ARGS__)
#define OL(...)    TAG("ol",    __VA_ARGS__)
#define LI(...)    TAG("li",    __VA_ARGS__)

#define A(...)     TAG("a",     __VA_ARGS__)
#define BUTTON(...) TAG("button", __VA_ARGS__)

#define CLASS(x) "class=\"" x "\""
#define ID(x)    "id=\"" x "\""
#define HREF(x)  "href=\"" x "\""
#define STYLE(x) "style=\"" x "\""

const char* ssid = "Magenta475780";
const char* password = "47efje498749";

ESP8266WebServer server(80);

void saveValue(const String& value) {
    File f = LittleFS.open("/config.txt", "w");

    if (!f) {
        Serial.println("Failed to open file");
        return;
    }

    f.print(value);
    f.close();
}

String loadValue() {
    File f = LittleFS.open("/config.txt", "r");

    if (!f) {
        return "";
    }

    String value = f.readString();
    f.close();

    return value;
}

void setup() {
    Serial.begin(115200);

    if (!LittleFS.begin()) {
      Serial.println("LittleFS mount failed!");
      return;
    }

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

    server.on("/", []() {
        server.send(
            200,
            "text/html",
            "<!doctype html>"
            HTML(HEAD(TITLE("Universal IR"))
                 BODY(
                      H1("Welcome to IR")
                      P("This page is served by an ESP8266")
                      FORM_A("action=\"save\"" "method=\"POST\"",
                             INPUT_A("name=\"value\"")
                             BUTTON_A("type=\"submit\"", "store"))

                      FORM_A("action=\"print\"" "method=\"POST\"",
                             BUTTON_A("type=\"submit\"", "Get value"))
                      )));
    });

    server.on("/save", HTTP_POST, []() {
        String value = server.arg("value");
        saveValue(value);
        server.send(200, "text/plain", "Saved: " + value);
    });

    server.on("/print", HTTP_POST, []() {
        String value = loadValue();
        server.send(200, "text/plain", "Stored: " + value);
    });

    server.begin();

    Serial.println("HTTP server started");

    Serial.println("Previously stored:");
    Serial.println(loadValue());
}

void loop() {
    server.handleClient();
}
