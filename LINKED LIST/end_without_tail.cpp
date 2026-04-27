#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node(int value){
        data = value;
        next = NULL;
    }
};

int main(){
    node *head = NULL;
    int arr[4] = {9,1,3,8};
    for ( int i = 0; i<4; i++){
        if(head == NULL){
            head = new node(arr[i]);
        }
        else{
            node *tail = head;
            while(tail->next!=NULL){
                tail = tail->next;
            }
           node * temp = new node(arr[i]);
           temp->next=temp;
           // or tail->next = new node(arr[i]);
        }   
        while(head!= NULL){
            cout<<head->data<<" ";
            head = head->next;
        }
    }
    return 0;
}
