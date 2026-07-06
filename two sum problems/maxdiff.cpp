#include <bits/stdc++.h>
using namespace std;

int main(){
  int arr[8] = {9,5,8, 12, 2,3, 7,4};
  int val = 0, ans = INT_MIN;
  for(int i = 0; i<8-1; i++){
     val = arr[i]; 
    for(int j = i+1; j<8; j++){
        ans = max(ans, arr[j] - arr[i]);
    }
  }
  cout<<ans;
 return 0;
}