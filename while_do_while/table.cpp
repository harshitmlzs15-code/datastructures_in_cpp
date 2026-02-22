#include <iostream>
using namespace std;

int main(){
  int n;
  cout<< " enter the number whose factor you want:"<<endl;
  cin>>n;
  int i = 1;
  while(i<=n){
    if(n%i==0){
        cout<<i<<" "<<endl;
    }
i++;
  }
 return 0;
}