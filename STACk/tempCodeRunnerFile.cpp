#include <bits/stdc++.h>
using namespace std;
    class stacks{
        
        int * arr;
        int size;
        int top;

        public:
        stacks( int s){
            top = -1;
            size = s;
            arr = new int[s];
        }

        //deconstructor /a function is required to free DAM, i'm using a deconstructor as it need not to be invoked manually, as the program approaches the end it invokes automatically
        ~stacks() {
            delete[] arr;
            cout<<"memory freed";
        }

        void push(int value){
            if(top == size - 1){
                cout<<"stack overflow"<<endl;
                return;
            }
            else{
                top ++;
                arr[top] = value;
                cout<<"pushed element is: " << value<<endl;
            }
        }
        void pop(){
            if(top == -1){
                cout<<"stack underflow"<<endl;
            }
            else{
            cout<<"popped element is: " << arr[top]<<endl;
            top -= 1;
            }
        }
        int peek(){
            if (top == -1 ){
                cout<<"stack is empty"<<endl;
                return -1;
            }
            else{
                cout<<"the recent element is: ";
                return arr[top];
            }
        }

        bool isempty(){
            return top == -1;
        }

        int sizeis(){
            return top + 1;
        }
    };
    
int main(){
    stacks s(5);
    s.push(5);
    s.push(6);
    s.push(8);
    s.pop();
    s.pop();
    cout<<s.peek()<<endl;

 return 0;
}