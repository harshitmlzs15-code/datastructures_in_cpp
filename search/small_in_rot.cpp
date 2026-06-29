#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[7] = {4,6,5,0,1,2,3};
    int l = 0;
    int h = 6;
    while(l <=h){
        int mid = l + (h-l)/2;
        if(a[mid]>a[mid-1]){
            l = mid + 1;
        }
        else if(a[mid]< a[mid-1] && a[mid] < a[mid+1] ){
            cout<<mid<< " "<< a[mid];
            return 0;
        }
        else{
            h = mid - 1;
        }
    }

//     while (l < h) {
//     int mid = l + (h - l) / 2;

//     if (a[mid] > a[h])
//         l = mid + 1;
//     else
//         h = mid;
// }

// cout << a[l];
 return 0;
}