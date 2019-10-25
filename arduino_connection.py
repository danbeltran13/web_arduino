import serial


COM_PORT = 'COM4'
BAUD_RATE = 9600
TIME_OUT = .1
TIME_CUT = 300;
arduino = serial.Serial(COM_PORT, BAUD_RATE, timeout=TIME_OUT)

while(1):
    print(arduino.readline(TIME_CUT))
    arduino.write(b'HELLO')

arduino.close()
