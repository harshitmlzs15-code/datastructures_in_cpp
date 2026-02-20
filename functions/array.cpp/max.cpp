#include <iostream>
using namespace std;

int main(){
  int arr[8];
  int n = sizeof(arr)/4; //size nikalne ke liye
  for(int j = 0; j<n; j++){
    cin>>arr[j];
  }
  int k = 0;
  for(int i = 0; i<n; i++){
    if(k<arr[i]){
        k = arr[i];
    }
  }
  cout<<k<<endl;
 return 0;
}