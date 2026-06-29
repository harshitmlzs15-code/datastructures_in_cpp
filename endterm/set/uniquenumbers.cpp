#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[11] = {10,2,3,4,2,5,6,4,2,3,6};
    set<int>s1;
    for(int x: arr){
        s1.insert(x);
    }

    for(int x: s1){
        cout<<x<<" ";
    }
cout<<s1.size()<<" ";
  
 return 0;
}