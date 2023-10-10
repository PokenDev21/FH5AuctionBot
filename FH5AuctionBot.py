from PIL import ImageGrab
import time
import pyautogui
import random
from pynput import mouse
import tkinter as tk
from tkinter import ttk
from tkinter.scrolledtext import ScrolledText
import threading

# ... (Your pixel checking and key simulation functions)

# Define a flag variable to control script execution
running_flag = False

# Function to check if a pixel is within the specified RGB range
def is_white(pixel):
    # Check if the pixel's RGB values are in the range (240, 240, 240) to (255, 255, 255)
    return (240 <= pixel[0] <= 255) and (240 <= pixel[1] <= 255) and (240 <= pixel[2] <= 255)
def is_purple(pixel):
    # Check if the pixel's RGB values are in the range (47, 18, 48) to (57, 28, 58)
    return (47 <= pixel[0] <= 95) and (18 <= pixel[1] <= 75) and (48 <= pixel[2] <= 97)
# Define a flag variable to control script termination
stop_flag = False
# Function to start the script
def start_script():
    global running_flag
    if not running_flag:
        running_flag = True
        start_button.config(state=tk.DISABLED)
        stop_button.config(state=tk.NORMAL)
        log_text.config(state=tk.NORMAL)
        log_text.insert(tk.END, "Script has been startedy.\n")
        run_script()  # Start the script when "Begin" is clicked

# Function to stop the script
def stop_script():
    global running_flag
    running_flag = False
    start_button.config(state=tk.NORMAL)
    stop_button.config(state=tk.DISABLED)
    log_text.insert(tk.END, "Script has been stopped.\n")
    # Function to stop the script
def Reset_Console():
    log_text.delete('1.0', tk.END)

# Function to run the script in a separate thread
def run_script():
    def script_runner():
        while running_flag:
            if simulate_key_presses():
                stop_script()
                break
        # Ensure the GUI elements are updated correctly
        root.after(0, lambda: start_button.config(state=tk.NORMAL))
        root.after(0, lambda: stop_button.config(state=tk.DISABLED))

    script_thread = threading.Thread(target=script_runner)
    script_thread.start()



def on_closing():
    global running_flag
    running_flag = False
    root.destroy()

# Create the main application window
root = tk.Tk()
root.title("FH5 Auction bot")

# Create a start button
start_button = ttk.Button(root, text="Begin", command=start_script)
start_button.pack(pady=10)

# Create a stop button
stop_button = ttk.Button(root, text="Stop", command=stop_script, state=tk.DISABLED)
stop_button.pack(pady=10)

# Create a stop button
Reset_button = ttk.Button(root, text="Reset Console", command=Reset_Console)
Reset_button.pack(pady=10)


# Create a text area to display logs
log_text = ScrolledText(root, height=10, width=50, wrap=tk.WORD, state=tk.DISABLED)
log_text.pack(padx=10, pady=10)

root.protocol("WM_DELETE_WINDOW", on_closing)

# ... (Your simulate_key_presses function)
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

root.mainloop()






