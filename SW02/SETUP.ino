void setup_program(void) {
  // Set the I2C Pins for CW01
#ifdef ESP8266
 Wire.pins(2, 14);
 Wire.setClockStretchLimit(15000);
 Wire.begin();
#else
 // Start the I2C Comunication
 Wire.begin();
#endif
  // disable wifi
  WiFi.forceSleepBegin();

  // set and start i2c bus
  Wire.begin(2, 14);

  // start sensor

  bme.begin(BME680_DEFAULT_ADDRESS);
  bme.setTemperatureOversampling(BME680_OS_8X);
  bme.setHumidityOversampling(BME680_OS_2X);
  bme.setPressureOversampling(BME680_OS_4X);
  bme.setIIRFilterSize(BME680_FILTER_SIZE_3);
  bme.setGasHeater(320, 150);


  // start oled
  OLED.begin();

  // clear oled
  OD01.clear();

  // set output leds
  pinMode(CW01_RED, OUTPUT);
  pinMode(CW01_GREEN, OUTPUT);
  pinMode(CW01_BLUE, OUTPUT);

  // turn rgb on
  digitalWrite(CW01_RED, HIGH);
  digitalWrite(CW01_GREEN, HIGH);
  digitalWrite(CW01_BLUE, HIGH);

  delay(2000);

  // turn rgb off
  digitalWrite(CW01_RED, LOW);
  digitalWrite(CW01_GREEN, LOW);
  digitalWrite(CW01_BLUE, LOW);

  delay(1000);
  t.tick_main = millis();
  t.tick_poll = millis();
}

