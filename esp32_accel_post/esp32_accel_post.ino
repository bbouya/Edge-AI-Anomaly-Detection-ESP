#include <WiFi.h>
#include <Wire.h>
#include <HTTPClient.h>
#include <ArduinoJson.h>
#include <Adafruit_MSA301.h>
#include <Adafruit_Sensor.h>

// Set to 1 to output debug info to Serial, 0 otherwise
#define DEBUG 1

// WiFi credentials
const char ssid[] = "EsperNet";//"<SSID>";
const char password[] =  "EsperNetKey";//"<WIFI PASSWORD>";

// Server, file, and port
const char hostname[] = "192.168.1.200";
const String uri = "/";
const int port = 1337;

// Settings
const float collection_period = 1.0;   // How long to collect (sec)
const int sample_rate = 200;           // How fast to collect (Hz)
const int num_dec = 7;                 // Number of decimal places
const int num_samples = (int)(collection_period * sample_rate);
const unsigned long timeout = 500;     // Time to wait for server response

// Pins
const int led_pin = LED_BUILTIN;

// Expected JSON size. Use the following to calculate values:
// https://arduinojson.org/v6/assistant/
const size_t json_capacity = (3 * JSON_ARRAY_SIZE(num_samples)) + 
                            JSON_OBJECT_SIZE(3);


// Globals :
Adafruit_MSA301 msa;
WiFiClient client;

/*
Functions
*/

/*****************************/

// Blink a status code :

void blinkcode(int num_blinks, int ms){
    for(int i = 0; i < num_blinks; i++)
    digitalWrite(led_pin, HIGH);
    delay(ms);
    digitalWrite(led_pin, LOW);
    delay(ms);
}

// Send GET request to server to get 'ready' FLAG : 
int getServerReadyFlag(unsigned ling timeout){
    int ret_status = -1;
    unsigned long timestamp;

    // Make sure we are connected to WIFI : 
    if(WiFi.status() == WL_CONNECTED){
        
    }
}