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

node *createll(int arr[], int size, int index){
    if (index == size){
        return nullptr;
    }
    node *temp = new node(arr[index]);
    temp->next = createll(arr, size, index+1);
    return temp;

}
//insert at beginning
node *createllb(int arr[], int size, int index, node *prev){
    if (index == size){  
        return prev;
    }

    node *temp = new node(arr[index]);
    temp->next = prev;

    return createllb(arr, size, index + 1, temp); 
}

void display(node *head){
    while(head != nullptr){
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL\n";
}

int main() {
    int arr[4] = {2,3,5,6};
    node *head = createllb(arr, 4, 0, nullptr);
    display(head);
}