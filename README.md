# Line_following_LSA08


# Abstract
The idea is to make a bot that moves by following a black line on white surface with the help of an Advanced Auto-Calibrating Line Sensor (LSA08). Bot design consists of 3 wheels- 2 plastic wheels driven by DC motors and a motor driver and 1 castor wheel.
# Team Members

* [Prachi Agarwal](https://www.facebook.com/prrachiagarwal2230473)
* [Riya Bhalla](https://www.facebook.com/riya.bhalla.587)


# Mentors

* [Nitin Yadav]()
* [Shubhanshu Agarwal](https://www.facebook.com/shubhanshu.agarwal.750)
* [Shashwat Agarwal](https://www.facebook.com/shashwat.agrawal.58)


# Pre-Requisites
 
 <b>Hardware:</b>

1. Arduino UNO/MEGA</li>
1. Advanced Auto-Calibrating Line Sensor (LSA08) </li>
1. Motor Driver L298N</li>
1. DC Motor-2 </li>
1. LiPo battery 11.1V</li>
1. Ball Castor</li>  
1. Plastic Wheel-2</li>
1. USB B Type Cable</li>
1. 7805</li>
1. Jumper Wires</li>
1. Breadboard</li>
1. DST
1. Wooden Base (dia.52cm)
1. L Channels
1. Motor Mount
1. Some 3d printed Parts 


 <b>Software:</b>
 
•	[Arduino IDE](https://www.arduino.cc/en/main/software)
  
 # Description
 
1. <b>LSA08</b>-LSA08 (Advance Line Following Sensor Bar) consist of 8 sensors pair. LSA08 is typically used for embedded system or robots for line following task. The specially selected wavelength of super bright green LED as the sensor’s transmitter enables LSA08 to operate on various different colour surfaces. LSA08 is capable to operate on surface with colour of Red, Green, Blue, White, Black, Gray and possibly other colours with distinct brightness different. LSA08 has several different output modes, for the convenience of use for any system. Namely, the digital output port (8 parallel output line), the serial communication port (UART) and the analog output port.

       '''
       ######Features
              
           * 8 sensor pairs spaced 16mm.
           * 12V input power
           * On board Mode and Select button for instant configuration of LSA08
           * 3 Different output mode (digital output port, UART output port, analog output port)
           * LCD display unit showing 8 sensors analog value with bar chart and line position.
           * Simple Auto-Calibration function to the line following surface. 
           * Junction Pulse (JPULSE) for detecting junction crossing and junction counting
           * Power polarity protection
           * Low current consumption (typically 26mA)
           * Works on glossy or reflective surface
           * Refresh rate up to 200Hz.
       '''      
        
 
 1. The overall processes of line-following are: detect position of the line, adjust motor speed to align the line at the center, and repeat.
 1. We have used PID mechanism and weighted sum to process the readings provided by the sensor.

     
     
 
 # Useful Links
 To better understand the working of LSA08 refer the links below:
 
 * https://tutorial.cytron.io/2015/07/31/line-following-robot-using-lsa08-in-digital-mode/
 * https://www.youtube.com/watch?v=qiH-9bH5wMg
   


# Instruction on using source code
Code provided above is to be uploaded in arduino.

# Results  
* The Team has sucessfully learned the basics of making a line following robot.

# Future scope
* In  this era of technology and innovation, Robotics has got quiet a huge scope and making a robot follow a line is very basic and important to excel in this field.

  
