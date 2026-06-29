#include <iostream>
using namespace std;

class Node {
public:
    int coeff;
    int exp;
    Node* next;
};

// Function to insert node
void insert(Node*& head, int c, int e) {

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

// Function to add two polynomials
Node* addPoly(Node* p1, Node* p2) {

    Node* result = NULL;

    while (p1 != NULL && p2 != NULL) {

        if (p1->exp == p2->exp) {

            insert(result,
                   p1->coeff + p2->coeff,
                   p1->exp);

            p1 = p1->next;
            p2 = p2->next;
        }

        else if (p1->exp > p2->exp) {

            insert(result,
                   p1->coeff,
                   p1->exp);

            p1 = p1->next;
        }

        else {

            insert(result,
                   p2->coeff,
                   p2->exp);

            p2 = p2->next;
        }
    }

    // Remaining terms of p1
    while (p1 != NULL) {

        insert(result,
               p1->coeff,
               p1->exp);

        p1 = p1->next;
    }

    // Remaining terms of p2
    while (p2 != NULL) {

        insert(result,
               p2->coeff,
               p2->exp);

        p2 = p2->next;
    }

    return result;
}

// Function to display polynomial
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
    insert(poly1, 5, 3);
    insert(poly1, 4, 2);
    insert(poly1, 2, 1);
    insert(poly1, 7, 0);

    // Second Polynomial
    insert(poly2, 3, 3);
    insert(poly2, 2, 1);
    insert(poly2, 1, 0);

    cout << "First Polynomial:\n";
    display(poly1);

    cout << "\n\nSecond Polynomial:\n";
    display(poly2);

    result = addPoly(poly1, poly2);

    cout << "\n\nResultant Polynomial:\n";
    display(result);

    return 0;
}