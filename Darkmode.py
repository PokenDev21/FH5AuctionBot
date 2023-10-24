from tkinter import *
from PIL import Image, ImageTk
import requests
import io

# Creating a window
window = Tk()
window.title("Theme Changer")
window.geometry("650x450")
window.config(bg="white")

# Initialize the switch_value
switch_value = True

# Light image import
image_url_light = "https://i.imgur.com/PHnX01p.png"
response_light = requests.get(image_url_light)
image_data_light = response_light.content
light = Image.open(io.BytesIO(image_data_light))
desired_width = 200
desired_height = 100
light = ImageTk.PhotoImage(light.resize((desired_width, desired_height)))

# Dark image import
image_url_dark = "https://i.imgur.com/P4zTRpK.png"
response_dark = requests.get(image_url_dark)
image_data_dark = response_dark.content
dark = Image.open(io.BytesIO(image_data_dark))
dark = ImageTk.PhotoImage(dark.resize((desired_width, desired_height)))

# Defining a function to toggle between light and dark theme
def toggle():
    global switch_value
    if switch_value:
        switch.config(image=dark, bg="#26242f", activebackground="#26242f")
        window.config(bg="#26242f")
        switch_value = False
    else:
        switch.config(image=light, bg="white", activebackground="white")
        window.config(bg="white")
        switch_value = True

# Creating a button to toggle between light and dark themes
switch = Button(window, image=light, bd=0, bg="white", activebackground="white", command=toggle)
switch.pack(padx=50, pady=150)

window.mainloop()
