# BRT Peshawar Passenger Queue (Linked List Simulation)

This is a simple C++ program that simulates how passengers board a BRT bus using a **singly linked list**.  
Each passenger is a node in the list, and we manage the queue with basic linked list operations.

---

## Features
- Add passenger at the **end** (normal boarding)  
- Add passenger at the **beginning** (emergency boarding)  
- Add passenger at a **specific position** (special booking)  
- Remove passenger from the **front** when the bus arrives  
- Show the current queue  

---

## Example Run
Initial Queue: 101 -> 102 -> 103 -> NULL
After emergency passenger: 999 -> 101 -> 102 -> 103 -> NULL
After special booking at pos 2: 999 -> 555 -> 101 -> 102 -> 103 -> NULL
After first passenger boards: 555 -> 101 -> 102 -> 103 -> NULL