void get_time(){

    HTTPClient http;
    //setting dapatkan data waktu penyiraman dari webserver
//    String times ="http://192.168.1.11/Project/taniku/Api/TaniApi?code=";
//    String times ="http://mytani.iklimku.com/api/TaniApi?code=";
      String times ="http://172.20.10.3/Project/taniku/api/TaniApi?code=";
    //==================================
    times += (code); //Ganti dg ID Modul
    //==================================
    
    const char * mytimes = times.c_str();
    http.begin(mytimes); //Specify the URL
    int httpCode2 = http.GET();
    
//    Serial.println();
//    Serial.println("Data yang Diterima ");
//    Serial.println(mytimes); //data yang diterima
//    Serial.println();
    
    if (httpCode2 >0) { //Cek Balasan dari server
 
        payload2 = http.getString();
//        Serial.println(httpCode2); //Nilai respon dari server
//        Serial.println(payload2); //

        waktu = payload2.substring(0,5);
        interrupt = payload2.substring(6,7);
        Serial.print("Waktu Penyiraman :");
        Serial.print(waktu);
        Serial.print(" || ");
        Serial.print("Status interrupt (ON/OFF) :");
        Serial.print(interrupt);
        Serial.print(" ");
        
        
      }
 
    else {
      Serial.println("Error on HTTP request");
      Serial.println();
//      ESP.reset();
//      delay(1);
    }
    
    http.end(); //Free the resources
}
