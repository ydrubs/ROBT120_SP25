/*
Remove the comments to try out each snippet of code. 

Make sure to put the comments back when trying out the next set of code or you will get an error. 

To comment out a block of code put the submols you see on line 1, where the comment would start, and the symbol on line 8 where it would end.

*/

//You can also use a double slash to make single-line comments like at the star of this sentence.

// .......................................................................................................


//Slide 3


// void setup() {
//     pinMode(13, OUTPUT); 
//     pinMode(12, OUTPUT); 
// }

// void loop() {
//   digitalWrite(13, HIGH);
//   delay(1000);
//   digitalWrite(13, LOW);
//   delay(1000);
// }



// .......................................................................................................


//Slide 7

// int ledPin = 13;
// int delayTime = 1000

// void setup() {
//     pinMode(ledPin, OUTPUT);
// }

// void loop() {
//     digitalWrite(ledPin, HIGH);
//     delay(delayTime);
//     digitalWrite(ledPins, LOW);
//     delay(delayTime);
// }


// .......................................................................................................

//Slide 8


// char inputChar = 'X'

// void setup() {
//     Serial.begin(9600);

//     if (inputChar == 'X') {
//         Serial.println("The character is X.");
//     } else {
//         Serial.println("The character is not X.");
//     }
// }

// void loop() {
//     // Empty loop
// }



// .......................................................................................................

//Slide 9


// #define LED_PIN 13 
// const int delay_time = 500;

// void setup() {
//     pinMode(LED_PIN, OUTPUT);
// }

// void loop() {
//     digitalWrite(LED_PIN, HIGH);
//     delay(delay_time);
//     digitalWrite(LED_PIN, LOW);
//     delay(delay_time);
// }



// .......................................................................................................

// Slide 11


const int buttonPin = 2;
const int ledPin = 13;

void setup() {
    pinMode(buttonPin, INPUT);
    pinMode(ledPin, OUTPUT);
}

void loop() {

    if (digitalRead(buttonPin) == HIGH) {
      digitalWrite(ledPin, HIGH);
    }
    
    else {
      digitalWrite(ledPin, LOW);
    }
}


// .......................................................................................................

//Slide 13

/*
const int ledPin = 13;
int repeat_blink = 5;

void setup() {
    pinMode(ledPin, OUTPUT);
}

void loop() {
    pass {
        digitalWrite(ledPin, HIGH);
        delay(500);
        digitalWrite(ledPin, LOW);
        delay(500);
    }
    delay(2000);  // Pause before the next set of blinks
}

*/

// .......................................................................................................

//Slide 14

/*
const int ledPin = 13;     // LED connected to pin 13
const int buttonPin = 2;   // Button connected to pin 2

void setup() {
    pinMode(ledPin, OUTPUT);     // Set the LED pin as output
    pinMode(buttonPin, INPUT);   // Set the button pin as input
}

void loop() {
    pass { // Enter the loop if the button is pressed

        digitalWrite(ledPin, HIGH);          // Turn the LED on
        delay(500);                          // Wait for 500ms
        digitalWrite(ledPin, LOW);           // Turn the LED off
        delay(500);                          // Wait for 500ms
    }

    digitalWrite(ledPin, LOW);         // Ensure LED is off when the button is released
}

*/

// .......................................................................................................

//Slide 15

/*

pass // Define pins for LEDs

void setup() {
    for (int i = 0; i < 3; i++) {
        pinMode(pass); // Set each LED pin as output
    }
}

void loop() {
    for (int i = 0; i < 3; i++) {
        digitalWrite(pass); // Turn each LED on
        delay(500);
        digitalWrite(pass);  // Turn each LED off
    }
}

*/

// .......................................................................................................

//Slide 18

/*
int ledPin = 13;

void setup() {
    pinMode(ledPin, OUTPUT);
}

void loop() {
    pass; // Blink LED 3 times
    delay(2000);
}

pass {
    for (int i = 0; i < times; i++) {
        digitalWrite(pin, HIGH);
        delay(500);
        digitalWrite(pin, LOW);
        delay(500);
    }
}

*/

















