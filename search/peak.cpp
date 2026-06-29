#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[7] = {2,4,6,5,3, 2, 1};
    int l = 0;
    int h = 6;
    while(l <=h){
        int mid = h + (l-h)/2;
        if (a[mid]>a[mid - 1] && a[mid]>a[mid + 1] ){
            cout<<"peak index is "<<mid<<" with value: "<<a[mid];
            return 0;
        }
       else if(a[mid]>a[mid-1]){
            l = mid + 1;
        }
        else{
            h = mid - 1;
        }
    }
  
 return 0;
}