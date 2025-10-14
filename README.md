
# Project Rainy Cloud

Project Rainy Cloud is an interdisciplinary independent-study that combines atmospheric physics and physical computing to build a self-contained "weather box" capable of forming a visible cloud and inducing precipitation on command.

See the full proposal in `proposal.md` for background, theory, and timeline.

## Overview

The goal is to create a transparent, sealed enclosure with controllable temperature and humidity gradients, an ultrasonic nebulizer for moisture and seeding, and a small microcontroller to monitor and control the system. The project demonstrates cloud formation, nucleation, droplet growth, and (ultimately) raindrop formation at tabletop scale.

Key components and subsystems:

- Temperature gradient system (Peltier elements / heater)
- Humidity and seeding (ultrasonic mist makers / nebulizers)
- Monitoring (temperature, relative humidity, and particle sensors)
- Control (Arduino / ESP32 for data logging and actuation)
- Transparent enclosure (acrylic/PETG tube or box)

## Proof-of-Concept (POC)

Early POC work (Lab 1) validated the parts assembly and showed that ultrasonic mist modules can generate visible fog inside a small cylinder, but the initial setup did not produce sustained condensation or precipitation. Observations from Lab 1 highlighted the need for:

- Better sealing or closed-enclosure designs (to prevent vapor loss)
- Active temperature gradients (cold top / warm bottom) to encourage adiabatic cooling
- Sensors for quantitative data (RH sensor, particle sensor)

See `Lab-reports/Lab-1/Lab-1.md` for the full write-up of the first experiment.

## Parts (POC parts list summary)

The project maintains a growing parts list under `Lab-reports/Lab-1/POC-Parts-list.md` and `Documents/parts-research.md`.

Typical POC items include:
- Ultrasonic mist maker modules (20 mm atomizers)
- Logic-level MOSFETs for switching
- 12 V DC power supply (2–3 A)
- Clear plastic sheet or acrylic tube for the enclosure
- Shallow tray or container for the water reservoir
- Arduino Uno or ESP32 microcontroller

## How to reproduce the POC

1. Assemble a shallow tray with an ultrasonic mist module submerged in water.
2. Place a clear plastic cylinder or short acrylic tube over the mist module to act as a simple enclosure.
3. Power the mist module (typically with a 12V supply and a MOSFET switch controlled from an Arduino/ESP32 if you want programmatic control).
4. Observe fog formation and experiment with water temperature and enclosure height.

For wiring and detailed part links, see `Lab-reports/Lab-1/POC-Parts-list.md`.

## Timeline and deliverables

This independent study follows a semester-style timeline in the proposal (see `proposal.md`) with deliverables that include:

- A working plexiglass cloud chamber demonstrating visible cloud formation and (eventually) precipitation
- Technical documentation and commented code for the control system
- A written lab report and final research paper analyzing the conditions that enable precipitation
- A demonstration video showing the system in operation

## Notes on safety and ethics

This project uses common hobby electronics and consumer nebulizers. Avoid using hazardous chemicals or cloud-seeding agents (e.g., silver iodide, dry ice) without proper supervision and approvals. Follow basic electrical safety when working with 12 V supplies and mains-powered adapters.

## Where to find more

- Proposal: `proposal.md`
- Lab 1 report: `Lab-reports/Lab-1/Lab-1.md`
- Parts research: `Documents/parts-research.md`
- POC parts list: `Lab-reports/Lab-1/POC-Parts-list.md`

If you'd like, I can expand this README with circuit diagrams, example Arduino code, wiring photos, or a bill-of-materials with purchase links.

```
This is an interdisciplinary project about creating precipitation in the air. For more information, please check out the proposal [proposal](/proposal.md). 

This project involves Physical Computation and Physics. 

