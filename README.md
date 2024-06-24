# ESP32 LED

### Project Overview
This project focuses on controlling an LED using an ESP32 microcontroller. LEDs are fundamental components used in various electronics projects for visual indication and status signaling.

### Components Needed
- ESP32 Microcontroller
- LED
- Resistor (if needed for current limiting)
- Jumper Wires
- Breadboard (optional)

### Circuit Setup
1. **Connecting the LED to ESP32:**
   - Connect the positive (anode) leg of the LED to GPIO pin 2 (or any other GPIO pin of your choice).
   - Connect the negative (cathode) leg of the LED to ground (GND).

### Instructions
1. **Setup:**
   - Initialize GPIO pin 2 as an output using `pinMode()` in the `setup()` function. This prepares the GPIO pin to control the LED.

2. **Operation:**
   - In the `loop()` function:
     - Set the digital output of GPIO pin 2 to HIGH (`digitalWrite(ledPin, HIGH)`) to turn on the LED.
     - Use `delay(1000)` to keep the LED on for 1 second.
     - After 1 second, the LED turns off automatically due to the next iteration of the loop, where `digitalWrite(ledPin, HIGH)` is not executed.

3. **Considerations:**
   - **Current Limiting:** Ensure the LED current does not exceed its maximum rating. Optionally, use a current-limiting resistor in series with the LED if needed.
   - **Power Supply:** ESP32 can power LEDs directly from its GPIO pins, but ensure overall current draw does not exceed ESP32's capabilities.

### Applications
- **Visual Indication:** Use LEDs for status indication in various projects.
- **Prototyping:** Essential for prototyping circuits before integrating more complex components.
- **Learning:** Ideal for beginners to understand basic digital output control with microcontrollers.

### Notes
- **Serial Output:** This specific example does not utilize Serial Monitor for output. Modify the code to add debugging or status messages if needed.
- **Expansion:** Extend functionality by integrating sensors or buttons to control the LED based on external inputs.

---

### Useful Links
🌐 [ProjectsLearner - ESP32 LED](https://projectslearner.com/learn/esp32-led)  
📧 [Email](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)

Created with ❤️ by ProjectsLearner