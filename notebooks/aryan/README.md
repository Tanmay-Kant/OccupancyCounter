# OccupancyCounter

## Week 1-2 (2/5 AND 2/13)

### IDEATION -> PROPOSAL -> RESEARCH

### Objective of the Week:
The goal these weeks was to identify a significant problem in the field of 
building management systems that our project could address, focusing on 
enhancing efficiency and sustainability.

### Tasks Accomplished:

#### ARYAN
Explored options such as energy optimization through Smart HVAC systems, 
and lighting control. Considered using Internet of Things (IoT) sensors to 
monitor weather forecasts, indoor air quality, etc to optimize HVAC 
operations. Also looked at the possibility of building a smart lighting 
system that adjusts artificial light based on natural light, and 
incorporate the concept of daylight harvesting. 

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

#### ARYAN
Worked with my teammates to finalize our project idea. After sifting 
through different ideas, evaluating pros and cons, and the rigor and 
feasibility of the projects, we came to the final conclusion of creating a 
room “occupancy counter”. The reason for this project was consistent with 
our original vision of working on efficiency in building management 
systems. Our innovation aims to optimize HVAC systems by providing 
real-time occupancy data. By using Time of Flight sensors, we knew that we 
could come up with a simple, yet effective solution to deal with the 
widespread problem of loss of energy due to heating or cooling unoccupied 
spaces. Our early stage ideas included using either one module for two 
zones or two modules to track entry and exit, with a WiFi-enabled Arduino 
Board processing the collected data. 

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

#### ARYAN
We had discussions about the design of our early stage project. We decided 
on the Time of Flight sensor for a variety of reasons, including price, 
practicality, specifications, and reliability. I started to take a look 
into understanding the higher-level goals and the basic requirements for 
our project, as well as making sure that all the work we had done so far 
was within the rules for our senior design project. 

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

#### ARYAN
Ashwin and I began work on the wiring schematics. We began taking a look 
at various sensors and seeing possible connections and compatibility with 
our leading microcontroller choice of the ESP32866.

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

#### ARYAN
Our whole group worked together for this week’s objective of figuring out 
how to safely physically attach the electron components to the door 
frames. We together made checklists of various ideas from a safety 
standpoint as well as a efficacy perspective. The placement of the sensors 
was finetuned, and we finalized our wiring schematics. Started to develop 
ideas about our 3D-printed encasing as well. 

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

#### ARYAN
Helped Tanmay with the physical setup of the hardware pieces and 
electronic parts. We then began to figure out ways to seamlessly integrate 
our software side into the project. Ashwin and I researched the way that 
our ToF sensor collected and transmitted data, and figured out how to 
change our occupancy count based off our established zone-detection idea.

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

#### ARYAN
With our hardware largely finalized, safe, and secure, we continued work 
on the software aspect. I had thought of some edge cases that we needed to 
address, and we proceeded with the 4-zone idea. With the challenge of 
extra authorization needed to use university WiFi, we decided to utilize a 
hotspot for our initial testing, to make it universally accessible by 
anyone with a hotspot connection.

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

#### ARYAN
We worked to finalize the logic and architecture for the way that we 
ingested and processed sensor data. As we continued to code and debug our 
programs, we began conducting preliminary tests to see how the data was 
being transmitted and with what frequency and refresh time it was running 
at.

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

#### ARYAN
As expected with any software coding program, we ran into errors during 
our first testing phases. We switched off parts that we wrote to our team 
members to gain a new perspective and worked through it iteratively to 
debug it. Furthermore, we began optimizing the software to reduce latency.

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

#### ARYAN
With our software in better shape, we began to hone in on our edge cases, 
as well as further extensive testing. Our basic functionality was working 
properly, but w needed to do edge cases for different conditions, such as 
partial movement and rapid movement, as well as stress testing to ensure 
that the system as a whole held up beyond our initial unit tests. We then 
began to prepare our slides and our presentation for demonstration.

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

#### ARYAN
With our project working as intended, we now needed to showcase it and 
explain it effectively. After many iterations of project feedback and 
improvement, we presented to our peers and professors, where we talked 
through the process of ideation, brainstorming, challenges, solutions, and 
future steps.

### Goals for the Following Week:
Reflect on the feedback received during the presentation to identify areas 
for further improvement and potential extensions of the project.
Document the project outcomes, including lessons learned and potential 
research areas, for submission to our academic advisor.
