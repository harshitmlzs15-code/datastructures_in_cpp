#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int> a = {4, 3, 5, 1, 9};

    int n = a.size();

    int maxi = *max_element(a.begin(), a.end());

    // Count array

    vector<int> b(maxi + 1, 0);

    // Frequency count

    for(int i = 0; i < n; i++){
        b[a[i]]++;
    }

    // Prefix sum

    for(int i = 1; i <= maxi; i++){
        b[i] = b[i-1] + b[i];
    }

    // Output array

    vector<int> c(n);

    // Stable sorting

    for(int i = n-1; i >= 0; i--){

        c[b[a[i]] - 1] = a[i];

        b[a[i]]--;
    }

    // Print sorted array

    for(int i = 0; i < n; i++){
        cout<<c[i]<<" ";
    }

    return 0;
}