#include <bits/stdc++.h>
using namespace std;

int main(){
    int target = 63;
    int l = 1;
    int h = 63;

    if(target == 0){
        cout<< 0;
        return 0;
    }

    while(l<=h){
        int mid = l + (h-l)/2;
        if( mid <= target / mid && (mid+1) > target/(mid+1)){
            cout<<mid;
            return 0;
        }
     else if (mid > target / mid){
            h = mid - 1;
        }
        else{
            l = mid + 1;
        }

    }
}