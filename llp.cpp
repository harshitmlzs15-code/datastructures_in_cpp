#include <bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *next;

// creation of node using constructor
    node(int value){
        data = value;
        next = nullptr;
    }
};

void insertatstart(node*& head, int value){
    node *temp = new node(value);
    if(head == nullptr){
        head = temp;
    }
    else{
        temp->next = head;
        head = temp;
    }
}
void deleteatstart(node*&head){
    if(head == nullptr){
        cout<<"no node to delete";
        return;
    }
    else{
        node *temp = head;
        head = head->next;
        delete temp;
    }
}

int main(){
    node *head;
    head = new node(4);
    insertatstart(head, 5);
    insertatstart(head, 2);
    //deleteatstart(head);
    node *temp = head;
    while(temp != nullptr){
        cout<<temp->data<< " ";
        temp = temp->next;
    }
    while(head != nullptr){
    deleteatstart(head);
}
 return 0;
}