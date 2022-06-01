void connect_s()
{
  delay(4000);
  WiFi.begin(ssid, password);
 
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Connecting to WiFi..");
  }
 
  Serial.println("Connected to the WiFi network");
  Serial.print("Connected to :");
  Serial.print(WiFi.localIP());
  Serial.println(ssid);
   
}
