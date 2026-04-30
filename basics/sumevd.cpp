#include <iostream>
using namespace std;

int main(){
  int n; 
  cin>>n;
  int sum = 0, rem = 0;
  for(int i = 0; n!=0; i++){
    rem = n%10;
    if(rem % 2==0){
    sum+=rem;
    }
    n = n/10;
  }
  cout<<sum<<endl;
 return 0;
}