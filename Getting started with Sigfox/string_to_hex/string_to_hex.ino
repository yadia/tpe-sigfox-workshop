/*
 * Read Input  to String to Hex
 * TO DO: Not Finished
 */

char rx_byte = 0;
String rx_str = "";
int inputInt = 0;
int hexInt = "";

void setup() {
  Serial.begin(9600);  //begin serial
  Serial.println("Enter a number");  // Serial monitor prints this
}

void loop() {
 if (Serial.available() > 0) {    // is a character available?
    rx_byte = Serial.read();       // get the character from serial
    
    if (rx_byte != '\n') {  // \n searches for the end of the character line
      // a character of the string was received
      rx_str += rx_byte;
    }else {
      // end of string
      Serial.print("Welcome ");
      Serial.println(rx_str);
      Serial.println("Your number in HEX is:");
      inputInt = rx_str.toInt();
      hexInt = String(inputIn, HEX);
      Serial.println(hexInt);
     
    }
  } // end: if (Serial.available() > 0)

}
