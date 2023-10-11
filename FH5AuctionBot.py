from PIL import ImageGrab
import time
import pyautogui
import random
from pynput import mouse
import tkinter as tk
from tkinter import ttk
from tkinter.scrolledtext import ScrolledText
import threading
import sys
import os

# Define a flag variable to control script execution
running_flag = False

# Initialize reference resolution and multipliers
reference_resolution = (1920, 1080)
x_multiplier = 1.0
y_multiplier = 1.0

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
    global TimeRem_pixel_coords, CarFound_pixel_coords, No_cars_available_pixel_coords, running_flag, x_multiplier,  y_multiplier
    TimeRem_pixel_coords = (295 , 370)
    CarFound_pixel_coords = (510, 297)
    No_cars_available_pixel_coords = (1295 , 557)
    chosen_resolution = resolution_var.get()
    chosen_width, chosen_height = map(int, chosen_resolution.split("x"))
    x_multiplier = chosen_width / reference_resolution[0]
    y_multiplier = chosen_height / reference_resolution[1]
    # Multiply each coordinate by the multipliers
    TimeRem_pixel_coords = (TimeRem_pixel_coords[0] * x_multiplier, TimeRem_pixel_coords[1] * y_multiplier)
    CarFound_pixel_coords = (CarFound_pixel_coords[0] * x_multiplier, CarFound_pixel_coords[1] * y_multiplier)
    No_cars_available_pixel_coords = (No_cars_available_pixel_coords[0] * x_multiplier, No_cars_available_pixel_coords[1] * y_multiplier)


    if not running_flag:
        running_flag = True
        start_button.config(state=tk.DISABLED)
        resolution_dropdown.config(state=tk.DISABLED)
        log_text.config(state=tk.NORMAL)
        log_text.insert(tk.END, "Starting script for resolution in 5 sec\n")
        log_text.insert(tk.END, f"Set resolution: {chosen_resolution}\n")
        log_text.insert(tk.END, f"Multiplier X: {x_multiplier} multiplier Y: {y_multiplier}\n")
        root.after(5000, run_script)  # Start the script after 5 seconds
# Function to stop the script
def stop_script():
    global running_flag
    running_flag = False
    start_button.config(state=tk.NORMAL)
    resolution_dropdown.config(state=tk.NORMAL)
    stop_button.config(state=tk.DISABLED)
    log_text.insert(tk.END, "Script has been stopped.\n")
    # Function to stop the script
def Reset_Console():
    log_text.delete('1.0', tk.END)

# Function to run the script in a separate thread
def run_script():
    def script_runner():
        stop_button.config(state=tk.NORMAL)
        root.update()  # Update the GUI to display the message
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
# Get the directory where the script or executable is located
if getattr(sys, 'frozen', False):
    # This code block is for a frozen (compiled) application (e.g., created with pyinstaller)
    application_path = os.path.dirname(sys.executable)
else:
    # This code block is for a script running in Python
    application_path = os.path.dirname(__file__)

# Construct the full path to your .ico file
ico_path = os.path.join(application_path, 'FH5AuctionBot.ico')

root.iconbitmap(default=ico_path)
# Create a start button
start_button = ttk.Button(root, text="Begin", command=start_script)
start_button.pack(pady=10)

# Create a stop button
stop_button = ttk.Button(root, text="Stop", command=stop_script, state=tk.DISABLED)
stop_button.pack(pady=10)

# Create a resolution dropdown with options
resolution_label = ttk.Label(root, text="Resolution:")
resolution_label.pack()
resolution_options = ["1920x1080", "2560x1440", "3840x2160"]
resolution_var = tk.StringVar(value=resolution_options[0])
resolution_dropdown = ttk.Combobox(root, textvariable=resolution_var, values=resolution_options)
resolution_dropdown.pack(pady=10)

# Create a text area to display logs
log_text = ScrolledText(root, height=10, width=50, wrap=tk.WORD, state=tk.DISABLED)
log_text.pack(padx=10, pady=10)

# Create a stop button
Reset_button = ttk.Button(root, text="Clear Console", command=Reset_Console)
Reset_button.pack(pady=10)
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
    while time.time() - start_time <  3:  # Check for 5 seconds
        screenshot = ImageGrab.grab(bbox=(CarFound_pixel_coords[0], CarFound_pixel_coords[1], CarFound_pixel_coords[0] + 1, CarFound_pixel_coords[1] + 1))
        pixel_color = screenshot.getpixel((0, 0))
        if is_white(pixel_color):
            if not WhitePixelFound:
                log_text.insert(tk.END, "Car Found!\n")
            WhitePixelFound = True      
            screenshot = ImageGrab.grab(bbox=(TimeRem_pixel_coords[0], TimeRem_pixel_coords[1], TimeRem_pixel_coords[0] + 1, TimeRem_pixel_coords[1] + 1))
            pixel_color = screenshot.getpixel((0, 0))
            if is_purple(pixel_color):
                log_text.insert(tk.END, "Attempting Buyout\n")
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
       
       
        screenshot = ImageGrab.grab(bbox=(No_cars_available_pixel_coords[0], No_cars_available_pixel_coords[1],No_cars_available_pixel_coords[0] + 1, No_cars_available_pixel_coords[1] + 1))
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






