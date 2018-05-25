/*
 * PROJECT 1 - Hello World !
 */

 #include <Arduino.h>
 int LED = 3;  //MTduino LED pin D3
 
 
void setup() {
 Serial.begin(9600);
 pinMode(LED, OUTPUT);
 digitalWrite(LED,HIGH);
 Serial.print("Hello World!");
}

void loop() {
 delay(1000);
}
