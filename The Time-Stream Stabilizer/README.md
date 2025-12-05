Time-Stream Stabilizer
Overview

Time-Stream Stabilizer is a C++ program that uses a Binary Search Tree (BST) to store and manage historical events.
Each event has a year (as the key) and an event name (as the value).
The user can insert events, remove events, search for events, and print the full timeline in order.

This project was created for a Data Structures lab to demonstrate BST operations in a practical scenario.

Features
1. INJECT <Year> <EventName>

Inserts a new event into the timeline.
If the year already exists, the program does nothing.

2. PARADOX <Year>

Deletes an event from the BST.
Handles all BST delete cases (no child, one child, and two children).

3. SEARCH <Year>

Searches for a specific year and prints the event if found.

4. REPORT

Prints the entire timeline in ascending order using in-order traversal.

5. TIMESPAN (Bonus)

Calculates the difference between the earliest and latest year in the BST.

How to Compile and Run

Clone or download the project.

Compile using a C++ compiler such as g++:

g++ Time-Stream\ stablizer.cpp -o stabilizer


Run the program:

./stabilizer


Enter commands in the terminal, for example:

INJECT 1969 "Moon Landing"
INJECT 2050 "Mars Colony Established"
SEARCH 1969
PARADOX 2000
REPORT
TIMESPAN

Example Output
> System: Injecting 1969... Timeline stable.
> System: Injecting 2050... Timeline stable.

> Query: Searching for 1969...
> Result: Event Found! [1969: Moon Landing]

> COMMAND: CHRONOLOGICAL REPORT
-------------------------------
1969: Moon Landing
2050: Mars Colony Established
-------------------------------

Code Structure

The project contains one main C++ file:

Time-Stream stablizer.cpp

Implements all BST operations:

Insert (INJECT)

Delete (PARADOX)

Search

In-order traversal (REPORT)

Time span calculation

The program reads commands from standard input until the user stops the program.

Future Improvements

Split code into multiple files (header and source files)

Add better input validation

Add file saving/loading of the timeline

Add a balanced BST (AVL or Red-Black Tree) for improved performance

Purpose

This project helps students understand how BSTs work through a creative and practical scenario.
It is suitable for labs, assignments, and learning exercises.
