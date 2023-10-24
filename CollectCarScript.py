import time
import pyautogui
import random
from pynput.mouse import Listener, Button


# Initialize a flag to control the loop
running = True

def on_click(x, y, button, pressed):
    global running  # Use the global running variable
    if button == Button.middle and pressed:
        # Stop the listener and exit the loop
        running = False
        return False

# Create a mouse listener
with Listener(on_click=on_click) as listener:
    print("Waiting for the middle mouse button to be pressed...")
    # Run a loop while the running flag is True
    while running:
        pass  # You can add your code here to execute continuously
        time.sleep(random.uniform(2, 2.1))
        pyautogui.press('y')
        time.sleep(random.uniform(0.5, 0.6))
        pyautogui.press('enter')
        time.sleep(random.uniform(11, 11.2))
        pyautogui.press('enter')
        time.sleep(random.uniform(0.8, 0.8))
        pyautogui.press('escape')
        time.sleep(random.uniform(0.8, 0.8))
        pyautogui.press('down')
        from pynput.mouse import Listener, Button

print("Middle mouse button pressed. Exiting.")
