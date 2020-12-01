# TLV493D-Sensor-Data-Acquisition

![This is how l connected a TLE493D eval board with a TLV493D sensor](https://github.com/PhyHubs/TLV493Dx1-Sensor-Data-Acquisition/blob/main/PhyBand_1x3D/doc_images/Setup.png "Eval Board Setup")



Basic setup for acquiring data from Infineon's TLV493D 3D encoder with Infineon's XMC1100 

# Summary
> The TLE493D Eval Board is a budget-priced evaluation board equipped with the magnetic sensor TLE493D for three dimensional measurement combined with an ARM® Cortex™-M0 CPU. The 3D Magnetic Sensor 2GO has a complete set of on-board devices, including an on-board debugger. Build your own application and gadget with the 3D Magnetic Sensor 2GO.
The 3D magnetic sensor TLV493D-A1B6 offers accurate three-dimensional sensing with extremely low power consumption in a small 6-pin package. With its magnetic field detection in x, y, and z-direction the sensor reliably measures three-dimensional, linear and rotation movements Applications include joysticks, control elements (white goods, multifunction knops), or electric meters (anti tampering) and any other application that requires accurate angular measurements or low power consumptions. 

# Usage
> TLE493D::begin(TwoWire &bus, TLE493D_Address_t slaveAddress, bool reset);  
Address of TLE493D accel/gyro when ADO = LOW. If High, 0xE5

# Key Features and Benefits  
1. TLE493D  
2. XMC1100 (ARM® Cortex™-M0 based)  
3. On-board J-Link Lite Debugger (Realized with XMC4200 Microcontroller)  
4. Power over USB (Micro USB), ESD and reverse current protection

# Installation
## Integration of XMC in Arduino IDE  
> Please note that base of the Sensors 2GO is the XMC 2Go from Infineon. Therefore, please install (if not already done) also the XMC-for-Arduino implementation and choose afterwards XMC2Go from the Tools>Board menu in the Arduino IDE if working with this evaluation board.  
TLE493D uses I2C library in the **Wire** folder of the XMC1100 library. If other microcontroller is used in place of XMC1100, please change the Wire folder accordingly.
## Integration of Library
> Please download this repository from GitHub  

# API
> Please check [here](https://github.com/PhyHubs/TLV493Dx1-Sensor-Data-Acquisition/blob/main/PhyBand_1x3D/doc/html/index.html) for API info.

# Data acquisition with Python
> Please check [the DAQ link]() for Python scripts for supporing sensor data acquisition.

# Board Information, Datasheet and Additional Information  
> A PDF summarizing the features and layout of the 3D magnetic sensor 2GO board is stored on the Infineon homepage [here](https://www.infineon.com/dgdl/Infineon-3D%20Magnetic%20Sensor-PB-v03_00-EN.pdf?fileId=5546d46261d5e6820161e7571b2b3dd0). The datasheet for the TLV493D can be found [here](https://www.infineon.com/dgdl/Infineon-TLV493D-A1B6-DataSheet-v01_10-EN.pdf?fileId=5546d462525dbac40152a6b85c760e80/) 

