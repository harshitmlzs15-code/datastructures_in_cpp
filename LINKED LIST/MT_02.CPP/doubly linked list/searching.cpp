#include <iostream>
using namespace std;

// Node class
class node {
public:
    int data;
    node* next;

    node(int value) {
        data = value;
        next = nullptr;
    }
};

// Search function
bool searching(node* head, int key) {
    node* temp = head;

    while (temp != nullptr) {
        if (temp->data == key)
            return true;
        temp = temp->next;
    }

    return false;
}

// Display 
void display(node* head) {
    node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

int main() {
    // Creating linked list: 10 -> 20 -> 30 -> 40
    node* head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = new node(40);

    display(head);

    int key;
    cout << "Enter value to search: ";
    cin >> key;

    // Calling function
    if (searching(head, key)) {
        cout << "Element Found\n";
    } else {
        cout << "Element Not Found\n";
    }

    return 0;
}