#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;

    node(int value){
        data = value;
        next = nullptr;
    }
};
void deleteFromEnd(node*& head) {
    if (head == nullptr) {
        cout << "List is empty\n";
        return;
    }
    // If only one node
    if (head->next == nullptr) {
        delete head;
        head = nullptr;
        return;
    }
    // Traverse to second-last node
    node* temp = head;
    while (temp->next->next != nullptr) {
        temp = temp->next;
    }
    // Delete last node
    delete temp->next;
    temp->next = nullptr;
}


void deleteFromBeg(node *& head){
    if(head== nullptr){
        cout<<"list is empty\n";
        return;
    }
    node *temp = head;
    head = head->next;
    delete temp;
}

// Head is passed by reference so changes reflect outside
void deleteAtIndex(node*& head, int index) {
    if (head == nullptr) {
        cout << "List is empty\n";
        return;
    }

    if (index == 0) {
        node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    node* temp = head;
    int ci = 0;

    while (temp != nullptr && ci < index - 1) {
        temp = temp->next;
        ci++;
    }

    if (temp == nullptr || temp->next == nullptr) {
        cout << "Index out of range\n";
        return;
    }

    node* nodeToDelete = temp->next;
    temp->next = nodeToDelete->next;
    delete nodeToDelete;
}

// Head is passed by reference so changes reflect outside
void deleteAfterValue(node*& head, int targetValue) {
    node* temp = head;

    // Traverse to find target
    while (temp != nullptr && temp->data != targetValue) {
        temp = temp->next;
    }

    // If target not found or no node after it
    if (temp == nullptr || temp->next == nullptr) {
        return;
    }

    // Delete node after target
    node* delNode = temp->next;
    temp->next = delNode->next;
    delete delNode;
}

void display(node *head){
    node * temp = head;
    while(temp!= nullptr){
        cout<<"data-> "<<temp->data<<" "<<endl;
        cout<<"at "<<temp<<" "<<endl;
        cout<<"next data at "<<temp->next<<" "<<endl ;
        temp = temp->next;
    }
}
int main(){
    node *head = nullptr;
    head = new node(25);
    head->next = new node(35);
    head->next->next = new node(97);
    head->next->next->next = new node(15);
    deleteFromEnd(head);
    display(head);
    cout<<"    "<<endl;
    deleteFromBeg(head);
    display(head);
    deleteAfterValue(head, 35);
    display(head);
    cout<<"    "<<endl;
    deleteAtIndex(head, 1);
    display(head);
    return 0;
}
   