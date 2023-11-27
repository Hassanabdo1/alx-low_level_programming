import pyautogui as gui
import time

message = input("Enter the message: ")
number = int(input("Enter the number of times: "))

time.sleep(2)

for i in range(number):
    gui.typewrite(message)
    gui.press('enter')
