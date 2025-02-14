#include <Servo.h>

Servo servoMotor;

void setup() {
  // Initialize serial communication
  Serial.begin(9600);
  
  // Attach servo to pin 9
  servoMotor.attach(9);

}

void loop() {
  // Check if data is available to read from serial port
  if (Serial.available() > 0) {
    // Read the incoming byte
    char receivedChar = Serial.read();
    
    // Move servo based on received signal
    if (receivedChar == '1') {  // Move right for apple
       servoMotor.writeMicroseconds(1000);  // set servo to mid-point
    } else if (receivedChar == '2') {  // Move left for banana
       servoMotor.writeMicroseconds(2000);  // set servo to mid-point
    }
  }
}
