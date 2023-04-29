import threading
def myFun():
    print("Its TIme to learn Pyathon")
    print("freey with sam the Hcker")
timer = threading.Timer(5.0,myFun)
timer.start()