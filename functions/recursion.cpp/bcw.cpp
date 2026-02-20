#include <iostream>
using namespace std;
void bcw(int n){
    if(n==0) return; //base 
    bcw(n-1); //call 
    cout<<n<<endl; //work 
       // line 5,6 swap to reverse ho jayega order { base, work, call} 
}

int main(){
  int k;
  cout<<"enter a number : "<<endl;
  cin>>k;
  bcw(k);
 return 0;
}