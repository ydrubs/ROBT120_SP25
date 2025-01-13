// Array of LED pins
int ledPins[] = {11,12,13}; // Define pins connected to three LEDs

void setup() {
  // Initialize each LED pin as OUTPUT
  for (int i = 0; i < 3; i++) { // Change 3 to the number of LEDs if more are added
    pinMode(ledPins[i], OUTPUT);
  }


  // Reflection: What does the `pinMode()` function do, and why is it important?
  // Reflection: What would happen if you forgot to call `pinMode()` for one of the pins?


}

void loop() {
  // Call the blink function
  blinkLeds(250); // Pass delay duration (in milliseconds) to the function

  // Reflection: How does changing the delay value affect the blinking pattern?
  // Reflection: Why do we call the `blinkLeds()` function here instead of writing the LED logic directly in `loop()`?


}

// Function to blink LEDs
void blinkLeds(int delayTime) {
  // Turn LEDs ON one by one
  for (int i = 0; i < 3; i++) { // Change 3 to the number of LEDs if more are added
    digitalWrite(ledPins[i], HIGH); // Turn on the LED
    delay(delayTime);              // Wait for the specified duration
  }

  // Turn LEDs OFF one by one
  for (int i = 0; i < 3; i++) { // Change 3 to the number of LEDs if more are added
    digitalWrite(ledPins[i], LOW);  // Turn off the LED
    delay(delayTime);              // Wait for the specified duration
  }

  // Reflection: Why do we use a loop here instead of writing `digitalWrite()` for each LED individually?
  // Reflection: How would you modify this function to blink all LEDs at the same time instead of one by one?


}



/*
Reflection Questions:
1. How does the array `ledPins[]` make the code easier to manage compared to using individual variables for each pin?
2. What would you need to change in the code if you added a fourth LED? 
3. What happens if you pass a very small or very large value to the `delay()` function in `blinkLeds()`?
4. Can you explain the role of the `setup()` function versus the `loop()` function in an Arduino program?
5. How could you expand this project to include user interaction, like pressing a button to control the blinking pattern?
6. What challenges might arise if you were working with 20 LEDs instead of 3? How would you manage the code in that case?
*/
