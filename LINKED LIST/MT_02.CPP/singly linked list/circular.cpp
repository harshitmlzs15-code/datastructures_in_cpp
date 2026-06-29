#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* next;

    node(int value) : data(value), next(nullptr) {}
};

// DISPLAY
void display(node* head) {
    if (head == nullptr) {
        cout << "List is empty\n";
        return;
    }

    node* temp = head;
    do {
        cout << temp->data << " -> ";
        temp = temp->next;
    } while (temp != head);

    cout << "(head)\n";
}

// INSERT AT BEGINNING
void insertAtBeginning(node*& head, int value) {
    node* newNode = new node(value);

    if (head == nullptr) {
        head = newNode;
        newNode->next = head;
        return;
    }

    node* temp = head;
    while (temp->next != head) {
        temp = temp->next;
    }

    newNode->next = head;
    temp->next = newNode;
    head = newNode;
}
// INSERT AT END
void insertAtEnd(node*& head, int value) {
    node* newNode = new node(value);

    if (head == nullptr) {
        head = newNode;
        newNode->next = head;
        return;
    }

    node* temp = head;
    while (temp->next != head) {
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->next = head;
}


// INSERT AT INDEX
void insertAtIndex(node*& head, int index, int value) {
    if (index < 0) return;

    if (index == 0) {
        insertAtBeginning(head, value);
        return;
    }

    node* temp = head;
    int i = 0;

    while (temp->next != head && i < index - 1) {
        temp = temp->next;
        i++;
    }

    if (i != index - 1) {
        cout << "Index out of range\n";
        return;
    }

    node* newNode = new node(value);
    newNode->next = temp->next;
    temp->next = newNode;
}

// INSERT AFTER VALUE
void insertAfterValue(node*& head, int target, int value) {
    if (head == nullptr) return;

    node* temp = head;

    do {
        if (temp->data == target) {
            node* newNode = new node(value);
            newNode->next = temp->next;
            temp->next = newNode;
            return;
        }
        temp = temp->next;
    } while (temp != head);

    cout << "Value not found\n";
}

// SEARCH
bool search(node* head, int key) {
    if (head == nullptr) return false;

    node* temp = head;

    do {
        if (temp->data == key) return true;
        temp = temp->next;
    } while (temp != head);

    return false;
}


// DELETE FROM BEGINNING
void deleteFromBeginning(node*& head) {
    if (head == nullptr) return;

    if (head->next == head) {
        delete head;
        head = nullptr;
        return;
    }

    node* last = head;
    while (last->next != head) {
        last = last->next;
    }

    node* temp = head;
    head = head->next;
    last->next = head;
    delete temp;
}


// DELETE FROM END
void deleteFromEnd(node*& head) {
    if (head == nullptr) return;

    if (head->next == head) {
        delete head;
        head = nullptr;
        return;
    }

    node* temp = head;

    while (temp->next->next != head) {
        temp = temp->next;
    }

    node* del = temp->next;
    temp->next = head;
    delete del;
}


// DELETE AT INDEX
void deleteAtIndex(node*& head, int index) {
    if (head == nullptr || index < 0) return;

    if (index == 0) {
        deleteFromBeginning(head);
        return;
    }

    node* temp = head;
    int i = 0;

    while (temp->next != head && i < index - 1) {
        temp = temp->next;
        i++;
    }

    if (temp->next == head || i != index - 1) {
        cout << "Index out of range\n";
        return;
    }

    node* del = temp->next;
    temp->next = del->next;
    delete del;
}


// DELETE AFTER VALUE
void deleteAfterValue(node*& head, int target) {
    if (head == nullptr) return;

    node* temp = head;

    do {
        if (temp->data == target) {

            if (temp->next == head) return;

            node* del = temp->next;
            temp->next = del->next;

            if (del == head) {
                head = del->next;
            }

            delete del;
            return;
        }
        temp = temp->next;
    } while (temp != head);
}


int main() {
    node* head = nullptr;

    insertAtEnd(head, 10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);

    display(head);

    insertAtBeginning(head, 5);
    display(head);

    insertAtIndex(head, 2, 15);
    display(head);

    insertAfterValue(head, 20, 25);
    display(head);

    cout << (search(head, 15) ? "Found\n" : "Not Found\n");

    deleteFromBeginning(head);
    display(head);

    deleteFromEnd(head);
    display(head);

    deleteAtIndex(head, 1);
    display(head);

    deleteAfterValue(head, 20);
    display(head);

    return 0;
}