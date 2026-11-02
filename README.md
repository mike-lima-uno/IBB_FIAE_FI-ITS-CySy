# IBB FIAE FI-ITS-CySy

## Intro
This repository contains introductory exercises in cyber-physical systems.
The current examples use Arduino and circuits simulated with Wokwi.
Each folder represents an independent project.
The exercises start with the board's built-in LED.
Next, they cover external LEDs connected to digital pins.
The traffic-light example extends the practice to multiple LEDs.
The `.ino` files contain the Arduino code for each exercise.
The `diagram.json` files describe the simulated circuits.
The `wokwi-project.txt` files link to the projects on Wokwi.
Open an exercise folder to explore its files.
Use these examples for study and adapt them carefully.

## About Wokwi
Wokwi is an online simulator for electronics and microcontrollers.
It lets you build circuits and run code in a web browser.
You can experiment without connecting physical components.
Projects can include virtual boards, LEDs, resistors, and wires.
The simulator shows how a circuit behaves while the code runs.
This helps you test ideas before building a real circuit.
Each exercise in this repository includes a circuit diagram.
Links in the project files may open the corresponding simulation.
Check the diagram's connections if the result is unexpected.
See the official Wokwi documentation for the latest features.

## Wokwi Library
Wokwi provides models of boards and components for circuit diagrams.
Each component has a type identifier, such as `wokwi-led`.
Components are listed in the `parts` array in `diagram.json`.
Attributes define details such as an LED's color.
Connections link board pins to component terminals.
The LED examples in this repository do not need external libraries.
In Arduino, software libraries add support for devices or features.
When needed, include the appropriate library in your code with `#include`.
Make sure it is available in the project's build environment.
Do not confuse a code library with a diagram component.

## Read JSON File
To read a diagram, open the exercise folder in Visual Studio Code.
In the Explorer, right-click `diagram.json`.
Choose **Open** or **Open With** to open the file as text.
You can also open the project in the Wokwi editor to view its circuit.
The file uses JSON, a text format structured with objects and arrays.
The `parts` array contains the board and circuit components.
Each component has a `type` and a unique `id`.
The `top` and `left` values control its visual position.
The `rotate` field sets rotation, while `attrs` stores component properties.
The `connections` array records linked pins and wire appearance.
Change positions to organize the layout without changing the wiring.
To add parts or wires, prefer the visual controls in the Wokwi editor.
If you edit JSON directly, preserve quotation marks, commas, brackets, and braces.
Use unique IDs and check pin names when changing connections.
Save and reopen the simulation to catch syntax or wiring errors.

## About the Author
Lorem ipsum dolor sit amet, consectetur adipiscing elit.
Sed do eiusmod tempor incididunt ut labore et dolore magna
aliqua, ut enim ad minim veniam, quis nostrud
exercitation ullamco laboris
nisi ut aliquip ex ea commodo consequat.
Duis aute irure dolor
in reprehenderit in voluptate velit esse
cillum dolore eu fugiat nulla pariatur.
Excepteur sint occaecat cupidatat non proident,
sunt in culpa qui officia deserunt mollit anim id est laborum.
