from tkinter import *
from PIL import Image, ImageTk
import requests
import io

# Creating a window
window = Tk()
window.title("Theme Changer")
window.geometry("450x300")
window.config(bg="white")

#Light image import#
image_url = "https://i.imgur.com/PHnX01p.png"
# Download the image from the URL
response = requests.get(image_url)
image_data = response.content
# Create a PhotoImage object from the downloaded image data
image = Image.open(io.BytesIO(image_data))
# Define the desired dimensions for the button image
desired_width = 200
desired_height = 100
# Resize the image while maintaining its aspect ratio
image = image.resize((desired_width, desired_height))
light = ImageTk.PhotoImage(image)
########################
'''
def DarkButton():
    #Dark image import
    image_url = "https://drive.google.com/uc?export=download&id=10EVXqp6eOzBPuZF4uGEACCScve6HKeM6"
    # Download the image from the URL
    response = requests.get(image_url)
    image_data = response.content
    # Create a PhotoImage object from the downloaded image data
    image = Image.open(io.BytesIO(image_data))
    # Define the desired dimensions for the button image
    desired_width = 200
    desired_height = 100
    # Resize the image while maintaining its aspect ratio
    image = image.resize((desired_width, desired_height))
    dark = ImageTk.PhotoImage(image)
    return dark
'''
# Creating a button to toggle between light and dark themes
switch = Button(window, image=light, bd=0, bg="white")

# Setting the position of the button
switch.pack(padx=50, pady=50)
