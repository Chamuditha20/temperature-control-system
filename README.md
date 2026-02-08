\# Temperature Controlled Fan System 🌡️



A smart cooling system simulation using Arduino Uno and Proteus. The system monitors temperature using an LM35 sensor and automatically activates a DC fan when the temperature exceeds 30°C.



!\[Circuit Diagram](diagrams/circuit\_diagram.png)



\## 🛠 Features

\- \*\*Real-time Monitoring:\*\* Displays current temperature on a 16x2 LCD.

\- \*\*Automated Control:\*\* Fan turns ON when Temp > 30°C.

\- \*\*Visual Feedback:\*\* LCD indicates Fan Status (ON/OFF).



\## 🚀 Components Used

1\. \*\*Arduino Uno R3\*\* (Microcontroller)

2\. \*\*LM35\*\* (Temperature Sensor)

3\. \*\*LM016L\*\* (16x2 LCD Display)

4\. \*\*DC Motor\*\* (12V)

5\. \*\*2N2222\*\* (NPN Transistor for motor switching)



\## 💻 How to Run

1\. Open the `simulation/FanControl.pdsprj` file in \*\*Proteus 8\*\*.

2\. Load the `.hex` file from the `firmware` folder into the Arduino component.

3\. Run the simulation.

