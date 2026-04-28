#include <iostream>
using namespace std;

class node{
public:
    int data;
    node *next; // next is a pointer which is storing address of node

    node(int value){ // parameterised constructor
        data = value;
        next = nullptr;
    }
};

void insertatbeg(node *&head, node *&tail, int value){
    // head and tail both are passed as reference so that their values can be modified..
    if(head == nullptr){
        head = tail = new node(value);
    }
    else{
        node *temp = new node(value);
        temp->next = head;
        head = temp;
    }
}

void insertatend(node *&head, node *&tail, int value){
    if(head == nullptr){
        head = tail = new node(value); // standard instead of tail = head;
    }
    else{
        tail->next = new node(value);
        tail = tail->next;
    }
}

void display(node *head){
    node *temp = head;
    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "NULL";
}

int main() {
    node *head = nullptr;
    node *tail = nullptr;

    int arr[4] = {2,3,5,6};

    for(int i = 0; i < 4; i++){
        insertatbeg(head, tail, arr[i]);
    }
    display(head);

    for(int i = 0; i < 4; i++){
        insertatend(head, tail, arr[i]);
    }
    display(head);
}