#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter the number of elements\n";
    cin>>n;
    vector<int>arr(n);
    cout<<"enter the elements\n";
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int key;
    cout<<"enter the element to search\n";
    cin>>key;

        int low = 0;
        int high = n-1;
       

    while(low<=high){
         int mid = low + (high - low)/2;
        if(arr[mid] == key){
            cout<<"element found at index"<<mid;
            return 0;
        }
        else if(arr[mid]>key){
        high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }

    cout<<"element not found";
return 0;
}