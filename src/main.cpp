#include "../.h/mian.h"
  
void setup()
 {  
  pinMode(2, OUTPUT);  
  Serial.begin(9600);  
  digitalWrite(2, HIGH);  
  Serial.println("hello");  
}  
  
void loop() {  
  while (true) 
  {  
    led();
  }  
}
