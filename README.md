# The Arduino Platform and C Programming

The Arduino is an open-source computer hardware/software platform for building digital devices and interactive objects that can sense and control the physical world around them. In this class we learned how the Arduino platform works in terms of the physical board and libraries and the IDE (integrated development environment). We also learned about shields, which are smaller boards that plug into the main Arduino board to perform other functions such as sensing light, heat, GPS tracking, or providing a user interface display. The course also covered programming the Arduino using C code and accessing the pins on the board via the software to control external devices.

## Week 1

This module provides an introduction to the Arduino environment which is composed of three things: the Arduino board, the Arduino IDE, and the Arduino-compatible shields together with their libraries. We first investigate the board, discussing all of its main components, inputs, and outputs. We discuss how each component is used and we examine the board schematic to see how they are connected. We then discuss the Arduino Integrated Development Environment (IDE) which is used primarily to write, compile, and upload code. We survey the interface of the IDE and discuss how to install and use it. We also examine the use of shields to extend the functionality of an Arduino-based system. We discuss how shield libraries provide a useful abstraction to facilitate programming.

## Week 2

This module covers the basics of the C programming language which will be used to write code for the Arduino. The course first covers basic syntax, variables, and types. Most of the basic C operators are presented. Conditional statements (if, switch) and loops (while, for) are described. The concept of functions is presented together with how to define and call functions. Creation and use of global variables is explained.

## Week 3

This module describes the composition of an Arduino program, or sketch, and the process by which it is compiled and uploaded. The Arduino IDE is a user interface for the software tools which actually compile and upload the program. We outline the use of these tools in the build process. We describe the basic structure of a sketch, including the use of the setup() and loop() functions. The main interface of an Arduino is through its pins, so we describe how to access those pins from a sketch.

## Week 4

This module is an introduction on debugging embedded software on an Arduino. We discuss the basic debugging requirements: controllability and observability. The debugging environment available for an Arduino UNO is limited, so we describe how to use the UART communication protocol to gain controllability and observability. We present the use of the Serial library to communicate with the Arduino through the serial monitor.
