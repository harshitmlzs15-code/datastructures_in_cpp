#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    // Constructor
    Node(int value) {
        data = value;
        next = nullptr;
    }
};

// Function to create a new node
Node* createNode(int value) {
    Node* newNode = new Node(value); 
    return newNode;
}

int main() {
    int value;
    cout << "Enter value: ";
    cin >> value;

    Node* newNode = createNode(value);  // renamed variable (better practice)

    cout << "Node created successfully!" << endl;
    cout << "Data = " << newNode->data << endl;

    // Print pointer safely
    if (newNode->next == nullptr)
        cout << "Next = NULL" << endl;
    else
        cout << "Next = " << newNode->next << endl;

    return 0;
}