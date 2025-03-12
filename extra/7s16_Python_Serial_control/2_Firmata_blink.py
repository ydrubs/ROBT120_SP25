"""
THis example shows how to control the Arduino board directly from Python without needing any extra Arduino-side code
Upload the Firmata on the Arduino: File > Examples > Firmata > StandardFirmata.

Run the following Python sketch. You can make changes here without needing to modify the Arduino Firmata Sketch.

An LED on pin 9 blinks as long as a button on pin 2 is pressed.
When a button on pin 3 is pressed the program ends
"""
import pyfirmata
import time

# Replace 'COM3' with your Arduino's port (e.g., '/dev/ttyACM0' on Linux/Mac)
board = pyfirmata.Arduino('COM7')

# Set up an iterator thread so the board's input buffer doesn't overflow
it = pyfirmata.util.Iterator(board)
it.start()

# Configure pin 13 as an output pin
led = board.get_pin('d:9:o')
button_blink = board.get_pin('d:2:i')
button_quit = board.get_pin('d:3:i')


while True:
    button_state1 = button_blink.read()  # Read button state (0 or 1)
    button_state2 = button_quit.read()

    if button_state1:
        led.write(1)
        time.sleep(1)  # Keep it on for 5 seconds
        led.write(0)# Turn the LED off
        time.sleep(1)  # Keep it on for 5 seconds

    if button_state2:
        board.exit()
