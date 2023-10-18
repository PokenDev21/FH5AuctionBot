from PIL import ImageGrab
import time
import pyautogui
import random
import tkinter as tk
from tkinter import ttk
from tkinter.scrolledtext import ScrolledText
import threading
from PIL import Image, ImageTk
import requests
import io
import pygetwindow as gw
from screeninfo import get_monitors
# Define a flag variable to control script execution
running_flag = False
# Initialize reference resolution and multipliers
reference_resolution = (1920, 1080)
x_multiplier = 1.0
y_multiplier = 1.0
forza_horizon_window_title = "Forza Horizon 5"  # Replace with the FH5 window title
resolution_options = ["1920x1080", "2560x1440", "3840x2160"]
# Function to check if a pixel is within the specified RGB range
def is_white(pixel):
    # Check if the pixel's RGB values are in the range (240, 240, 240) to (255, 255, 255)
    return (240 <= pixel[0] <= 255) and (240 <= pixel[1] <= 255) and (240 <= pixel[2] <= 255)
def is_purple(pixel):
    # Check if the pixel's RGB values are in the range (47, 18, 48) to (57, 28, 58)
    return (47 <= pixel[0] <= 95) and (18 <= pixel[1] <= 75) and (48 <= pixel[2] <= 97)
# Define a flag variable to control script termination
stop_flag = False
script_thread = None
# Function to start the script
def start_script():
    global TimeRem_pixel_coords, CarFound_pixel_coords, No_cars_available_pixel_coords, running_flag, x_multiplier,  y_multiplier, script_thread
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
        repeat_after_buyout_button.config(state=tk.DISABLED)
        log_text.config(state=tk.NORMAL)
        if not user_resolution in resolution_options:
            log_text.insert(tk.END, f"━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n")
            log_text.insert(tk.END, f"Warning: Set resolution is not currently supported script may not work\n")
            log_text.insert(tk.END, f"━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n")
        log_text.insert(tk.END, f"Set resolution: {chosen_resolution}\n")
        log_text.insert(tk.END, f"Enter ForzaHorizon5.exe to begin script\n")
        log_text.insert(tk.END, f"UI Scale: {x_multiplier}x {y_multiplier}y\n")
        root.after(100, run_script)  # Start the script after 5 seconds
# Function to stop the script
def stop_script():
    global running_flag
    running_flag = False
    start_button.config(state=tk.NORMAL)
    resolution_dropdown.config(state=tk.NORMAL)
    repeat_after_buyout_button.config(state=tk.NORMAL)
    stop_button.config(state=tk.DISABLED)
    log_text.insert(tk.END, "Script has been stopped.\n")
    log_text.insert(tk.END, f"━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n")
    # Function to stop the script
def Reset_Console():
    log_text.delete('1.0', tk.END)
# Function to run the script in a separate thread
def run_script():
    def script_runner():
        global script_thread
        global running_flag
        stop_button.config(state=tk.NORMAL)
        root.update()  # Update the GUI to display the message
        while running_flag:
            if simulate_key_presses():
                if not get_repeat_after_buyout_state():
                    stop_script()
                break
        if get_repeat_after_buyout_state():
            if running_flag:
                time.sleep(random.uniform(5.2, 5.4))
                pyautogui.press('enter')
                time.sleep(random.uniform(0.5, 0.6))
                pyautogui.press('esc')
                time.sleep(random.uniform(0.5, 0.6))
                pyautogui.press('esc')
                time.sleep(random.uniform(0.8, 0.8))
                if running_flag:
                    script_runner()
        else:  
            stop_script()
            # Ensure the GUI elements are updated correctly
            root.after(0, lambda: start_button.config(state=tk.NORMAL))
            root.after(0, lambda: stop_button.config(state=tk.DISABLED))
    global script_thread  # Declare script_thread as a global variable
    script_thread = threading.Thread(target=script_runner)
    script_thread.start()

# Function to handle the window closing event
def on_closing():
    if running_flag:
        stop_script()  # Stop the script if it's running before closing
    root.destroy()  # Close the application


# Create the main application window
root = tk.Tk()
root.title("FH5 Auction bot")
root.geometry("435x325")  # Set the width and height to your preferred values
# Set the window close event handler
root.protocol("WM_DELETE_WINDOW", on_closing)
# Define the URL of the image you want to use as an icon
image_url = "https://drive.google.com/uc?export=download&id=1ZN0HqNSdIhowq59Xu-3IbQfATefGSITu"

# Download the image from the URL
response = requests.get(image_url)
image_data = response.content

# Create a PhotoImage object from the downloaded image data
image = Image.open(io.BytesIO(image_data))
photo = ImageTk.PhotoImage(image)
root.iconphoto(True, photo)

repeat_after_buyout_var = tk.BooleanVar(value=False)


# Create a ttk.Sizegrip to allow window resizing with a 1:1 ratio
sizegrip = ttk.Sizegrip(root)
sizegrip.grid(row=999, column=999, sticky='se')

# Create a start button
start_button = ttk.Button(root, text="Begin", command=start_script)
start_button.grid(row=0, column=0, padx=10, pady=10,columnspan=2)

# Create a stop button
stop_button = ttk.Button(root, text="Stop", command=stop_script, state=tk.DISABLED)
stop_button.grid(row=0, column=1, padx=10, pady=10,columnspan=2)

# Get the user's screen resolution
user_resolution = f"{root.winfo_screenwidth()}x{root.winfo_screenheight()}"

# Create a resolution dropdown with options
resolution_label = ttk.Label(root, text="Resolution:")
resolution_label.grid(row=1, column=0, sticky='e', padx=20)
resolution_var = tk.StringVar(value=user_resolution)

# Select the correct resolution if available, otherwise default to 1920x1080
resolution_dropdown = ttk.Combobox(root, textvariable=resolution_var, values=resolution_options)
resolution_dropdown.grid(row=1, column=1, padx=10, pady=10)

# Function to retrieve the state of the "Repeat after Buyout" toggle button
def get_repeat_after_buyout_state():
    return repeat_after_buyout_var.get()

# Create the "Repeat after Buyout" toggle button
repeat_after_buyout_button = ttk.Checkbutton(root, text="Repeat after Buyout", variable=repeat_after_buyout_var)
repeat_after_buyout_button.grid(row=1, column=2, padx=10, pady=10)

# Create a text area to display logs
log_text = ScrolledText(root, height=10, width=50, wrap=tk.WORD, state=tk.DISABLED)
log_text.grid(row=2, column=0, columnspan=3, padx=10, pady=10)

# Create a "Clear Console" button
Reset_button = ttk.Button(root, text="Clear Console", command=Reset_Console)
Reset_button.grid(row=3, column=1, padx=10, pady=10, columnspan=1, sticky='n')


# Define the function to simulate key presses
def simulate_key_presses():
    active_window = gw.getActiveWindow()
    if active_window.title == forza_horizon_window_title:    
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
                    return True  # Return True if white pixel is found
       
       
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
    else:
        # Handle the case when the active window is not Forza Horizon 5
        time.sleep(0.5)
        return False
root.mainloop()






