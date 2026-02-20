// #include <iostream>
// using namespace std;
// int sum(int x, int z){
//     if(x>z) return 0;
//     return x+sum(x+1,z);
// }

// int main(){
//     int n;
//     cin>>n;
//     cout<<sum(1,n);
//  return 0;
// }
#include <iostream>
using namespace std;
int sum(int n){
    if(n==0) return 0;
     return n + sum(n-1);
}

int main(){
    int n;
    cin>>n;
    cout<<sum(n)<<endl;
  
 return 0;
}