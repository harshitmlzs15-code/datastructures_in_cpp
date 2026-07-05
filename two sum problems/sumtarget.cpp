#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[3] = {3,2,4}; //sorted
    int target;
    cin>>target;
    int start = 0;
    int end = 2;
    while(start<end){
        if((arr[start] + arr[end]) == target){
            cout<<arr[start]<<" "<<start<<" "<<endl<<arr[end]<<" "<<end<<endl;
            return 0;
        }
        else if((arr[start] + arr[end]) > target){
                end--;
        
        }
        else{
            start++;
        }
    }
    cout<<"not possible";
 return 0;
}