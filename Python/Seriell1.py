import serial
import time
import datetime

ser = serial.Serial(
    'COM4', 9600, timeout=0, parity=serial.PARITY_NONE, rtscts=1
)

while True:
    try:
        s = str(ser.readline(100).decode())
        if s != "":
            f = open("Adgangslogg.txt", "a+")
            f.write(s)
            f.write(str(datetime.datetime.now()))
    except:
        print('ERROR')
        break

time.sleep(1)