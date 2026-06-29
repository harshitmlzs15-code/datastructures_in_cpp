#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    // Constructor
    Node(int value) {
        data = value;
        next = nullptr;
        prev = nullptr;
    }
};

// Function to create a new node
Node* createNode(int value) {
    Node* newNode = new Node(value);
    return newNode;
}

int main() {
    int value;
    cin >> value;

    Node* node = createNode(value);

    cout << "Node created successfully!\n";
    cout << "Data = " << node->data << endl;
    cout << "Next = " << node->next << endl;
    cout << "Prev = " << node->prev << endl;

    return 0;
}