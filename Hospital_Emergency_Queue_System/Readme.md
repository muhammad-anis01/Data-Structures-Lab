# Hospital Emergency Queue System Using Doubly Linked List (C++)

## Overview
This project simulates a hospital emergency queue management system using a doubly linked list in C++. It demonstrates how patients can be efficiently added, removed, and managed in an emergency queue.

## Objectives
- To understand and implement a doubly linked list data structure.
- To manage patient records in a queue system.
- To simulate real-world queue operations in a hospital emergency scenario.

## Features
1. **Add Patient (Enqueue)** – Adds a new patient to the emergency queue.  
2. **Serve Patient (Dequeue)** – Removes a patient who has been served from the queue.  
3. **Display Queue** – Shows the current list of patients in the queue.  
4. **Search Patient** – Finds a patient by their ID in the queue.  
5. **Insert Patient at Position** – Inserts a new patient at a specific position in the queue.  
6. **Delete Patient by ID** – Removes a patient with a specific ID from the queue.

## Data Structure
The project uses a **Doubly Linked List (DLL)** where:
- Each node contains:
  - `patientID`
  - `next` pointer
  - `prev` pointer
- This allows traversal in both directions (forward and backward).

## How It Works
1. Patients are added to the queue as new nodes.  
2. When a patient is served, the front node is removed.  
3. The list can be displayed or searched at any time.  
4. Nodes can be inserted or deleted from any position efficiently.

## Example
Initial Queue: [200] ↔ [150] ↔ [101]

After Adding New Patient (250):
[200] ↔ [150] ↔ [101] ↔ [250]

After Serving a Patient:
[150] ↔ [101] ↔ [250]


## Technologies Used
- Programming Language: **C++**
- Data Structure: **Doubly Linked List**

## How to Run
1. Compile the program using a C++ compiler (e.g., g++):  
2. Run the executable:

## Author
**Muhammad Anis**  
Department of Artifical Intelligence
