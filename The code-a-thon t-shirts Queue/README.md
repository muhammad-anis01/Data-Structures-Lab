# Code-a-Thon T-Shirt Queue Management System

## University Project
Developed for the University "Code-a-Thon" Event  
Department of Computer Science / Artificial Intelligence  
By: **Muhammad Anis**

---

## Introduction
During the annual "Code-a-Thon" event, the first 100 participants receive free limited-edition T-shirts. Managing this queue manually can lead to errors and confusion.  
This project provides a **C++ console-based queue management system** that automates the process, ensuring that students are served fairly and efficiently.

---

## Objective
The goal of this project is to design and implement a **dynamic queue management system** that:
- Handles an unknown number of students efficiently.
- Maintains the correct serving order (First In, First Out - FIFO).
- Allows addition and removal of students at any position without affecting the queue order.
- Simplifies event management for organizers.

---

## Key Features
1. **Add Student** – Add a new student to the end of the queue with their name and unique ID.  
2. **Serve Student** – Serve and remove the student at the front of the queue.  
3. **Student Leaves** – Remove a student from any position by entering their unique ID.  
4. **Display Queue** – View the list of students currently waiting in the queue.  
5. **Count Students** – Display the total number of students currently in line.  
6. **Exit** – Close the program safely.

---

## Data Stored for Each Student
- **Student Name** (e.g., "Ali Khan")  
- **Student ID** (e.g., 12345)

---

## Tools and Technologies
- **Language:** C++  
- **Data Structure:** Linked List (using `std::list`)  
- **Environment:** Console-based Application  
- **Compiler:** g++  

---

## System Design

### Core Concept
The system uses a **linked list** to manage students dynamically. This approach allows efficient insertion and deletion operations from any position in the queue without memory reallocation.

### Functions Implemented
- `addStudent()` → Adds a new student to the end of the queue.  
- `serveStudent()` → Removes the first student from the queue.  
- `studentLeaves()` → Removes a student from any position based on ID.  
- `displayQueue()` → Displays the current queue.  
- `countStudents()` → Displays the total number of students in line.

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

## Example Output
Enter Student Name: Ali Khan
Enter Student ID: 123
Ali Khan (ID: 123) has joined the queue.

Enter Student Name: Sara Ahmed
Enter Student ID: 456
Sara Ahmed (ID: 456) has joined the queue.

Current Queue:
Name: Ali Khan | ID: 123
Name: Sara Ahmed | ID: 456

Total students in queue: 2

---

## How to Compile and Run

### Step 1: Compile the Program
```bash
g++ tshirt_queue.cpp -o tshirt_queue
