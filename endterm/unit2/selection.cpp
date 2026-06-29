#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;

    cout<<"Enter the size: ";
    cin>>n;

    vector<int> arr(n);

    cout<<"Enter the elements: ";

    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    //selection sort

    for(int i = 0; i<n-1; i++){
        int min = i;
        for(int j = i + 1; j<n; j++){
            if(arr[j]<arr[min]){
                min = j;
            }
        }
            swap(arr[i], arr[min]);
    
    }
    for(int i = 0; i < n; i++){
        cout<<arr[i];
    }
    return 0;
}