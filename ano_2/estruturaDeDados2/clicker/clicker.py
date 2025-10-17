import pyautogui
from pymsgbox import confirm
#from time import sleep
import keyboard

try:
    confirm(text="The bot will be initialized.\n Position your mouse where you want to click and press 'Enter' to start.", title="ClickBot", buttons=["OK"])
    
    print(f"Press 'SPACE' to click, 'X' to finish program.")
    
    x, y = pyautogui.position()
    while not keyboard.is_pressed('x'):
        if keyboard.is_pressed('R'):
            x, y = pyautogui.position() 
        if True:
            pyautogui.click(x, y,10,0.00000000000000000000000001,'primary')
            print("clicked")
    print("bot stopped")
except (TypeError, Exception):
    exit()