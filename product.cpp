#include <iostream>
using namespace std;

int main(){
  int n; 
  cin>>n;
  int product = 1, rem = 0;
  for(int i = 0; n!=0; i++){
    rem = n%10;
    product*=rem;
    n = n/10;
  }
  cout<<product<<endl;
 return 0;
}