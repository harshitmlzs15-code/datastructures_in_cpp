#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;

// max sum of subarray kadane's algorithm

int main(){
    int v;
    cin>>v;
    int arr[v];
    for(int i = 0; i<v; i++){
        cin>>arr[i];
    }
  int maxi = INT_MIN;
    int prefix = 0;
    for (int i = 0; i<v ; i++ ){
        prefix += arr[i];
        maxi = max(prefix, maxi);
        if(prefix < 0){
        prefix = 0;
        }
    }
 cout<<maxi;
 return 0;
}