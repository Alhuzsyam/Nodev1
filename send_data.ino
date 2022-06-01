void sendt()
{
   if ((WiFi.status() == WL_CONNECTED)) { //Check the current connection status
 
    HTTPClient http;
//  Kirim data ke webserver
//    String data="http://mytani.iklimku.com/api/TaniApi/input?";
     String data="http://172.20.10.3/Project/taniku/api/TaniApi/input?"; 
    data += "id=";
    data += id;
    data += "&code=";
    data += code;
    data += "&s2=";
    data += content.substring(1,3);
    data += "&s1=";
    data += content.substring(7,9);
    data += "&s3=";
    data += content.substring(13, 15);

//    String data="http://192.168.1.11/Project/taniku/Api/TaniApi/input?id=20&code=19";
//    String data="http://www.kmjapan.asia/Taniku/api/TaniApi/input?id=20&code=19";
//    data += "&s2=";
//    data += content.substring(1,6);
//    data += "&s1=";
//    data += content.substring(7,9);
//    data += "&s3=";
//    data += content.substring(13, 15);

    const char * send = data.c_str();
    
    http.begin(send); //Specify the URL
    int httpCode = http.GET();                                        //Make the request
 
    if (httpCode > 0) { //Check for the returning code
 
        String payload = http.getString();
//        Serial.println(httpCode);
        Serial.print("Response :");
        Serial.print(payload);
        Serial.println("");
      }
 
    else {
      Serial.println("Error on HTTP request");
    }
 
    http.end(); //Free the resources
  }
  }
