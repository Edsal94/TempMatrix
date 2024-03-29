EESchema Schematic File Version 4
EELAYER 30 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title ""
Date ""
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L ProjectLib:8x8_LedMatrix_StdBoard U1
U 1 1 63FBBE5D
P 5600 2200
F 0 "U1" H 5928 2246 50  0000 L CNN
F 1 "8x8_LedMatrix_StdBoard" H 5928 2155 50  0000 L CNN
F 2 "" H 5400 2550 50  0001 C CNN
F 3 "" H 5400 2550 50  0001 C CNN
	1    5600 2200
	1    0    0    -1  
$EndComp
$Comp
L MCU_Module:Arduino_UNO_R3 A1
U 1 1 63FBC281
P 3900 3650
F 0 "A1" H 3400 4750 50  0000 C CNN
F 1 "Arduino_UNO_R3" H 3350 4600 50  0000 C CNN
F 2 "Module:Arduino_UNO_R3" H 3900 3650 50  0001 C CIN
F 3 "https://www.arduino.cc/en/Main/arduinoBoardUno" H 3900 3650 50  0001 C CNN
	1    3900 3650
	1    0    0    -1  
$EndComp
$Comp
L Sensor:DHT11 U2
U 1 1 63FBCCCC
P 5650 4600
F 0 "U2" H 5406 4646 50  0000 R CNN
F 1 "DHT11" H 5406 4555 50  0000 R CNN
F 2 "Sensor:Aosong_DHT11_5.5x12.0_P2.54mm" H 5650 4200 50  0001 C CNN
F 3 "http://akizukidenshi.com/download/ds/aosong/DHT11.pdf" H 5800 4850 50  0001 C CNN
	1    5650 4600
	1    0    0    -1  
$EndComp
Wire Wire Line
	2400 3750 2400 2050
Wire Wire Line
	2400 3750 3400 3750
Wire Wire Line
	3400 3650 2550 3650
Wire Wire Line
	2550 3650 2550 2200
Wire Wire Line
	2700 3550 3400 3550
Wire Wire Line
	2700 2350 2700 3550
Wire Wire Line
	5950 4600 6200 4600
Wire Wire Line
	6200 3850 4400 3850
Wire Wire Line
	2400 2050 5200 2050
Wire Wire Line
	2550 2200 5200 2200
Wire Wire Line
	2700 2350 5200 2350
Text Label 4100 2550 1    50   ~ 0
VDD
Wire Wire Line
	4100 2650 4100 2550
Wire Wire Line
	5650 1700 5650 1800
Text Label 5650 1700 1    50   ~ 0
VDD
Wire Wire Line
	5650 2600 5650 2700
Text Label 5650 2700 3    50   ~ 0
GND
Wire Wire Line
	4000 4750 4000 4850
Text Label 4000 4850 3    50   ~ 0
GND
Wire Wire Line
	6200 3850 6200 4600
Wire Wire Line
	5650 4300 5650 4200
Wire Wire Line
	5650 4900 5650 5100
Text Label 5650 4200 1    50   ~ 0
VDD
Text Label 5650 5100 3    50   ~ 0
GND
$EndSCHEMATC
