#include "../.h/mian.h"

void led()
{
    String a="";
    while(Serial.available() > 0) 
    {  
      a += char(Serial.read());
      delay(2); 
    }

    if (a == "on") 
    {  
      digitalWrite(2, HIGH);  
      Serial.println("开");  
      Serial.print(a);  
      a = ""; 
    }  
    else if (a == "off") 
    {  
      digitalWrite(2, LOW);  
      Serial.println("关");  
      Serial.print(a);  
      a = ""; 
    }   
}