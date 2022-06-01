void setup_lcd(){
  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("SSD1306 allocation failed"));
    for(;;);
  }
  delay(2000); // Pause for 2 seconds
 
  // Clear the buffer.
  display.clearDisplay();
  
  // Draw bitmap on the screen
  display.drawBitmap(0, 0, image_data_Saraarray, 128, 64, 1);
  display.display();
  delay(2000); // Pause for 2 seconds
  display.clearDisplay();
  // Changing Font Size
display.clearDisplay();
display.setTextColor(WHITE);
display.setCursor(0,24);
display.setTextSize(2);
display.println("WELCOME!");
display.display();
delay(100);
display.display();
  }
