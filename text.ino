void testdrawstyles(void) {
//  display.clearDisplay();

  display.setTextSize(1);             // Normal 1:1 pixel scale
  display.setTextColor(WHITE);        // Draw white text
  display.setCursor(0,24);             // Start at top-left corner
  display.println(F("Temp :"));
  display.setCursor(35,24);
  display.println(content.substring(7,9));
  display.setCursor(0,35);             // Start at top-left corner
  display.println(F("Humidity :"));
  display.setCursor(52,35);             // Start at top-left corner
  display.println(content.substring(1,6));
   display.setCursor(0,45);             // Start at top-left corner
  display.println(F("Time :"));
  display.setCursor(34,45);             // Start at top-left corner
  display.println(waktus);
  display.setCursor(0,55);   
  display.println(F("Schdule :"));
  display.setCursor(52,55);             // Start at top-left corner
  display.println(waktu);
  display.display();
//  delay(2000);
}
