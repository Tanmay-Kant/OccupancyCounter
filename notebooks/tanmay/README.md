# OccupancyCounter

## Week 1-2 (2/5 AND 2/13)

### IDEATION -> PROPOSAL -> RESEARCH

### Objective of the Week:
The goal these weeks was to identify a significant problem in the field of 
building management systems that our project could address, focusing on 
enhancing efficiency and sustainability.

### Tasks Accomplished:
#### TANMAY
Conducted a comprehensive review of common issues faced in building 
management, especially in HVAC systems.
Identified the inefficiencies in energy consumption as a critical area 
where improvements could be significantly impactful.
Collaborated with project partners to define the scope and objectives of 
our project, aiming to develop a solution that could integrate easily into 
existing systems.

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

#### TANMAY
Collaborated with Aryan and Ashwin to finalize our project concept. We 
decided to design an occupancy counter that uses Time of Flight sensors to 
determine the number of people in a room. This device would help manage 
HVAC systems more efficiently by providing live data on room occupancy.
Discussed and documented the problem statement, which emphasizes the need 
for energy efficiency in large building environments where HVAC systems 
often waste energy by heating or cooling unoccupied or partially occupied 
spaces.
Outlined the solution where our project would utilize Time of Flight 
Sensor Modules for detecting room occupants. We planned to either use one 
module split between two zones or two modules to determine entry and exit, 
with a WiFi-enabled Arduino Board processing the data.
Prepared an initial sketch of our project’s technical approach, including 
the hardware setup and the software logic that would drive the data 
processing and user interface.

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

#### TANMAY
Participated in the design review meeting to discuss various sensor 
technologies and selected the Time-of-Flight sensor due to its accuracy 
and reliability for precise people counting.
Initiated discussions on the integration of hardware with the software for 
seamless data transmission.
I contributed to shaping the discussion towards practical and 
implementable solutions that align with our project goals.

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

#### TANMAY
I soldered and set up the breadboards to ensure that our sensors could be 
accurately tested in their designated zones.
Collaborated on the initial creation of the wiring diagrams, laying the 
groundwork for stable and efficient electronic connections.

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

#### TANMAY
Successfully attached the sensor systems to the doorways, considering 
environmental factors and ensuring stable installation.
Finalized and refined our wiring schematics, ensuring all connections were 
properly managed and secure.
Began considerations for protective enclosures to safeguard our electronic 
systems.

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

#### TANMAY
Completed the physical setup of all electronic components, ensuring they 
were all connected correctly and functioning as expected.
Began exploring software integration techniques, focusing on data 
acquisition and real-time processing.

### Goals for the Following Week:
Complete the hardware setup and begin intensive software development.
Focus on developing efficient algorithms for data processing and display.

## Week 8 (4/1)
### Objective of the Week:
The goal for this week was to finalize the hardware setup and begin 
developing the software that would handle sensor data processing and 
integration with our digital display.

### Tasks Accomplished:

#### TANMAY
Completed the final touches on our hardware setup, ensuring all components 
were securely installed and operational.
Began software development, writing initial codes for sensor data 
ingestion and processing.
Conducted valuation of noise from a full field of view versus two zones, 
and found that using thresholds, noise could be eliminated.
Collaborated with Ashwin on planning the digital display integration.

#### Two modules on either side of door providing full FOV
<img width="623" alt="image" 
src="https://github.com/Tanmay-Kant/OccupancyCounter/assets/70791179/16bacc0a-e3f6-4910-830e-f5435622dacf">

#### Single module on one side of door
<img width="623" alt="image" 
src="https://github.com/Tanmay-Kant/OccupancyCounter/assets/70791179/21669979-7ace-4efb-8eeb-4b9dd923643d">

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

#### TANMAY
Developed the core logic for processing sensor data, ensuring the system 
accurately interprets signals from the Time-of-Flight sensors to determine 
room occupancy.
Integrated the processed data with our digital display system, allowing 
for real-time updates of the occupancy count visible on the user 
interface.
Conducted initial tests to validate the accuracy of the data flow from 
sensors to display.

#### Raw Sensor Data Plot
<img width="622" alt="image" 
src="https://github.com/Tanmay-Kant/OccupancyCounter/assets/70791179/75f807ed-7e14-47ac-b7d9-bc50ac5b4498">

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

#### TANMAY
Engaged in intensive debugging sessions to iron out issues found during 
initial tests, focusing on timing errors and data misinterpretations.
Optimized the software for better performance and efficiency, reducing 
latency in data processing and improving responsiveness.
Prepared for system integration testing by setting up scenarios to test 
the software with actual hardware in real-time.

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

#### TANMAY
Conducted extensive testing, including stress tests and edge case 
analysis, to ensure the system accurately counts under various conditions.
Identified and resolved final issues related to sensor sensitivity and 
signal processing, ensuring the system’s readiness for demonstration.
Finalized the presentation details and practiced the demonstration 
sequence to ensure a smooth presentation flow.

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

#### TANMAY
Successfully presented our project to an audience possibly consisting of 
peers, professors, and industry professionals, showcasing the functional 
occupancy counter.
Highlighted key aspects of our design, the challenges we overcame, and the 
technical specifications of our solution.
I engaged with the audience during Q&A, providing insights into our 
development process and considering feedback for future improvements.

### Goals for the Following Week:
Reflect on the feedback received during the presentation to identify areas 
for further improvement and potential extensions of the project.
Document the project outcomes, including lessons learned and potential 
research areas, for submission to our academic advisor.



