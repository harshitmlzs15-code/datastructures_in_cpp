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

void deletenodebeginning(node *&head){
    if(head == nullptr){
        cout<<" no node to delete"<<endl;
        return;
    }
    else{
        node *temp = head;
        head = head->next;
        delete temp;
    }
}

void display(node *head){
    node *temp = head;
    while(temp != nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main(){
    node *head = nullptr;

    // ❌  mistake:
    // head = new node(5);
    // head = new node(6);  // overwrites previous node

    // ✅ Correct way (link nodes)
    head = new node(5);
    head->next = new node(6);

    deletenodebeginning(head);
    display(head);

    return 0;
}