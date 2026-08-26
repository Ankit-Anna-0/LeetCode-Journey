#include <iostream>

// 1. Define the structure for a node
struct Node {
    int data;           // To store the integer value
    Node* next;         // Pointer to look at the next node in line

    // Constructor to easily create a new node
    Node(int val) {
        data = val;
        next = nullptr; // By default, new node doesn't point anywhere
    }
};

// 2. Function to insert a node at the front of the list
void insertAtHead(Node*& head, int val) {
    Node* newNode = new Node(val);
    newNode->next = head; // Point new node's next to the current first node
    head = newNode;       // Move head to point to the new node
}

// 3. Function to insert a node at the back of the list
void insertAtTail(Node*& head, int val) {
    Node* newNode = new Node(val);
    
    // If the list is completely empty, the new node is the head
    if (head == nullptr) {
        head = newNode;
        return;
    }
    
    // Otherwise, traverse to find the last node
    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    
    temp->next = newNode; // Link the old last node to the new node
}

// 4. Function to display all values in the linked list
void displayList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        std::cout << temp->data << " -> ";
        temp = temp->next; // Move to the next node
    }
    std::cout << "NULL" << std::endl;
}

// 5. Function to clear memory and prevent leaks
void freeList(Node*& head) {
    Node* current = head;
    while (current != nullptr) {
        Node* nextNode = current->next;
        delete current;
        current = nextNode;
    }
    head = nullptr;
}

int main() {
    // Initialize an empty list (head points to nothing)
    Node* head = nullptr;

    std::cout << "Creating a linked list..." << std::endl;

    // Inserting elements at the tail (End)
    insertAtTail(head, 10);
    insertAtTail(head, 20);
    insertAtTail(head, 30);
    
    std::cout << "List after inserting 10, 20, 30 at the tail: " << std::endl;
    displayList(head);

    // Inserting elements at the head (Beginning)
    insertAtHead(head, 5);
    insertAtHead(head, 2);

    std::cout << "List after inserting 5 and 2 at the head: " << std::endl;
    displayList(head);

    // Clean up memory before exiting
    freeList(head);

    return 0;
}
