#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
    Node(int d) : data(d), next(nullptr) {}
};

// LinkedList class
class LinkedList {
private:
    Node* head;
public:
    LinkedList() : head(nullptr) {}
    ~LinkedList(){
    	Node* current = head;
        while (current != nullptr) {
            Node* nextNode = current->next;
            delete current;
            current = nextNode;
        }
	}

    void insertAtBeginning(int value){
    	Node* newNode = new Node(value);
    	newNode->next = head;
    	head = newNode;
	}
    void insertAtEnd(int value){
    	Node* newNode = new Node(value);
	    if (head == nullptr) {
	        head = newNode;
	        return;
	    }
	    Node* temp = head;
	    while (temp->next != nullptr) {
	        temp = temp->next;
	    }
	    temp->next = newNode;
	}
	
    void insertAtPosition(int value, int pos){
    	if (pos <= 1) { 
	        insertAtBeginning(value);
	        return;
		}
		Node* newNode = new Node(value);
	    Node* temp = head;
	    for (int i = 0; i < pos - 1 && temp != nullptr; i++) {
	        temp = temp->next;
	    }
	    if (temp == nullptr) { // If position is greater than list length
	        insertAtEnd(value);
		} 
		else {
	        newNode->next = temp->next;
	        temp->next = newNode;
	    }
	}
    bool deleteFromBeginning(int* removedValue = nullptr){
    	if (head == nullptr) {
	        cout << "Queue is empty, no passenger to remove!\n";
	        return false;
	    }
	    Node* temp = head;
	    if (removedValue) {
	        *removedValue = head->data;
	    }
	    head = head->next;
	    delete temp;
	    return true;
	}
	
    void display() const{
    	if (head == nullptr) {
	        cout << "Queue is empty.\n";
	        return;
	    }
	    Node* temp = head;
	    cout << "Passenger Queue: ";
	    while (temp != nullptr) {
	        cout << temp->data << " -> ";
	        temp = temp->next;
	    }
	    cout << "NULL\n";
	}
};

int main() {
    LinkedList list;

    // Step 1: Add 3 passengers at the end
    list.insertAtEnd(101);
    list.insertAtEnd(102);
    list.insertAtEnd(103);
    cout << "Initial Queue after adding passengers:\n";
    list.display();

    // Step 2: Emergency passenger at beginning
    list.insertAtBeginning(999);
    cout << "\nAfter adding an emergency passenger at beginning:\n";
    list.display();

    // Step 3: Special booking passenger at position 2
    list.insertAtPosition(555, 2);
    cout << "\nAfter inserting special booking passenger at position 2:\n";
    list.display();

    // Step 4: First passenger boards (delete from beginning)
    int removed;
    list.deleteFromBeginning(&removed);
    cout << "\nAfter first passenger boards (deletion):\n";
    list.display();

    return 0;
}