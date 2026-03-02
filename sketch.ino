#include <WiFi.h>
#include <DHT.h>
#include <HTTPClient.h>

#define DHTPIN 15      
#define DHTTYPE DHT22

DHT dht(DHTPIN, DHTTYPE);

const char* ssid = "Wokwi-GUEST";   
const char* password = "";         

String apiKey = "X5GMMEDQ9S9T3LC7";   
const char* server = "http://api.thingspeak.com/update";

void setup() {
  Serial.begin(115200);
  dht.begin();
  
  Serial.println("Connecting to WiFi...");
  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("\nWiFi Connected!");
}

void loop() {
  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature(); 

  if (isnan(humidity) || isnan(temperature)) {
    Serial.println("Failed to read DHT22!");
    return;
  }

  Serial.print("Temp: ");
  Serial.print(temperature);
  Serial.print("°C   Humidity: ");
  Serial.println(humidity);

  if (WiFi.status() == WL_CONNECTED) {
    HTTPClient http;

    String url = server;
    url += "?api_key=" + apiKey;
    url += "&field1=" + String(temperature);
    url += "&field2=" + String(humidity);

    http.begin(url);
    int httpCode = http.GET();
    
    if (httpCode > 0) {
      Serial.print("Data sent! Response code: ");
      Serial.println(httpCode);
    } else {
      Serial.print("Error sending data: ");
      Serial.println(httpCode);
    }

    http.end();
  }

  delay(20000);
} 
