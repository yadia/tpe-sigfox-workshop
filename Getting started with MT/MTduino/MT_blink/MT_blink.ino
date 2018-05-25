/*
 * PROJECT 2 - MTduino Blink
 * Created: 2018-04-13
 * Version 1.0
 * Author: Yadia Colindres .   Github: @yadia
 * 
 * Description:
 * Blink MTduin LED Light
 */

 #include <Arduino.h>
 int LED = 3;  //MTduino LED pin D3
 
 
void setup() {
 Serial.begin(9600);
 pinMode(LED, OUTPUT);
 Serial.println("Hello World!");
}

void loop() {
 digitalWrite(LED, HIGH);
 delay(2000);
 digitalWrite(LED, LOW);
 delay(1000);
}
