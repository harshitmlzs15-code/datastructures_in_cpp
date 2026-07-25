// linked list implementation:

// how to do it?

// basically we can't travese back to previous element in a sll everytime we need to initialise a temp variable to travese to the top -1 postion in case of pop..

// what we can do is instead of ins. at end, we can insert a node at the start of ll, so everytime top will be pointing the most recent element and forward travesal is easy..

#include <bits/stdc++.h>
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

class stacks{
    node *top;
    int size; //tell the actual size of stack, in array it was telling the complete stack size
    public:
    stacks(){
        size = 0;
        top = nullptr;
    }
        void push(int value){
            node *temp = new node(value);
            if(temp == nullptr){
                cout<<"stack overflow"<<endl;
                return;
            }
            else{
                temp->next = top;
                 top = temp;
                 size ++;
            }
        }
        void pop(){
            if(top == nullptr){
                cout<<"stack underflow"<<endl;
                return;
            }
            else{
                cout<<"popped value is: "<< top->data<<endl;
                node *temp = top;
                top = top->next;
                delete temp;
                size --;
            }
        }
        int peek(){
            if (top == nullptr){
                cout<<"stack is empty"<<endl;
                return -1;
            }
            else{
                cout<<"the most recent element is: ";
                return top->data;
            }
        }
        bool isempty(){
            return top == nullptr;
        }
        int sizeis(){
            return size;
        }
};


int main(){
  stacks s;
  s.push(6);
  s.push(61);
  s.push(62);
  s.push(69);
  s.pop();
  cout<<s.peek();
 return 0;
}
