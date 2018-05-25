/*
 * Read my input from serial monitor
 */
void setup() {
  Serial.begin(9600);
  while (! Serial); // Wait until Serial is ready -
  Serial.println("Enter a Number 0 to 9");
}

void loop() {
 if (Serial.available())
  {
    char ch = Serial.read();
    if (ch >= '0' && ch <= '9')
    {
      int myInput = ch;
      Serial.print("Your number is ");
      Serial.println(myInput);
    }
  }

}
