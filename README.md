# ICM42605-Sensor-Data-Acquisition

![This is how l connected a TLE493D eval board with a ICM42605 eval board](https://github.com/PhysHub/ICM42605-Sensor-Data-Acquisition/blob/main/IMU/doc_images/IMG_3514.JPG "Eval Board Setup")



Basic setup for acquiring data from TDK invensense's IMU icm‑42605/42688 with Infineon's XMC1100 

# Summary
> The TLE493D Eval Board is a budget-priced evaluation board equipped with the magnetic sensor TLE493D for three dimensional measurement combined with an ARM® Cortex™-M0 CPU. The 3D Magnetic Sensor 2GO has a complete set of on-board devices, including an on-board debugger. Build your own application and gadget with the 3D Magnetic Sensor 2GO.
The ICM-42605 is a 6-axis MotionTracking device that combines a 3-axis gyroscope, and a 3-axis accelerometer in a small 2.5x3x0.91 mm (14-pin LGA) package. It also features a
2K-byte FIFO that can lower the traffic on the serial bus interface, and reduce power consumption by allowing the system processor to burst read sensor data and then go into a low-power mode. ICM-42605, with its 6-axis integration, enables manufacturers to eliminate the costly and complex
selection, qualification, and system level integration of discrete devices, guaranteeing optimal motion performance for consumers.

# Usage
> ICM42605::begin(TwoWire &bus, ICM42605_Address_t slaveAddress, bool reset);  
Address of ICM42605 accel/gyro when ADO = LOW. If High, 0x69

# Key Features and Benefits  
1. ICM42605 and ICM42688  
2. XMC1100 (ARM® Cortex™-M0 based)  
3. On-board J-Link Lite Debugger (Realized with XMC4200 Microcontroller)  
4. Power over USB (Micro USB), ESD and reverse current protection

# Installation
## Integration of XMC in Arduino IDE  
> Please note that base of the Sensors 2GO is the XMC 2Go from Infineon. Therefore, please install (if not already done) also the XMC-for-Arduino implementation and choose afterwards XMC2Go from the Tools>Board menu in the Arduino IDE if working with this evaluation board.  
ICM42605/ICM42605 uses I2C library in the **Wire** folder of the XMC1100 library. If other microcontroller is used in place of XMC1100, please change the Wire folder accordingly.
## Integration of Library
> Please download this repository from GitHub  

# API
> Please check [here](https://github.com/PhysHub/ICM42605-Sensor-Data-Acquisition/blob/main/IMU/doc/html/index.html) for API info.

# Data acquisition with Python
> Please check [the DAQ link]() for Python scripts for supporing sensor data acquisition.

# Board Information, Datasheet and Additional Information  
> A PDF summarizing the features and layout of the 3D magnetic sensor 2GO board is stored on the Infineon homepage [here](https://www.infineon.com/dgdl/Infineon-3D%20Magnetic%20Sensor-PB-v03_00-EN.pdf?fileId=5546d46261d5e6820161e7571b2b3dd0). The datasheet for the ICM42605 can be found [here](https://invensense.tdk.com/download-pdf/icm-42605-datasheet/) 

