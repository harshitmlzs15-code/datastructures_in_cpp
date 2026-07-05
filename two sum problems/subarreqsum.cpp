#include <bits/stdc++.h>
using namespace std;

int main(){

   int arr[8] = {3,4,-2,5,8,20,-10,8};
   int ts = 0;
   for(int i = 0; i<8; i++){
    ts += arr[i];
   }
int prefix = 0;
   for(int i = 0; i<8-1; i++){
    prefix += arr[i];
    int suffix = ts - prefix;
    if(prefix == suffix){
        cout<<"true";
        return 1;
    }
   }
 return 0;
}