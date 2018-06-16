# Line_following_LSA08


# Abstract
The idea is to make a bot that moves by following a black line on white surface with the help of an Advanced Auto-Calibrating Line Sensor (LSA08). Bot design consists of 3 wheels- 2 plastic wheels driven by DC motors and a motor driver and 1 castor wheel.
# Team Members
<ul>
<li ><a href="https://www.facebook.com/prrachiagarwal2230473">Prachi Agarwal</a></li>
<li><a href="https://www.facebook.com/riya.bhalla.587">Riya Bhalla</a></li>
</ul>

# Mentors
<ul>
<li><a href="">Nitin Yadav</a></li>
<li><a href="https://www.facebook.com/shubhanshu.agarwal.750">Shubhanshu Agarwal</a></li>
<li><a href="https://www.facebook.com/shashwat.agrawal.58">Shashwat Agarwal</a></li>
</ul>

# Pre-Requisites
 
 <b>Hardware:</b>
<ol>
<li>Arduino UNO/MEGA</li>
<li>Advanced Auto-Calibrating Line Sensor (LSA08) </li>
<li>Motor Driver L298N</li>
  <li>DC Motor-2 </li>
<li>LiPo battery 11.1V</li>
  <li>Ball Castor</li>  
  <li>Plastic Wheel-2</li>
  <li>USB B Type Cable</li>
<li>7805</li>
<li>Jumper Wires</li>
<li>Breadboard</li>
  <li>DST</li>
<li>Wooden Base (dia.52cm)</li>
<li>L Channels</li>
<li>Motor Mount</li>
<li>Some 3d printed Parts</li> 
 
</ol>

 <b>Software:</b>
 
•	<a href ="https://www.arduino.cc/en/main/software">Arduino IDE</a>
  
 # Description
 <ol>
<li> <b>LSA08</b>-LSA08 (Advance Line Following Sensor Bar) consist of 8 sensors pair. LSA08 is typically used for embedded system or robots for line following task. The specially selected wavelength of super bright green LED as the sensor’s transmitter enables LSA08 to operate on various different colour surfaces. LSA08 is capable to operate on surface with colour of Red, Green, Blue, White, Black, Gray and possibly other colours with distinct brightness different. LSA08 has several different output modes, for the convenience of use for any system. Namely, the digital output port (8 parallel output line), the serial communication port (UART) and the analog output port.

        <h6>Features</h6>
              <ul>
           <li>8 sensor pairs spaced 16mm.
           <li>12V input power
           <li>On board Mode and Select button for instant configuration of LSA08
           <li>3 Different output mode (digital output port, UART output port, analog output port)
           <li>LCD display unit showing 8 sensors analog value with bar chart and line position.
           <li>Simple Auto-Calibration function to the line following surface. 
           <li>Junction Pulse (JPULSE) for detecting junction crossing and junction counting
           <li>Power polarity protection
           <li>Low current consumption (typically 26mA)
           <li>Works on glossy or reflective surface
           <li>Refresh rate up to 200Hz.
             </ul>
        </li>
 
 <li>The overall processes of line-following are: detect position of the line, adjust motor speed to align the line at the center, and repeat.
 <li>We have used PID mechanism and weighted sum to process the readings provided by the sensor.

     </ol>
     
 
 # Useful Links
 To better understand the working of LSA08 refer the links below:
 <ul>
 <li>https://tutorial.cytron.io/2015/07/31/line-following-robot-using-lsa08-in-digital-mode/
  <li>https://www.youtube.com/watch?v=qiH-9bH5wMg
   </ul>


# Instruction on using source code
Code provided above is to be uploaded in arduino.

# Results  
<ul>
 
 </ul>

# Future scope
<ul>
</ul>
  
