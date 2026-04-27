#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node *next;

    node (int value){
        data = value;
        next = NULL;
    }
};
//to insert the node
void insertion(node *&head, int value){ //This allows the function to modify the original head.... address pass kr rhe apn (pass by reference) and nhi use krte to axtual head modify na hota...
        if(head == NULL){
            head = new node(value);
        }
        else{
            node *temp;
            temp = new node(value);
            temp->next = head;
            head = temp;
        }
}
//to display the inserted elements....
void display(node *head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<" reached end"<<endl;
}
int main(){
    node *head = NULL;
    int value;
    int n;
    cout<<" enter the number of elements you want in the linked list"<<endl;
    cin>>n;
    cout<<" enter the elements you want in the linked list"<<endl;
    for(int i = 0; i<n; i++){
    cin>>value;
    insertion(head, value);
    }
    display(head);
 return 0;
}