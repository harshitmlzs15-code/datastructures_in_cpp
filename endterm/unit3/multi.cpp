#include <iostream>
using namespace std;

class Node {
public:
    int coeff;
    int exp;
    Node* next;
};

// Insert term in polynomial
void insert(Node*& head, int c, int e) {

    Node* temp;
    Node* ptr;
    Node* newNode = new Node();

    newNode->coeff = c;
    newNode->exp = e;
    newNode->next = NULL;

    // If list empty
    if (head == NULL) {
        head = newNode;
    }

    // If exponent already exists
    else {

        temp = head;

        while (temp != NULL) {

            if (temp->exp == e) {
                temp->coeff = temp->coeff + c;
                return;
            }

            ptr = temp;
            temp = temp->next;
        }

        ptr->next = newNode;
    }
}

// Multiply two polynomials
Node* multiply(Node* p1, Node* p2) {

    Node* result = NULL;

    Node* ptr1 = p1;
    Node* ptr2 = p2;

    while (ptr1 != NULL) {

        ptr2 = p2;

        while (ptr2 != NULL) {

            int c = ptr1->coeff * ptr2->coeff;
            int e = ptr1->exp + ptr2->exp;

            insert(result, c, e);

            ptr2 = ptr2->next;
        }

        ptr1 = ptr1->next;
    }

    return result;
}

// Display polynomial
void display(Node* head) {

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

    Node* poly1 = NULL;
    Node* poly2 = NULL;
    Node* result = NULL;

    // First Polynomial
    insert(poly1, 3, 2);
    insert(poly1, 2, 1);
    insert(poly1, 1, 0);

    // Second Polynomial
    insert(poly2, 2, 1);
    insert(poly2, 1, 0);

    cout << "First Polynomial:\n";
    display(poly1);

    cout << "\n\nSecond Polynomial:\n";
    display(poly2);

    result = multiply(poly1, poly2);

    cout << "\n\nResultant Polynomial:\n";
    display(result);

    return 0;
}