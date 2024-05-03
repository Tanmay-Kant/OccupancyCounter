# OccupancyCounter

## Week 1-2 (2/5 AND 2/13)

### IDEATION -> PROPOSAL -> RESEARCH

### Objective of the Week:
The goal these weeks was to identify a significant problem in the field of 
building management systems that our project could address, focusing on 
enhancing efficiency and sustainability.

### Tasks Accomplished:

#### ASHWIN
After having a review of common issues faced in building management with 
my group, we found that there were inefficiencies in energy consumption 
when dealing with HVAC systems. We found that this could be an area that 
we could try to improve and make more efficient, as a lot of energy is 
being wasted. I worked with my group in order to define the scope and 
objectives of this project to find a solution that could coexist with the 
HVAC systems.


### Goals for the Following Week:
Meet with project partners to finalize the project concept and begin 
outlining the initial approach for the occupancy counter.
Start gathering resources and conducting preliminary research on suitable 
technologies that can be utilized for the project.

## Week 3 (2/19)

### Objective of the Week:
The primary goal for this week was to solidify our project idea with my 
team members Aryan and Ashwin. We aimed to develop a concept that could 
address inefficiencies in HVAC systems within buildings, particularly 
focusing on adapting HVAC performance based on actual room occupancy.

### Tasks Accomplished:

#### ASHWIN
We looked into different parts in order to design an occupancy counter, 
and decided that implementing a Time of Flight sensor to determine the 
number of people in a room seems like the best course of action. We 
believe this part would help manage HVAC systems effectively because the 
sensor is able to find live data on room occupancy. My group and I 
outlined the solution for our project to utilize Time of Flight Sensor 
Modules to detecting room occupants. From our discussions and research, we 
figured the best way is to either use one module split between two zones 
or two separate modules in order to determine entry and exit of a person. 
We also think the best way to use these sensors is with a WiFi-enabled 
Arduino Board to help with data processing.

### Goals for the Following Week:
Begin the technical design, focusing on the selection of sensors and the 
development of the initial wiring and circuit diagrams.
Start drafting the software architecture, including how data from the 
sensors will be processed and displayed on a web interface.
Plan the first prototype assembly, considering the physical layout and the 
integration of components.

## Week 4 (2/26)
### Objective of the Week:
The primary objective this week was to engage in a design review with our 
professors and teaching assistants, discussing and defining the 
theoretical logic behind our sensor for the occupancy counter project.

#### Theoretical Design
<img width="349" alt="image" 
src="https://github.com/Tanmay-Kant/OccupancyCounter/assets/70791179/d7ba0979-f45a-4f51-a0ad-c5deda922172">

#### Logical Design
<img width="353" alt="image" 
src="https://github.com/Tanmay-Kant/OccupancyCounter/assets/70791179/656b7f40-5574-4952-bcce-2dd1ed6cf407">


### Tasks Accomplished:

#### ASHWIN
We completed our design review. Our group discussed various sensor 
technologies and selected the Time-of-Flight sensor due to its accuracy 
and reliability for detection of zones to see whether a person is entering 
or exiting a room. We also went over the hardware-software integration in 
order to transmit the sensor data. I was responsible for the subsystem 
overviews that we decided to take on as well as why we selected certain 
high-level requirements for this project.

### Goals for the Following Week:
Begin preparing the breadboards by soldering long header pins and 
arranging the components to avoid interference from the walls.
Start drafting the wiring schematics in collaboration with Ashwin and 
Aryan.

## Week 5 (3/4)

### Objective of the Week:
The goal for this week was to start the physical assembly of our project, 
focusing on the breadboard setup and initial wiring diagram preparations.

### Tasks Accomplished:

#### ASHWIN
I started working on the wiring schematics with Aryan. Since we decided to 
use the Time of Flight Sensors, we started working on the design of the 
internal connections of an ESP8266 microcontroller. 

### Goals for the Following Week:
Utilize the Spring Break to plan ahead and review the project’s progress.
Prepare for the installation of electronic components in a real-world 
environment, focusing on safety and functionality.

## Week 6 (3/18)

### Objective of the Week:
This week, the objective was to securely attach all electronic components 
to the doorways and to manage wiring effectively within our project setup.
#### Encasing
<img width="282" alt="image" 
src="https://github.com/Tanmay-Kant/OccupancyCounter/assets/70791179/2a4c5501-e73c-4479-a49e-a67c7baa435b">

#### Tasks Accomplished:

#### ASHWIN
Worked with both Aryan and Tanmay in order to attach the sensor systems to 
the doorways. We had to consider external factors, such as room size and 
conditions, in order to have the most stable installation possible. I 
finished working on the wiring schematics for the internal connections. We 
started to think about ideas for the enclosure and decided to start work 
on a 3D printed part in order to totally encase the internal connections 
for better stability of the project.

### Goals for the Following Week:
Start the full assembly of electronic components, integrating them with 
the previously established wiring systems.
Dive deeper into the software requirements and start outlining the 
necessary code to manage data collection and display.

## Week 7 (3/25)
### Objective of the Week:
To begin integrating our hardware setup with the software components, 
ensuring that the electronic components were fully functional and prepared 
for software integration.

### Tasks Accomplished:

#### ASHWIN
I started working on the software side of the project. I did research on 
how to implement the sensor code and figured out how to implement the 
timing of the zones in order to determine whether a person is entering or 
exiting a certain zone. Based on these timings I created a count that 
would change based on whether a person entered or exited a room. This 
count is to be displayed to a digital display through wifi. I started 
doing research for this process and will be the main thing I work on next 
week.

### Goals for the Following Week:
Complete the hardware setup and begin intensive software development.
Focus on developing efficient algorithms for data processing and display.

## Week 8 (4/1)
### Objective of the Week:
The goal for this week was to finalize the hardware setup and begin 
developing the software that would handle sensor data processing and 
integration with our digital display.

### Tasks Accomplished:

#### Two modules on either side of door providing full FOV
<img width="623" alt="image" 
src="https://github.com/Tanmay-Kant/OccupancyCounter/assets/70791179/16bacc0a-e3f6-4910-830e-f5435622dacf">

#### Single module on one side of door
<img width="623" alt="image" 
src="https://github.com/Tanmay-Kant/OccupancyCounter/assets/70791179/21669979-7ace-4efb-8eeb-4b9dd923643d">

#### ASHWIN
The room count has properly been set up in order to account for people 
entering and exiting a zone. We started working on edge cases in order to 
determine if they should count as a person who entered or exited a room. 
The main edge case we worked on was when. Person would enter the first 2 
zones, and then decide to turn around and not fully enter/exit the room. 
We broke the code down into 4 zones in order to account for this 
situation. In addition, I also was able to successfully transfer the room 
count to a digital display using WiFi setup. Setting a personal hotspot 
worked as well, satisfying our universal compatibility requirement.


### Goals for the Following Week:
Focus on refining the software logic to accurately process and display 
occupancy data.
Begin debugging preliminary software to enhance functionality and 
reliability.

## Week 9 (4/8)
### Objective of the Week:
The primary goal this week was to develop and refine the software logic 
that manages sensor data ingestion, interpretation, and communication with 
the display system.

### Tasks Accomplished:

#### Raw Sensor Data Plot
<img width="622" alt="image" 
src="https://github.com/Tanmay-Kant/OccupancyCounter/assets/70791179/75f807ed-7e14-47ac-b7d9-bc50ac5b4498">

#### ASHWIN
I helped conduct tests to see if the data flowing from the sensors was 
accurate, particularly on the digital display. Mostly spent debugging in 
order to have a proper update frequency to satisfy our 2nd high-level 
requirement.

### Goals for the Following Week:
Focus on comprehensive debugging of the software to identify and resolve 
any functional or logical errors.
Enhance the system’s reliability and performance through rigorous testing 
under various scenarios.

## Week 10 (4/15)
### Objective of the Week:
This week aimed to finalize the software development by focusing on 
debugging and optimizing the code to ensure robust and error-free 
performance.

### Tasks Accomplished:

#### ASHWIN
We debugged to find issues with our timing errors and data 
misinterpretations. The update frequency was not corresponding correctly, 
so we optimized the software for better performance. By reducing latency 
in data processing we were able to  improve the responsiveness of when the 
digital display would receive the updated room count.

### Goals for the Following Week:
Conduct thorough testing of the entire system, focusing on its ability to 
handle edge cases and high traffic scenarios.
Prepare for the final project demonstration by ensuring all components 
function seamlessly together.

## Week 11 (4/22)
### Objective of the Week:
The objective was to perform comprehensive testing of the occupancy 
counter system, identifying any issues in real-world scenarios and 
preparing for the project demonstration.

### Tasks Accomplished:

#### ASHWIN
We conducted testing on the edge cases, such as people running through a 
room, multiple people trying to enter a room, and people about to enter 
but turning around and leaving instead. After going through edge case 
analysis we resolved final issues related to sensor sensitivity and signal 
processing so we are ready for the demo and presentation. We created 
slides and presentation notes as well as practiced our demo. 

### Goals for the Following Week:
Finalize all preparations for the project presentation, ensuring all 
documentation is complete and up to date.
Review the entire project workflow and results to confidently present and 
discuss our findings and achievements.

## Week 12 (4/29)
### Objective of the Week:
To deliver a comprehensive presentation of our project, demonstrating the 
functionality of the occupancy counter and discussing the project’s impact 
and potential future developments.

### Tasks Accomplished:

#### ASHWIN
Our group presented our project to our audience and showcased the 
functional occupancy counter. We went through the key aspects of our 
design, the challenges we overcame, and the different specifications of 
our solution. We also discussed our purpose for creating such a project 
and what we hope this project becomes in the future. I was responsible for 
talking about our high-level requirements and the overall overview of the 
subsystems. I also mentioned what parts I was responsible for and helped 
answer questions.

### Goals for the Following Week:
Reflect on the feedback received during the presentation to identify areas 
for further improvement and potential extensions of the project.
Document the project outcomes, including lessons learned and potential 
research areas, for submission to our academic advisor.


