# Code-a-Thon T-Shirt Queue Management System

## Overview
This is a console-based C++ application designed to manage the queue of students waiting for free T-shirts during a university "Code-a-Thon" event.  
The program keeps track of students joining and leaving the queue dynamically and ensures that the first student to arrive is served first.

---

## Features
1. **Add Student** – Add a new student to the end of the queue by entering their name and unique ID.
2. **Serve Student** – Serve and remove the student at the front of the queue.
3. **Student Leaves** – Remove a student from any position in the queue by entering their unique ID.
4. **Display Queue** – Show the list of students currently in the queue.
5. **Count Students** – Display the total number of students waiting in the queue.
6. **Exit** – Quit the program safely.

---

## Data Stored for Each Student
- **Student Name** (e.g., "Ali Khan")  
- **Student ID** (e.g., 12345)

---

## Implementation Details
- The program uses the C++ Standard Library `list` container for dynamic queue management.
- This allows efficient insertion and removal of students from any position in the queue.
- The program uses a simple menu-driven approach for user interaction.

---

## Sample Menu
========== Code-a-Thon T-Shirt Queue ==========

Add Student

Serve Student

Student Leaves

Display Queue

Count Students

Exit
==============================================
Enter your choice:


---

## How to Run

### 1. Compile the Program
Use any C++ compiler (e.g., g++) to compile:
```bash
g++ tshirt_queue.cpp -o tshirt_queue
