#include <iostream>
using namespace std;
int main(){
  int n, n1 = 0, n2=1, next;
  cin>>n;
  for(int i = 0; i<=n; n++){
    next = n1+n2;
    n1 = n2;
    n2 = next;
    cout<<" " <<next;
  }
  return 0;
}
 