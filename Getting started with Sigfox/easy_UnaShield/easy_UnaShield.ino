
#include <SoftwareSerial.h>

SoftwareSerial myUnaShield(5, 4); // RX, TX
int Stage = 0;
int readStage = -1;

void setup() {
  Serial.begin(9600);
  while (!Serial) {
  }
  Serial.println("UnaShield is Ready!");
  myUnaShield.begin(9600);
}

void loop() { // run over and over
  String ZoneNumber = "4";
  if (myUnaShield.available()) {
    while (myUnaShield.available())
      Serial.write(myUnaShield.read());
    Serial.println("");
  }
  delay(100);

  if (Serial.available()) {
    if (Serial.read() == 10)
      Stage++;
    delay(200);
  }

  if (readStage == Stage) 
  {}
  else{
    readStage = Stage;

    if (Stage == 0){
      Serial.println("Command: AT$SF=1234567890 to write data");
      myUnaShield.print("AT$SF=1234567890"); //AT
      myUnaShield.write(10); 
      delay(100);
      Stage++;
    }
  }
}


