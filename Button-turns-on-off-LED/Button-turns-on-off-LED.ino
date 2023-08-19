int buttonPin = 2; // Input pin for the button
int ledPin = 13;   // Output pin for the LED
bool ledState = false; // Variable to store the LED state

void setup() {
  pinMode(buttonPin, INPUT_PULLUP); // Input pin with pull-up resistor
  pinMode(ledPin, OUTPUT);          // Output pin for the LED
  digitalWrite(ledPin, ledState);  // Initialize the LED state
}

void loop() {
  if (digitalRead(buttonPin) == LOW) { // Button pressed (LOW), this means the button has been pressed
    ledState = !ledState; // Toggle the LED state
    digitalWrite(ledPin, ledState); // Set the LED to the new state
    delay(250); // Add a small delay to debounce the button (optional)
  }
}
