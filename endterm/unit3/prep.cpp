#include <iostream>
using namespace std;

class Node {
public:
    int coeff;
    int exp;
    Node* next;
};

Node* head = NULL;

// Function to insert term
void insert(int c, int e) {
    Node* temp = new Node();
    
    temp->coeff = c;
    temp->exp = e;
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

// Function to display polynomial
void display() {
    Node* ptr = head;

    while (ptr != NULL) {
        cout << ptr->coeff << "x^" << ptr->exp;

        if (ptr->next != NULL) {
            cout << " + ";
        }

        ptr = ptr->next;
    }
}

int main() {

    // Polynomial:
    // 5x^3 + 4x^2 + 2x^1 + 7x^0

    insert(5, 3);
    insert(4, 2);
    insert(2, 1);
    insert(7, 0);

    cout << "Polynomial is:\n";
    display();

    return 0;
}