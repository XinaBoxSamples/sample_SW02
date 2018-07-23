void main_code(void) {
  
  OD01.set2X();
  OD01.print(bme.gas_resistance / 1000.0);
  OD01.println("KOhms");
  
  OD01.set1X();
  OD01.println("               Gas");
  OD01.println("Breathe on the sensor");
  OD01.println("to increase CO2");
  
  
  OD01.print("Temp     = ");
  OD01.print(bme.temperature);
  OD01.println(" *C");
  
  OD01.print("Pressure = "); 
  OD01.print(bme.pressure / 100.0);
  OD01.println(" hPa");
  
  OD01.print("Humidity = ");
  OD01.print(bme.humidity);
  OD01.print(" %");
}

