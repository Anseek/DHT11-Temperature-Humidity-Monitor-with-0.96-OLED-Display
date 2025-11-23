#include <Adafruit_Sensor.h>
#include <DHT.h>
#include <DHT_U.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64


Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);


#define DHTPIN 2        // Signal pin connected to D2
#define DHTTYPE DHT11   
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);

  
  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) { 
    Serial.println(F("SSD1306 Allocation Failed"));
    for (;;);
  }

  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);

 
  dht.begin();
  
  delay(2000);  
}

void loop() {
  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();  

  
  if (isnan(humidity) || isnan(temperature)) {
    Serial.println("Failed to read from DHT11!");
    display.clearDisplay();
    display.setCursor(0, 0);
    display.println("Error reading");
    display.println("from DHT11!");
    display.display();
    delay(1000);
    return;
  }

 
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.print(" C   Humidity: ");
  Serial.print(humidity);
  Serial.println(" %");

  
  display.clearDisplay();
  
  display.setTextSize(2);
  display.setCursor(0, 0);
  display.print("Temp:");
  display.print(temperature);
  display.println("C");

  display.setCursor(0, 32);
  display.print("Humi:");
  display.print(humidity);
  display.println("%");

  display.display();

  delay(1000);
}
