#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;

    cout<<"Enter number of elements: ";
    cin>>n;

    vector<int> arr(n);

    cout<<"Enter elements: ";

    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    int key;

    cout<<"Enter element to search: ";
    cin>>key;

    int count = 0;

    for(int i = 0; i < n; i++){

        if(arr[i] == key){
            count++;
            break;
        }
    }

    if(count){
        cout<<"found";
    }
    else{
        cout<<"not found";
    }

    return 0;
}