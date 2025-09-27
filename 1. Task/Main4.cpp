#include <iostream>
using namespace std;

//Task 4

int main() {
    int numParticipants;

    cout << "Enter the number of participants in the workshop: ";
    cin >> numParticipants;

    int* attendance = new int[numParticipants];
    for (int i = 0; i < numParticipants; i++) {
        attendance[i] = 0; // start clean
    }

    int id;
    cout << "\nMark participants present (enter 0 to stop):\n";
    while (true) {
        cout << "Enter participant number (1-" << numParticipants << "): ";
        cin >> id;
        if (id == 0) break;  // stop when user enters 0
        if (id >= 1 && id <= numParticipants) {
            attendance[id - 1] = 1; // mark present
            cout << "Participant " << id << " marked present.\n";
        } else {
            cout << "Invalid number! Try again.\n";
        }
    }

    cout << "\n--- Final Attendance Register ---\n";
    for (int i = 0; i < numParticipants; i++) {
        cout << "Participant " << (i + 1) 
             << ": " << (attendance[i] ? "Present" : "Absent") << endl;
    }

    delete[] attendance;
    cout << "\nRegister closed and memory released.\n";

    return 0;
}
