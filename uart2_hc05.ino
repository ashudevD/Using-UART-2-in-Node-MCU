/*
 * the sketch shows how to use UART 2 in
 * node mcu, bluetooth module is connected 
 * to the UART 2 of the node mcu
 */

void setup() {
  
  // put your setup code here, to run once:
  Serial.begin(9600);
  delay(100);
  Serial.println("");
  Serial.println("just wait");
  delay(6000);
  Serial.println("lets begin just swap it");
  delay(100);
  Serial.swap();
  while (Serial.available() == 0){
    
  }
  String data = Serial.readString(); // \ here
  Serial.swap();
  Serial.println("here is the data");
  Serial.println(data);

}

void loop() {
  // put your main code here, to run repeatedly:

}
