const int buttonPin = 2; // Pin connected to the pushbutton
const int ledPin = 9;    // Pin connected to the LED

bool ledState = false;   // Boolean flag to track LED state
bool lastButtonState = HIGH; // Previous button state
bool currentButtonState = HIGH; // Current button state

void setup() {
  pinMode(buttonPin, INPUT); // Set button pin as input with pull-up resistor
  pinMode(ledPin, OUTPUT);         // Set LED pin as output
}

void loop() {
  // Read the debounced state of the button
  currentButtonState = debounce(lastButtonState);

  // If the button was just pressed (transition from LOW to HIGH)
  if (lastButtonState == LOW && currentButtonState == HIGH) {
    ledState = !ledState;           // Toggle the LED state
  }

  // Update the previous button state
  lastButtonState = currentButtonState;

  // Update the LED output
  digitalWrite(ledPin, ledState);
}

/*
 * Debouncing Function
 * Pass it the previous button state,
 * and get back the current debounced button state.
 */
bool debounce(bool last) {
  bool current = digitalRead(buttonPin); // Read the button state
  if (last != current) {                // If the state has changed
    delay(5);                           // Wait 5ms for debounce
    current = digitalRead(buttonPin);   // Read it again
  }
  return current;                       // Return the debounced state
}
