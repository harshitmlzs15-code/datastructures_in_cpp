#include <iostream>
using namespace std;
class node{
    public: int data;  node *next;

    node(int value){
        data = value; next = nullptr;
    }
};
//insert at beginning 
node* insertAtBeginning(node* head, int value) {
    //creating new node with constructor and storing its address in newnode;
    node* newNode = new node(value);
    // passing the address of head in next part of the node 
    newNode->next = head;
    // returning the newnode's address same as head = newnode in void
    return newNode;
}

//insert at end without using tail
void insertAtEnd(node*& head, int value) {
    // node* newNode = new node(value);
    // // If list is empty
    // if (head == nullptr) {
    //     head = newNode;
    //     return;
    // }
    // node* temp = head;
    // // Traverse to last node
    // while (temp->next != nullptr) {
    //     temp = temp->next;
    // }
    // // Insert at end
    // temp->next = newNode;
   
    if (head == nullptr) {
        head = new node(value);
    } else {
        node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        node* newNode = new node(value);
        temp->next = newNode;
    }
}

void insertAfterValue(node*& head, int target, int value) {
    node* temp = head;

    // Traverse to find target
    while (temp != nullptr && temp->data != target) {
        temp = temp->next;
    }

    // If value not found
    if (temp == nullptr) {
        cout << "Value not found\n";
        return;
    }

    // Create and insert new node
    node* newNode = new node(value);
    newNode->next = temp->next;
    temp->next = newNode;
}

void insertAfterIndex(node*& head, int index, int value) {
    if (index < 0) return;   // check BEFORE allocation

    node* newnode = new node(value);

    if (index == 0) {
        newnode->next = head;
        head = newnode;
        return;
    }

    node* temp = head;
    int ci = 0;

    while (temp != nullptr && ci < index - 1) {
        temp = temp->next;
        ci++;
    }

    if (temp == nullptr) {
        cout << "Index out of range\n";
        delete newnode;
        return;
    }

    newnode->next = temp->next;
    temp->next = newnode;
}

// void display (node *head){
//     node *temp = head;
//     while(temp!=nullptr){
//         cout<<temp->data<<"->";
//         temp = temp->next;
//     }
//     cout<<"null"<<endl;
// }
void display(node* head) {
    node* temp = head;
    while (temp != nullptr) {
        cout << temp->data;
        if (temp->next != nullptr)
            cout << " -> ";
        temp = temp->next;
    }
    cout << " -> NULL" << endl;
}


int main(){
    node *head = nullptr;
    head = insertAtBeginning(head, 6);
    insertAtEnd(head, 5);
    insertAfterValue(head, 5, 69);
    insertAfterIndex(head, 2, 89);
    display(head);
  
 return 0;
}