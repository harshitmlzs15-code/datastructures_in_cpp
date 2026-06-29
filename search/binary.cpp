#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[6] = {5,7,7,8,8,10};
    int target = 8;
    int h = 5;
    int l = 0;
        
    while(l<=h){
        int mid = l + (h-l)/2;
        if(a[mid] == target){
            int i = 0, j = 0, post1 = 0, post2 = 0;
            while(a[mid - i]== target){
                post1 = mid - i;
                i++;

            }
            while(a[mid + j ]== target){
                post2 = mid + j;
                j++;
            }
            cout<< post1 <<" "<< post2<< " ";
            return 0;
        }
    if(a[mid]>target){
        h = mid - 1;
    }
    if(a[mid]<target){
        l = mid + 1;
    }
    }
 return 0;
}