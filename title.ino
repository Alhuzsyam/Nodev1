void titles(void) {
//  display.clearDisplay();

  display.setTextSize(2); // Draw 2X-scale text
  display.setTextColor(WHITE);
  display.setCursor(30, 0);
  display.println(F("TaniKu"));
  display.display();      // Show initial text
//  delay(100);

//  // Scroll in various directions, pausing in-between:
//  display.startscrollright(0x00, 0x0F);
//  delay(1000);
//  display.stopscroll();
//  delay(1000);
//  display.startscrollleft(0x00, 0x0F);
//  delay(1000);
//  display.stopscroll();
//  delay(1000);
//  display.startscrolldiagright(0x00, 0x07);
//  delay(1000);
//  display.startscrolldiagleft(0x00, 0x07);
//  delay(1000);
//  display.stopscroll();
//  delay(1000);
}
