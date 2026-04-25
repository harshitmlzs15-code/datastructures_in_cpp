//so this file will be a recap of how much i know about array
#include <iostream>
using namespace std;

int main(){
    int a, sum=0;
    cout<<"enter the length of the array"<<endl;
    cin>>a;
  float arr[a];
  for (int i = 0; i<a; i++){
    cin>>arr[i];
  }
  for (int i = 0; i<a; i++){
    cout<<arr[i]<<" ";
    //sum of array
    sum+=arr[i];
  }
  cout<<endl;
   cout<<sum<<endl;

// max and min 
int b = arr[0];
int c = arr[0];

for (int i = 0; i<a; i++){
    if(arr[i]>=b){
        b = arr[i];
    }
   else if(arr[i]<=c){
        c = arr[i];
    }
}
 cout<<" max = "<<b<<endl;
  cout<<" min = "<<c<<endl;

  int x[a];
// reversing an array
for (int i = 0; i<a; i++){
   x[i] = arr[a-1-i];
}
for (int i = 0; i<a; i++){
    cout<<x[i]<<" ";
}

// finding a particular element
int number;
cout<<"enter a particular element to find: "<<endl;
cin>>number;
bool present = false;
for (int i = 0; i<a; i++){
 if (number == arr[i]){
    present = true;
    break;
 }
 }
 if (present){
    cout<<"element found"<<endl;
 }
 else cout<<"not found"<<endl;

 // second largest element sabse pehle array sort krle, arr[a-2] cout krde
 // time complexity km krne ke liye sorting avoid kroo..

 int largest = arr[0], sec_largest = arr[1];

 for(int i = 0; i<a; i++){
    if(largest<arr[i]){
         sec_largest = largest;
        largest = arr[i];
    }
    else if (arr[i]>sec_largest && arr[i]!=largest){
        sec_largest = arr[i];
    }
}
    cout<<sec_largest<<endl;
 return 0;
}
