/*
 * Arduino Push button
 */
int ledPin = 13; // choose the pin for the LED (13 is built in LED)
int inPin = 7;   // choose the input pin (for a pushbutton)
int val = 0;     // variable for reading the pin status

void setup() {
  Serial.begin(9600); //begin serial
  pinMode(ledPin, OUTPUT);  // declare LED as output
  pinMode(inPin, INPUT);    // declare pushbutton as input
}

void loop(){
  val = digitalRead(inPin);  // read input value
  if (val == HIGH) {         // check if the input is HIGH (button released)
    digitalWrite(ledPin, LOW);  // turn LED OFF
    Serial.println("Button pressed!");
  } else {
    digitalWrite(ledPin, HIGH);  // turn LED ON
    Serial.println("Button released!");
  }
}
