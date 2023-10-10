from PIL import ImageGrab
import time
import pyautogui
import random
from pynput import mouse

# Define the exact coordinates of the pixel to check



# Function to check if a pixel is within the specified RGB range
def is_white(pixel):
    # Check if the pixel's RGB values are in the range (240, 240, 240) to (255, 255, 255)
    return (240 <= pixel[0] <= 255) and (240 <= pixel[1] <= 255) and (240 <= pixel[2] <= 255)
def is_purple(pixel):
    # Check if the pixel's RGB values are in the range (47, 18, 48) to (57, 28, 58)
    return (47 <= pixel[0] <= 95) and (18 <= pixel[1] <= 75) and (48 <= pixel[2] <= 97)
# Define a flag variable to control script termination
stop_flag = False


# Define the function to simulate key presses
def simulate_key_presses():
    pixel_coords = (510, 297)
    screenshot = ImageGrab.grab(bbox=(pixel_coords[0], pixel_coords[1], pixel_coords[0] + 1, pixel_coords[1] + 1))
    pixel_color = screenshot.getpixel((0, 0))
    WhitePixelFound = is_white(pixel_color)  # Initialize a flag for the white pixel
    # Simulate pressing Enter twice
    if not WhitePixelFound:
        pyautogui.press('enter')
        sleep_duration = random.uniform(0.37, 0.38)
        time.sleep(sleep_duration)
        pyautogui.press('enter')
    InstantExit = False
    # Check for a white pixel during the 5-second delay
    start_time = time.time()
    while time.time() - start_time <  2:  # Check for 5 seconds
        pixel_coords = (510, 297)
        screenshot = ImageGrab.grab(bbox=(pixel_coords[0], pixel_coords[1], pixel_coords[0] + 1, pixel_coords[1] + 1))
        pixel_color = screenshot.getpixel((0, 0))
        if is_white(pixel_color):
            WhitePixelFound = True      
            pixel_coords = (295 , 370 )
            screenshot = ImageGrab.grab(bbox=(pixel_coords[0], pixel_coords[1], pixel_coords[0] + 1, pixel_coords[1] + 1))
            pixel_color = screenshot.getpixel((0, 0))
            if is_purple(pixel_color):
                print("InstantBuy")
                # Simulate pressing 'Y' and then 'Enter' keys
                pyautogui.press('y')
                time.sleep(random.uniform(0.15,0.16))
                pyautogui.press('down')
                time.sleep(random.uniform(0.11,0.12))
                pyautogui.press('enter')
                time.sleep(random.uniform(0.19,0.2))
                pyautogui.press('enter')
                time.sleep(0.1)
                return True  # Return True if white pixel is found'''
       
        pixel_coords = (1295 , 557)
        screenshot = ImageGrab.grab(bbox=(pixel_coords[0], pixel_coords[1], pixel_coords[0] + 1, pixel_coords[1] + 1))
        pixel_color = screenshot.getpixel((0, 0))
        if is_white(pixel_color):
            pyautogui.press('esc')
            InstantExit = True
            break
    # Simulate pressing Escape
    if not WhitePixelFound:
        if not InstantExit:
            time.sleep(random.uniform(0.05,0.07))
            pyautogui.press('esc')
    sleep_duration = random.uniform(0.74,0.75)
    time.sleep(sleep_duration)
    return False  # Return False if white pixel is not found

# Callback function to handle mouse events
def on_click(x, y, button, pressed):
    global stop_flag  # Access the stop_flag variable
    if button == mouse.Button.middle and pressed:
        print("Middle mouse button clicked. Stopping the script.")
        stop_flag = True  # Set the stop_flag to True to stop the script
# Start monitoring mouse events
listener = mouse.Listener(on_click=on_click)
listener.start()

# Sleep for 5 seconds before starting the loop
time.sleep(5)

while not stop_flag:
   
    if simulate_key_presses():
        break  # Exit the loop if white pixel is found and macro is executed

# Script will stop when the stop_flag is set to True
print("Script has been stopped.")
