from tkinter import ttk, PhotoImage
from tkinter.scrolledtext import ScrolledText
from PIL import Image, ImageTk, ImageGrab
import tkinter as tk
import pygetwindow as gw
import pyautogui
import random
import time
import requests
import io
import sv_ttk
import threading

# Constants
FORZA_HORIZON_WINDOW_TITLE = "Forza Horizon 5"
RESOLUTION_OPTIONS = ["1920x1080", "2560x1440", "3840x2160"]
REFERENCE_RESOLUTION = (1920, 1080)
TimeRem_pixel_coords = (295, 370)
CarFound_pixel_coords = (510, 297)
No_cars_available_pixel_coords = (1295, 557)

# Global Variables
running_flag = False
stop_button_pressed = False
AttemptedCount = 1
x_multiplier = 1.0
y_multiplier = 1.0

# Functions
def is_white(pixel):
    return (240 <= pixel[0] <= 255) and (240 <= pixel[1] <= 255) and (240 <= pixel[2] <= 255)

def is_purple(pixel):
    return (47 <= pixel[0] <= 95) and (18 <= pixel[1] <= 75) and (48 <= pixel[2] <= 97)

def stop_script():
    global stop_button_pressed, running_flag
    stop_button_pressed = True
    running_flag = False
    start_button.config(state=tk.NORMAL)
    resolution_dropdown.config(state=tk.NORMAL)
    repeat_after_buyout_button.config(state=tk.NORMAL)
    stop_button.config(state=tk.DISABLED)
    log_text.insert(tk.END, "Script has been stopped.\n")
    log_text.insert(tk.END, "━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n")
    log_text.see(tk.END)

def start_script():
    global running_flag, x_multiplier, y_multiplier, TimeRem_pixel_coords, CarFound_pixel_coords, No_cars_available_pixel_coords
    chosen_resolution = resolution_var.get()
    chosen_width, chosen_height = map(int, chosen_resolution.split("x"))
    x_multiplier = chosen_width / REFERENCE_RESOLUTION[0]
    y_multiplier = chosen_height / REFERENCE_RESOLUTION[1]
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

        if chosen_resolution not in RESOLUTION_OPTIONS:
            log_text.insert(tk.END, "━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n")
            log_text.insert(tk.END, "Warning: Set resolution is not currently supported; the script may not work.\n")
            log_text.insert(tk.END, "━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n")

        log_text.insert(tk.END, f"Set resolution: {chosen_resolution}\n")
        log_text.insert(tk.END, "Enter ForzaHorizon5.exe to begin script\n")
        log_text.insert(tk.END, f"UI Scale: {x_multiplier}x {y_multiplier}y\n")
        log_text.insert(tk.END, "━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n")
        log_text.see(tk.END)
        stop_button_pressed
        root.after(100, run_script)

def Reset_Console():
    log_text.delete('1.0', tk.END)

def run_script():
    def script_runner():
        global running_flag
        stop_button.config(state=tk.NORMAL)
        root.update()

        while running_flag:
            if simulate_key_presses():
                if not get_repeat_after_buyout_state:
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
            if not stop_button_pressed:
                stop_script()
            root.after(0, lambda: start_button.config(state=tk.NORMAL))
            root.after(0, lambda: stop_button.config(state=tk.DISABLED))

    script_thread = threading.Thread(target=script_runner)
    script_thread.start()

def on_closing():
    if running_flag:
        stop_script()
    root.destroy()

def get_repeat_after_buyout_state():
    return repeat_after_buyout_var.get()

def simulate_key_presses():
    active_window = gw.getActiveWindow()
    if active_window.title == FORZA_HORIZON_WINDOW_TITLE:
        pixel_coords = (510, 297)
        screenshot = ImageGrab.grab(bbox=(pixel_coords[0], pixel_coords[1], pixel_coords[0] + 1, pixel_coords[1] + 1))
        pixel_color = screenshot.getpixel((0, 0))
        WhitePixelFound = is_white(pixel_color)
        current_time = time.strftime("%H:%M:%S")
        if not WhitePixelFound:
            pyautogui.press('enter')
            sleep_duration = random.uniform(0.37, 0.38)
            time.sleep(sleep_duration)
            pyautogui.press('enter')
        InstantExit = False
        start_time = time.time()
        while time.time() - start_time < 3:
            screenshot = ImageGrab.grab(bbox=(CarFound_pixel_coords[0], CarFound_pixel_coords[1], CarFound_pixel_coords[0] + 1, CarFound_pixel_coords[1] + 1))
            pixel_color = screenshot.getpixel((0, 0))
            if is_white(pixel_color):
                if not WhitePixelFound:
                    log_text.insert(tk.END, f"[{current_time}] Car Found!\n")
                    log_text.see(tk.END)
                WhitePixelFound = True
                screenshot = ImageGrab.grab(bbox=(TimeRem_pixel_coords[0], TimeRem_pixel_coords[1], TimeRem_pixel_coords[0] + 1, TimeRem_pixel_coords[1] + 1))
                pixel_color = screenshot.getpixel((0, 0))
                if is_purple(pixel_color):
                    global AttemptedCount
                    log_text.insert(tk.END, f"[{current_time}] Attempting Buyout[{AttemptedCount}]\n")
                    AttemptedCount += 1
                    log_text.see(tk.END)
                    pyautogui.press('y')
                    time.sleep(random.uniform(0.15, 0.16))
                    pyautogui.press('down')
                    time.sleep(random.uniform(0.11, 0.12))
                    pyautogui.press('enter')
                    time.sleep(random.uniform(0.19, 0.2))
                    pyautogui.press('enter')
                    time.sleep(0.1)
                    return True

            screenshot = ImageGrab.grab(bbox=(No_cars_available_pixel_coords[0], No_cars_available_pixel_coords[1], No_cars_available_pixel_coords[0] + 1, No_cars_available_pixel_coords[1] + 1))
            pixel_color = screenshot.getpixel((0, 0))
            
            if is_white(pixel_color):
                pyautogui.press('esc')
                InstantExit = True
                break

        if not WhitePixelFound:
            if not InstantExit:
                time.sleep(random.uniform(0.05, 0.07))
                pyautogui.press('esc')

        sleep_duration = random.uniform(0.74, 0.75)
        time.sleep(sleep_duration)
        return False
    else:
        # Handle the case when the active window is not Forza Horizon 5
        time.sleep(0.5)
        return False
# Create a "switch" button to toggle themes
light_theme = False

def toggle():
    global light_theme
    if light_theme:
        switch.config(image=dark)
        sv_ttk.set_theme("dark")
    else:
        switch.config(image=light)
        sv_ttk.set_theme("light")
    light_theme = not light_theme

root = tk.Tk()
root.title("FH5 Auction bot")
root.geometry("510x350")
root.protocol("WM_DELETE_WINDOW", on_closing)

# Create an icon
image_url = "https://drive.google.com/uc?export=download&id=1ZN0HqNSdIhowq59Xu-3IbQfATefGSITu"
response = requests.get(image_url)
image_data = response.content
light = Image.open(io.BytesIO(image_data))
photo = ImageTk.PhotoImage(light)
root.iconphoto(True, photo)

# Create a "sizegrip" for window resizing
sizegrip = ttk.Sizegrip(root)
sizegrip.grid(row=999, column=999, sticky='se')

# Create "start" button
start_button = ttk.Button(root, text="Begin", command=start_script, padding=(25, 0))
start_button.grid(row=0, column=0, padx=(10, 5), pady=10, columnspan=2)

# Create "stop" button
stop_button = ttk.Button(root, text="Stop", command=stop_script, state=tk.DISABLED, padding=(25, 0))
stop_button.grid(row=0, column=1, padx=(5, 10), pady=10, columnspan=2)

# Get the user's screen resolution
user_resolution = f"{root.winfo_screenwidth()}x{root.winfo_screenheight()}"

# Create a resolution dropdown
resolution_label = ttk.Label(root, text="Resolution:")
resolution_label.grid(row=1, column=0, sticky='e', padx=20)
resolution_var = tk.StringVar(value=user_resolution)

resolution_dropdown = ttk.Combobox(root, textvariable=resolution_var, values=RESOLUTION_OPTIONS)
resolution_dropdown.grid(row=1, column=1, padx=10, pady=10)

# Create "Repeat after Buyout" toggle button
repeat_after_buyout_var = tk.BooleanVar()
repeat_after_buyout_button = ttk.Checkbutton(root, text="Repeat after Buyout", variable=repeat_after_buyout_var)
repeat_after_buyout_button.grid(row=1, column=2, padx=10, pady=10)

# Create a text area for logs
log_text = ScrolledText(root, height=10, width=50, wrap=tk.WORD, state=tk.DISABLED)
log_text.grid(row=2, column=0, columnspan=3, padx=10, pady=10)

# Create "Clear Console" button
Reset_button = ttk.Button(root, text="Clear Console", command=Reset_Console)
Reset_button.grid(row=3, column=1, padx=10, pady=15, columnspan=1, sticky='n')

image_url_light = "https://i.imgur.com/nEgl2Qg.png"
response_light = requests.get(image_url_light)
image_data_light = response_light.content
light = Image.open(io.BytesIO(image_data_light))
light = ImageTk.PhotoImage(light.resize((80, 40)))

image_url_dark = "https://i.imgur.com/rywsJbO.png"
response_dark = requests.get(image_url_dark)
image_data_dark = response_dark.content
dark = Image.open(io.BytesIO(image_data_dark))
dark = ImageTk.PhotoImage(dark.resize((80, 40)))

switch = ttk.Button(root, image=dark, command=toggle)
switch.grid(row=3, column=2, padx=10, pady=0, columnspan=1, sticky='n')

if light_theme:
    switch.config(image=light)
    toggle()
else:
    switch.config(image=dark)

style = ttk.Style()
sv_ttk.set_theme("dark")
root.mainloop()
