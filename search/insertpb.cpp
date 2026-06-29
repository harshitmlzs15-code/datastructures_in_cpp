#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[4] = {5,6,9,10};
    int target = 9;
    int h = 4;
    int l = 0;
        
    while(l<=h){
        int mid = l + (h-l)/2;
        if(target>a[mid] && target<a[mid+1]){
            cout<<mid+1;
            return 0;
        }
        else if (target<a[mid]){
            h = mid - 1;
            if(mid == 0){
                cout<<mid;
            }

        }
        else if(target>a[mid]) {
            l = mid + 1;
            if(mid == 3){
                cout<<mid+1;
            }
        }
        else{
            cout<<"element present at "<<mid;
            return 0;
        }
    }
        return 0;
    }