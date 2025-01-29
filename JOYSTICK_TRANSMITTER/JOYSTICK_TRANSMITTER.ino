// dit is de code van youtube tutorial

///*Arduino JOYSTICK CONTROLLED CAR (TRANSMITTER)
         
//YOU HAVE TO INSTALL THE RF24 LIBRARY BEFORE UPLOADING THE CODE
//   https://github.com/tmrh20/RF24/      
//*/
//
#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>
RF24 radio(8,9); // CE, CSN
const byte address[6] = "00001";
char xyData[32] = "";
String xAxis, yAxis;
void setup() {
  Serial.begin(9600);
  radio.begin();
  
  if (!radio.isChipConnected()) {
  Serial.println("NRF24L01 not connected or faulty!");
  }else{
    Serial.println("NRF24L01 connected!");
  }
  radio.printDetails();
  radio.openWritingPipe(address);
  radio.setPALevel(RF24_PA_MIN);
  radio.stopListening();
}
void loop() {
  
  xAxis = analogRead(A1); // Read Joysticks X-axis
  yAxis = analogRead(A0); // Read Joysticks Y-axis
 //  X value
  xAxis.toCharArray(xyData, 5); // Put the String (X Value) into a character array
  radio.write(&xyData, sizeof(xyData)); // Send the array data (X value) to the other NRF24L01 modile
  // Y value
  yAxis.toCharArray(xyData, 5);
  radio.write(&xyData, sizeof(xyData));
  delay(20);
}

// dit is verbeter code van chat gpt 

//#include <SPI.h>
//#include <nRF24L01.h>
//#include <RF24.h>
//
//// NRF24L01 Pinout
//RF24 radio(8, 9); // CE, CSN
//
//// Adres van de communicatie
//const byte address[6] = "00001";
//
//// Structuur om joystick data te versturen
//struct DataPackage {
//  int xAxis;
//  int yAxis;
//};
//
//DataPackage data; // Structuurinstantie
//
//void setup() {
//  Serial.begin(9600);
//  radio.begin();
//  if (!radio.isChipConnected()) {
//  Serial.println("NRF24L01 not connected or faulty!");
//  }else{
//    Serial.println("NRF24L01 connected!");
//  }
//  radio.printDetails();
//
//  radio.openWritingPipe(address); // Open zenderadres
//  radio.setPALevel(RF24_PA_LOW);  // Vermogen instellen
//  radio.stopListening();          // Alleen zenden
//}
//
//void loop() {
//  // Joystick uitlezen
//  data.xAxis = analogRead(A1); // Lees de X-as
//  data.yAxis = analogRead(A0); // Lees de Y-as
//
//  // Debuggen via Serial Monitor
//  Serial.print("X: ");
//  Serial.print(data.xAxis);
//  Serial.print(" | Y: ");
//  Serial.println(data.yAxis);
//
//  // Gegevens verzenden
//  bool success = radio.write(&data, sizeof(data)); // Verzend de struct
//  if (success) {
//    Serial.println("Gegevens verzonden!");
//  } else {
//    Serial.println("Verzending mislukt!");
//  }
//
//  delay(50); // Kleine vertraging om overbelasting te voorkomen
//}
