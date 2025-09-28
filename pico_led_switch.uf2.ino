// Button on GPIO 4 controls LED on GPIO 15

const int SWITCH_PIN = 4;  
const int LED_PIN = 15;

void setup() {
  pinMode(SWITCH_PIN, INPUT_PULLUP); // Button to GND
  pinMode(LED_PIN, OUTPUT);          // LED output
}

void loop() {
  int state = digitalRead(SWITCH_PIN);

  if (state == LOW) {                // Button pressed
    digitalWrite(LED_PIN, HIGH);     // Turn LED on
  } else {
    digitalWrite(LED_PIN, LOW);      // Turn LED off
  }
}
