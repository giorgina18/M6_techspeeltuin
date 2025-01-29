//// Motor 1 (L298N 1)
//int motor1pin1 = 2;  // IN1 - Motor 1 richting
//int motor1pin2 = 3;  // IN2 - Motor 1 tegenovergestelde richting
//int motor1en = 8;    // ENA - PWM pin voor motor 1 snelheid
//
//// Motor 2 (L298N 1)
//int motor2pin1 = 4;  // IN3 - Motor 2 richting
//int motor2pin2 = 5;  // IN4 - Motor 2 tegenovergestelde richting
//int motor2en = 9;    // ENB - PWM pin voor motor 2 snelheid
//
//// Motor 3 (L298N 2)
//int motor3pin1 = 6;  // IN5 - Motor 3 richting
//int motor3pin2 = 7;  // IN6 - Motor 3 tegenovergestelde richting
//int motor3en = 10;   // ENC - PWM pin voor motor 3 snelheid
//
//// Motor 4 (L298N 2)
//int motor4pin1 = 11; // IN7 - Motor 4 richting
//int motor4pin2 = 12; // IN8 - Motor 4 tegenovergestelde richting
//int motor4en = 13;   // END - PWM pin voor motor 4 snelheid
//
//void setup() {
//  // Stel de motorpinnen in als uitvoer
//  pinMode(motor1pin1, OUTPUT);
//  pinMode(motor1pin2, OUTPUT);
//  pinMode(motor1en, OUTPUT);
//
//  pinMode(motor2pin1, OUTPUT);
//  pinMode(motor2pin2, OUTPUT);
//  pinMode(motor2en, OUTPUT);
//
//  pinMode(motor3pin1, OUTPUT);
//  pinMode(motor3pin2, OUTPUT);
//  pinMode(motor3en, OUTPUT);
//
//  pinMode(motor4pin1, OUTPUT);
//  pinMode(motor4pin2, OUTPUT);
//  pinMode(motor4en, OUTPUT);
//}
//
//void loop() {
//  // Motoren vooruit
//  digitalWrite(motor1pin1, HIGH);    // Draai motor 1 vooruit
//  digitalWrite(motor1pin2, LOW);
//  analogWrite(motor1en, 150);         // Stel de snelheid van motor 1 in
//
//  digitalWrite(motor2pin1, HIGH);    // Draai motor 2 vooruit
//  digitalWrite(motor2pin2, LOW);
//  analogWrite(motor2en, 150);         // Stel de snelheid van motor 2 in
//
//  digitalWrite(motor3pin1, HIGH);    // Draai motor 3 vooruit
//  digitalWrite(motor3pin2, LOW);
//  analogWrite(motor3en, 150);         // Stel de snelheid van motor 3 in
//
//  digitalWrite(motor4pin1, HIGH);    // Draai motor 4 vooruit
//  digitalWrite(motor4pin2, LOW);
//  analogWrite(motor4en, 150);         // Stel de snelheid van motor 4 in
//
//  delay(2000); // Laat de motoren 2 seconden draaien
//
//  // Stop alle motoren
//  analogWrite(motor1en, 0);
//  analogWrite(motor2en, 0);
//  analogWrite(motor3en, 0);
//  analogWrite(motor4en, 0);
//
//  delay(1000); // Pauze
//}


// Motor 1 (L298N 1)
int motor1pin1 = 3;  // IN1 - Motor 1 richting
int motor1pin2 = 4;  // IN2 - Motor 1 tegenovergestelde richting
int motor1en = 2;    // ENA - PWM pin voor motor 1 snelheid

// Motor 2 (L298N 1)
int motor2pin1 = 5;  // IN3 - Motor 2 richting
int motor2pin2 = 6;  // IN4 - Motor 2 tegenovergestelde richting
int motor2en = 7;    // ENB - PWM pin voor motor 2 snelheid

void setup() {
  // Stel de motorpinnen in als uitvoer
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(2, OUTPUT);

  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop() {
  // Start alle motoren vooruit
  digitalWrite(3, HIGH);    // Motor 1 & 2 vooruit
  digitalWrite(4, LOW);
  analogWrite(2, 150);         // Stel snelheid motor 1

  digitalWrite(5, HIGH);    // Motor 3 & 4 vooruit
  digitalWrite(6, LOW);
  analogWrite(7, 150);         // Stel snelheid motor 2

    // Alle motoren achteruit
 /* digitalWrite(motor1pin1, LOW);
  digitalWrite(motor1pin2, HIGH);
  digitalWrite(motor2pin1, LOW);
  digitalWrite(motor2pin2, HIGH);
  digitalWrite(motor3pin1, LOW);
  digitalWrite(motor3pin2, HIGH);
  digitalWrite(motor4pin1, LOW);
  digitalWrite(motor4pin2, HIGH);
*/
  delay(1000);
}
