# Comprehensive Proposal for Independent Study Interdisciplinary Course

## Project Rainy Cloud by Behlul Vardal

# Overview

This independent study merges the disciplines of Physics and Media Computation to create a functioning cloud chamber that demonstrates actual rainfall within a self-contained box that serves as a controlled environment. The project will apply atmospheric physics principles through custom-built hardware and sensor systems.

## Project Summary (for a Non-Specialist Audience

This independent study, "Project Rainy Cloud," aims to build a self-contained, transparent "weather box" to demonstrate the fundamental principles of cloud formation and rainfall. The primary objective is to create a visible cloud within the sealed enclosure and then successfully induce precipitation, or rain, on command. To achieve this, the project will merge physics with media computation. A heating element at the bottom and a cooling system at the top will mimic the temperature differences in our atmosphere that cause air to rise. An ultrasonic mister will create a humid environment, and sensors will monitor the conditions inside the box. These components will be controlled by a small computer (like an Arduino), allowing for precise adjustments. By introducing microscopic "seed" particles into the cloud, the project will demonstrate how water vapor condenses into droplets heavy enough to fall as rain, making the entire weather cycle visible in miniature.

## Physics Research Component 

I will research and experiment with methods to create a visible cloud and induce actual rainfall within a controlled environment. This research will explore cloud formation mechanisms, condensation processes, and precipitation dynamics.

Cloud seeding is a weather modification technique where particles (typically silver iodide, dry ice, or salt) are dispersed into clouds to provide condensation nuclei. These particles attract water vapor molecules, allowing them to mix into larger droplets that eventually become heavy enough to fall as precipitation.

For this project, I propose adapting this concept to a laboratory scale using ultrafine water droplets from an atomizer as seeding agents. These microscopic droplets will serve as condensation nuclei within an artificially created cloud, attracting ambient water vapor to form larger droplets that eventually become heavy enough to fall as visible raindrops.

### **Theoretical Framework**

The experimental design will leverage several fundamental atmospheric physics principles:

1. Temperature Differential: Through creating temperature gradients within the enclosure (warmer at bottom, cooler at top), I can cause the induction of convection currents that mimic atmospheric conditions.  
2. Adiabatic Cooling: As warm, moist air rises in the chamber, it naturally expands and cools, replicating a part of the process in natural cloud formation.  
3. Relative Humidity Manipulation: Through the control of humidity levels and temperature, I can create supersaturated conditions necessary for precipitation.  
4. Nucleation and Droplet Formation: The introduced atomized water particles will serve as condensation nuclei, demonstrating the physics of droplet growth and coalescence.

## Media Computation Implementation

To create and control this environment, I will design and build:

1. Temperature Gradient System:  
   * Peltier cooling elements mounted at the top of the enclosure.  
   * Resistive heating elements at the base.  
   * Arduino-controlled temperature regulation circuit with feedback.  
   * Multiple temperature sensors placed at different heights to monitor the gradient.  
2. Humidity Generation and Control:  
   * Ultrasonic humidifier to create initial cloud conditions.  
   * Precision-controlled ultrasonic atomizer for introducing seed particles.  
   * DHT22 humidity sensors at multiple locations.  
3. Enclosure Design:  
   * Clear plexiglass construction for visibility.  
   * Sealed chamber with controlled air intake/exhaust.  
   * Internal mounting system for sensors and actuators.  
   * Possible inclusion of a small fan for initial air circulation.  
4. Monitoring and Control System:  
   * Arduino or Raspberry Pi control system.  
   * Real-time data logging of temperature, humidity, and pressure.  
   * User interface for adjusting parameters.  
   * LED lighting optimized for visualizing both the cloud and falling raindrops.

## Key Deliverables and Research Outcomes

1. IO Hardware Creation  
-  A functioning plexiglass cloud chamber demonstrating:  
  - Visible cloud formation confined to the upper portion of the chamber  
  - Actual raindrop formation and precipitation  
  - Control over cloud density and precipitation rate  
- Technical documentation of the physical computing implementation  
- Process documentation showing development stages

2. Analysis  
- Physics lab report with data analysis  
- Research findings on:  
  -  Optimal conditions for cloud formation and precipitation in a controlled environment  
  - Effectiveness of different seeding methods at laboratory scale  
  - Relationship between temperature gradients and precipitation dynamics  
- Video demonstration of the working system

## Timeline

**Weeks 1-3: Foundational Research and Initial Design**

- Conduct in-depth precedent research on atmospheric physics, cloud seeding, and enclosure design.  
- Develop initial schematics for the enclosure and the electronic control system.  
- Source and procure all primary components.  
- Weekly Check-in: Present research findings and initial designs to the advisor for feedback.

**Weeks 4-6: Prototyping and System Assembly**

- Construct the physical enclosure and integrate the primary hardware (heating, cooling, sensors).  
- Assemble and test the basic electronic circuits on a breadboard.  
- Begin writing and debugging the foundational code for sensor reading and component control.  
- Weekly Check-in: Demonstrate progress on the physical build and basic electronic functionality. Discuss any immediate challenges.

**Weeks 7-10: Iterative Testing and Data Collection**

- Begin the experimental phase. The primary goal is to achieve a stable, visible cloud.  
- Systematically test different variables (temperature gradient, humidity levels, initial air circulation) and document every attempt in the research journal.  
- Begin testing various "seeding" methods and nozzles (e.g., standard atomizer vs. medical nebulizer) to investigate their effect on droplet coalescence.  
- Weekly Check-in: Review experimental data and video of tests with the advisor. Strategize next steps and potential modifications based on results.

**Weeks 11-13: Analysis and Refinement**

- Analyze the collected data to identify the most effective methods and parameters.  
- Refine the system based on experimental findings for more reliable results.  
- Begin outlining and drafting the final research paper, focusing on the methodology, results (including failures), and discussion sections.  
- Weekly Check-in: Submit the draft outline and initial findings of the research paper for advisor feedback.

**Weeks 14-15: Final Documentation and Presentation**

- Complete the final research paper, incorporating analysis and conclusions drawn from the entire process.  
- Film and edit the final video demonstration, which will narrate the project's goals, the process, the challenges faced, and the final results.  
- Finalize all technical documentation (schematics, commented code).  
- Final Presentation: Present the project, key findings, and final deliverables to the advisor

## Evaluation Assessment and deliverables 

This rubric is designed to assess the quality of the research process, documentation, and critical thinking, rather than the binary success or failure of the final device.

| Category | Weight | Description of a Successful Outcome |
| :---- | :---- | :---- |
| Research Journal & Experimental Process | 40% | The journal (lab notebook) is meticulously maintained, providing a thorough record of the entire project. It includes initial research, design iterations, detailed procedures for each experiment, raw data, qualitative observations, and critical reflections on both successful and failed attempts. The quality of the scientific investigation is evident. |
| Final Research Paper | 20% | The paper is written in a formal, academic style. It clearly presents the project's theoretical background, documents the methodology in a replicable manner, analyzes the collected data, and provides a thoughtful discussion of the results. The paper demonstrates a deep understanding of the topic by analyzing why certain outcomes occurred. |
| Weekly Progress & Professional Engagement | 20% | The student is consistently prepared for weekly check-ins with the advisor, presenting clear updates, data, and specific questions. The student actively engages with feedback and demonstrates a professional and organized approach to managing the independent study. |
| Final Deliverables (Video & Technical Docs) | 20% | The video demonstration clearly communicates the project's journey, methods, and findings. The technical documentation (schematics, code) is clean, well-commented, and accurately reflects the final state of the project, ensuring the work is understandable and replicable. |
| Total | 100% |  |

# Annotated Bibliography

**Beals Science. (2023, May 12). Cloud in a bottle\! \[Video\]. YouTube. [https://www.youtube.com/watch?v=8mK9TLnXR7s](https://www.youtube.com/watch?v=8mK9TLnXR7s)** 

This short video provides a quick and clear demonstration of creating a cloud in a bottle using pressure. By pressurizing a bottle containing a small amount of volatile liquid and then rapidly releasing that pressure, the sudden drop in temperature from adiabatic cooling causes the vapor to condense into a visible cloud. It serves as a simple and effective illustration of a fundamental principle of meteorological cloud formation.

**C.T.R. Wilson's Cloud Chambers. (n.d.). Cloud chambers. Retrieved June 17, 2025, from [https://www.cloudchambers.com/](https://www.cloudchambers.com/)**

This website offers a detailed historical and technical overview of the cloud chamber, an invention pivotal to particle physics. It explains the principles behind both expansion and diffusion cloud chambers, detailing how they create a supersaturated vapor environment to reveal the tracks of ionizing radiation. The site serves as an excellent educational resource for understanding the construction, function, and historical importance of these scientific instruments.

**Harvard Natural Sciences Lecture Demonstrations. (2012, November 19). Cloud chamber \[Video\]. YouTube. [https://youtu.be/e3fi6uyyrEs](https://youtu.be/e3fi6uyyrEs)**

This video from Harvard University demonstrates a diffusion cloud chamber used to visualize the paths of ionizing radiation. By creating a supersaturated environment of alcohol vapor cooled by dry ice, the chamber makes the trails of subatomic particles (like alpha and beta particles) visible as they ionize the vapor, causing it to condense. This source explains a different purpose for a "cloud chamber": not for studying weather, but for making the invisible world of particle physics visible.

**Jefferson Lab. (2022, August 1). Cloud in a bottle demo \[Video\]. YouTube. [https://youtube.com/watch/7DqH3Z33uKk](https://youtube.com/watch/7DqH3Z33uKk)**

This demonstration from Jefferson Lab shows the classic "cloud in a bottle" experiment using isopropyl alcohol. The video illustrates how increasing the pressure inside the bottle and then quickly releasing it causes a rapid temperature drop. This cooling forces the alcohol vapor to condense into a visible cloud, highlighting the roles of pressure, temperature, and condensation nuclei in cloud formation.

**Mills, A. (2016, November 28). A cloud in a box: Mixing aerosols and turbulence. Michigan Technological University. [https://www.mtu.edu/news/2016/11/cloud-box-mixing-aerosols-turbulence.html](https://www.mtu.edu/news/2016/11/cloud-box-mixing-aerosols-turbulence.html)**

This article from Michigan Technological University details a large-scale, advanced cloud chamber used for atmospheric research. The "Pi Cloud Chamber" allows scientists to control conditions like turbulence and introduce various aerosols to study their effects on cloud formation and behavior. This source provides a look into the professional, scientific application of creating controlled clouds to better understand complex weather phenomena and the impact of pollutants.

**NileRed. (2017, March 25). Making IODINE cloud in box \[Video\]. YouTube. [https://youtu.be/3cvUXW\_\_QZ0](https://youtu.be/3cvUXW__QZ0)**

This video visually demonstrates the concept of sublimation using iodine crystals. The creator heats solid iodine in a sealed glass container, causing it to turn directly into a dense, purple vapor, effectively creating a "cloud" of iodine gas. This source is useful for understanding an alternative method of cloud formation—sublimation—where a substance transitions directly from a solid to a gas phase.

**Roach, J. (n.d.). Cloud-chamber bowls & Harry Partch. JohnRoach.net. Retrieved June 17, 2025, from [https://johnroach.net/cloud-chamber-bowls-harry-partch/](https://johnroach.net/cloud-chamber-bowls-harry-partch/)**

This source explores a unique intersection of science and music through the "Cloud-Chamber Bowls," a musical instrument created by composer Harry Partch. The article explains that the instrument is constructed from large glass containers originally used for scientific cloud chambers at a radiation laboratory. This provides a fascinating cultural and historical tangent, showing how scientific apparatus can be repurposed for artistic expression.

**The Action Lab. (2018, March 2). How to build a cloud chamber\! \[Video\]. YouTube. [https://youtu.be/pewTySxfTQk](https://youtu.be/pewTySxfTQk)**

This instructional video provides a step-by-step guide for constructing a simple diffusion cloud chamber using readily available materials like a fish tank, felt, isopropyl alcohol, and dry ice. The host clearly explains how to create a supersaturated vapor that reveals the tracks of background cosmic radiation. This is a practical, hands-on resource for anyone interested in building their own particle detector.

### **AI Acknowledgment**

Portions of this proposal were refined and edited with the assistance of AI-based writing tools (ChatGPT-4.1, and Gemini 2.5 Pro), which provided feedback, organizational suggestions, and language improvements throughout the drafting process.