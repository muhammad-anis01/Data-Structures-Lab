#include <iostream>
#include <list>
#include <string>
using namespace std;

// Structure to store each student's data
struct Student {
    string name;
    int id;
};

// Class for T-Shirt Queue Management
class TShirtQueue {
private:
    list<Student> queue; // doubly linked list for efficient insertion/deletion

public:
    // Add a new student to the end of the queue
    void addStudent() {
        Student s;
        cout << "Enter Student Name: ";
        cin.ignore(); // clear input buffer
        getline(cin, s.name);
        cout << "Enter Student ID: ";
        cin >> s.id;

        // Check for duplicate ID
        for (const auto& student : queue) {
            if (student.id == s.id) {
                cout << "Student with this ID already exists in the queue!\n";
                return;
            }
        }

        queue.push_back(s);
        cout << s.name << " (ID: " << s.id << ") has joined the queue.\n";
    }

    // Serve (remove) the first student in the queue
    void serveStudent() {
        if (queue.empty()) {
            cout << "The queue is empty. No student to serve.\n";
        } else {
            Student s = queue.front();
            queue.pop_front();
            cout << "Served: " << s.name << " (ID: " << s.id << ")\n";
        }
    }

    // Remove a student from any position in the queue
    void studentLeaves() {
        if (queue.empty()) {
            cout << "The queue is empty.\n";
            return;
        }

        int removeId;
        cout << "Enter the Student ID to remove: ";
        cin >> removeId;

        for (auto it = queue.begin(); it != queue.end(); ++it) {
            if (it->id == removeId) {
                cout << it->name << " (ID: " << it->id << ") has left the queue.\n";
                queue.erase(it);
                return;
            }
        }

        cout << "No student found with ID: " << removeId << endl;
    }

    // Display all students currently in the queue
    void displayQueue() const {
        if (queue.empty()) {
            cout << "The queue is empty.\n";
        } else {
            cout << "\nCurrent Queue:\n";
            cout << "-----------------------------\n";
            for (const auto& student : queue) {
                cout << "Name: " << student.name << " | ID: " << student.id << endl;
            }
            cout << "-----------------------------\n";
        }
    }

    // Display the number of students in the queue
    void countStudents() const {
        cout << "Total students in queue: " << queue.size() << endl;
    }
};

// Main menu-driven application
int main() {
    TShirtQueue tshirtQueue;
    int choice;

    do {
        cout << "\n========== Code-a-Thon T-Shirt Queue ==========\n";
        cout << "1. Add Student\n";
        cout << "2. Serve Student\n";
        cout << "3. Student Leaves\n";
        cout << "4. Display Queue\n";
        cout << "5. Count Students\n";
        cout << "6. Exit\n";
        cout << "==============================================\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                tshirtQueue.addStudent();
                break;
            case 2:
                tshirtQueue.serveStudent();
                break;
            case 3:
                tshirtQueue.studentLeaves();
                break;
            case 4:
                tshirtQueue.displayQueue();
                break;
            case 5:
                tshirtQueue.countStudents();
                break;
            case 6:
                cout << "Exiting program. Thank you!\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 6);

    return 0;
}
