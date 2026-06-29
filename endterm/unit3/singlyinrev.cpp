#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

Node* head = NULL;

// Function to insert node
void insert(int value) {

    Node* temp = new Node();

    temp->data = value;
    temp->next = NULL;

    if (head == NULL) {
        head = temp;
    }
    else {

        Node* ptr = head;

        while (ptr->next != NULL) {
            ptr = ptr->next;
        }

        ptr->next = temp;
    }
}

// Function to display linked list
void display() {

    Node* ptr = head;

    while (ptr != NULL) {
        cout << ptr->data << " -> ";
        ptr = ptr->next;
    }

    cout << "NULL";
}

// Function to reverse linked list
void reverseList() {

    Node* prev = NULL;
    Node* current = head;
    Node* next = NULL;

    while (current != NULL) {

        next = current->next;

        current->next = prev;

        prev = current;

        current = next;
    }

    head = prev;
}

int main() {

    insert(10);
    insert(20);
    insert(30);
    insert(40);

    cout << "Original Linked List:\n";
    display();

    reverseList();

    cout << "\n\nReversed Linked List:\n";
    display();

    return 0;
}