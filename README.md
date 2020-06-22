
## brief
use UART to control turntable (brand: ComXim), based on QT, CPP.

## Serial Port

check your serial port before running the program

- win : COM3 ...

- linux : /dev/ttyUSB0 ...

## QT

lib: qt5


## ComXimTurntable

### run forever, no pause

CT+START(0,0,0,0,0,0);

### stop

CT+SETSTOP();

### turn left, every 45 degrees,   pause 4s,  repeat 8 times:

CT+START(0,1,0,45,4,8); 


### Format
		+ "\r\nCT + START( 0,      1,           1,             45,              4,           8 );"
		+ "\r\n                    |            |                |               |            |                   | "
		+ "\r\n           Direction,  Model,  Auto Shutter,  Degree,  PauseTime,  RepeatTimes"
		+ "\r\n           0:Left       0:Continue      0:No"
		+ "\r\n           1:Right    1:Intermittent  1:Yes"
		+ "\r\n                          2:Swing"
