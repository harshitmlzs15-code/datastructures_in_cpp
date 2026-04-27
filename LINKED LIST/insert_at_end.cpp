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

int main(){
    node *head = nullptr; //head ek pointer hai jo node ke address ko store kr rha..
    node *tail = nullptr; //tail ek pointer hai jo node ke address ko store kr rha..
        int arr[4] = {5,1,6,3};
        for (int i = 0; i<4; i++){
            if(head == nullptr){
                head = new node(arr[i]); //head ek pointer hai jo node ke address ko store kr rha..
                tail = head; // tail me head ka address pass kiya
            }
            else{
                tail->next = new node(arr[i]); //tail ke next me new node ka address pass kiya
                tail = tail->next; //tail ko tail ke next ki value se update kiya i.e address of next node
            }
        }
        node *temp = head; // direct head se kiya to head null ho jayega
       // You lose access to the linked list completely
         while(temp!= nullptr){ //temp null loop terminate
            cout<<temp->data<<" "; //will print the data of each node
            temp= temp->next; //updates temp with address of next node
        }
        //for freeing memory
      node *curr = head;
while(curr != nullptr){
    node *nextNode = curr->next;
    delete curr;
    curr = nextNode;
}
//to avoid dangling pointer 
// dangling pointer: Pointer exists ❌ but the data it points to doesn’t exist anymore
// A dangling pointer is a pointer that still holds a memory address, but that memory is no longer valid (already deleted or out of scope).
head = nullptr;
tail = nullptr;
 return 0;
}