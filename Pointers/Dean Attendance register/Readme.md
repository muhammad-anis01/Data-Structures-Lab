# Deans Attendance Tracker 


## Description
This is a simple **C++ program** that tracks attendance for a workshop.  
It uses **dynamic memory allocation** to handle any number of participants, allowing the user to mark them as **Present** or **Absent**.

---

## How It Works
1. The user enters the total number of participants.
2. The program initializes an attendance list (all set to `Absent`).
3. The user marks participants present by entering their number.
   - Enter `0` to stop marking attendance.
   - Invalid numbers are rejected.
4. The program displays the final attendance register.
5. Memory is released before exit.

---

## Usage

### Compile the program:
```bash
g++ workshop_attendance.cpp -o workshop_attendance
