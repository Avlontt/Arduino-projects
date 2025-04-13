Clock & thermometer 7 segment arduino
Clock & thermometer on 7 segment 4 digit display with arduino
parts: 
1.10k resistor 1x (to conect in series with thermistor)  
2.10k NTC thermistor  1x ( actualy any, the bigger resitance the better)
3.150 ohm resistor 4x ( to drive the display)
4.7 segment 4 digit display 1x ( i bought a cheap one of aliexpress but the quality is awfull )
5.arduino  x1 (i used nano) 
for faster temparature change i put some thrmal paste and a small radiator on the thermistor
Assembly
1. connect all the display pins to arduino pins, use the sequence from the code so you don't have to change them in the code later 
b = 1, d3 = 3, d2 = 4, f = 5, a = 6, d1 = 7, g = 8, dp = 9, c = 10, d = 11, d4 = 12, e = 13        
2. connect d1 d2 d3 d4 pins with the 150 ohm resistor 
3. connect thermistor and resistor to the d2 and ground   d2------thermistor-------resistor-----GND
4. conect the analog pin in between of thermistor and resistor                             
6. write all the resisrance and beta nummbers in the code it might be not so  accurate +- 1 degrees so play with the resistance nummber so the temparature matches the one on the thermometer
