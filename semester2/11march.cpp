#include <iostream>
using namespace std;

int main(){
  int n;
  cin>>n;
  int a[n], min, loc;
  for ( int i = 0;  i<n; i++){
    cin>>a[i];
  }
   for ( int i = 0;  i<n; i++){
    cout<<a[i];
  }
  cout<<endl;
  for(int x = 0; x <= n-2; x++){
     min = a[x];
    loc = x;
        for(int y = x+1; y<=n-1; y++){
            if (a[y]<min){
                min = a[y];
                loc = y;
            }
        }
          swap(a[x],a[loc]); //ye phat rha tha
  }
   for ( int i = 0;  i<n; i++){
    cout<<a[i]<< " ";
  }

 return 0;
}