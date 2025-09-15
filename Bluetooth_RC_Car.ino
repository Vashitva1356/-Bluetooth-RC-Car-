// Pin definitions
#define IN1  13         // Motor driver pin IN1 connected to pin 13
#define IN2  12         // Motor driver pin IN2 connected to pin 12
#define IN3  11         // Motor driver pin IN3 connected to pin 11
#define IN4  10         // Motor driver pin IN4 connected to pin 10
#define BUZZER_PIN 9    // Buzzer connected to pin 9

// Function prototypes
void moveForward();
void moveBackward();
void turnRight();
void turnLeft();
void stopMotors();
void soundHorn();

void setup() {
  // Initialize motor driver pins as outputs
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(BUZZER_PIN, OUTPUT);
  
  // Initialize serial communication for Bluetooth module
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {
    char command = Serial.read(); // Read incoming Bluetooth command
    
    switch (command) {
      case 'F':
        moveForward();
        break;
      case 'B':
        moveBackward();
        break;
      case 'R':
        turnRight();
        break;
      case 'L':
        turnLeft();
        break;
      case 'Y':
        soundHorn();
        break;
      default:
        stopMotors();
        break;
    }
  }
}

// Move the car forward (both motors forward)
void moveForward() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

// Move the car backward (both motors backward)
void moveBackward() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}

// Turn the car right (left motor forward, right motor backward)
void turnRight() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}

// Turn the car left (right motor forward, left motor backward)
void turnLeft() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

// Stop all motors
void stopMotors() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
}

// Activate the buzzer (horn)
void soundHorn() {
  digitalWrite(BUZZER_PIN, HIGH);
  delay(500); // Sound for 0.5 seconds
  digitalWrite(BUZZER_PIN, LOW);
}