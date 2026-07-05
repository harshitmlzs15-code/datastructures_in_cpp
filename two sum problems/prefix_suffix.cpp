#include <bits/stdc++.h>
using namespace std;

void prefixsum(vector<int> &arr, int n){
    vector<int>c(n);
    c[0] = arr[0];
    for (int i = 1; i<n; i++){
        c[i] = arr[i] + c[i-1];

    }
    for (int i = 0; i<n; i++){
        cout<<c[i]<<" ";
    }
}

void suffixsum(vector<int> &arr, int n){
    vector<int>c1(n);
    c1[n-1] = arr[n-1];
    for (int i = n-1; i>0; i--){
        c1[i-1] = c1[i] + arr[i-1];

    }
    for (int i = 0; i<n; i++){
        cout<<c1[i]<<" ";
    }
}

int main(){
  int n;
  cout <<" enter the size of array:" <<endl;
  cin>>n;
    vector <int> arr(n);
  cout<<"enter the elements of array: "<<endl;

  for(int i = 0; i< n; i++){
    cin>>arr[i];
  }
 prefixsum(arr, n);
 cout<<endl;
  suffixsum(arr, n);
 return 0;
}