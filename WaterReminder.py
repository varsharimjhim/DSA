#to run the code in the background create new terminal : pythonw.exe filename
import plyer
from plyer import notification
import time

def reminder():
    notification.notify( 
        title = "Water Reminder", 
        message="Varsha! It's Time to drink water",
        timeout = 5,
        app_icon = (r"C:\Users\1000300668\Desktop\Code\DSA\bottleicon.ico" )
        )
        
while True:
    reminder()
    time.sleep(60*60)