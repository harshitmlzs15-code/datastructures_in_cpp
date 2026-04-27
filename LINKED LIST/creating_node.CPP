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
    node *head;
     //head ek pointer hai jo node ka address store kr rha h
     head = NULL;
    // head = new node(4); //dma ho rha head ka ek new node create ho rhi jiska address head store kr rha
    // cout<<head->data<<" "; //head pointer address pr rha then uska data access ho rha...
    // cout<<head->next<<" ";//head pointer address pr rha then uska next access ho rha...

    //ARRAY TO LINKED LIST
int arr[4] = {2, 8, 7, 3}; // array ke reverse me linked list form hogi agr start me element add hoga to..
for (int i = 0; i<4; i++){
if (head == NULL){
    head = new node(arr[i]);
}
else{
    node *temp;
    temp = new node(arr[i]);
    temp->next = head;
    head = temp;
}
}
//traversal
node *temp = head;
while(temp != NULL){
    cout<<temp->data<<" ";
    temp = temp->next;
}
 return 0;
}