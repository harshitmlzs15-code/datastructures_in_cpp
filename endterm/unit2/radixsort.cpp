#include <bits/stdc++.h>
using namespace std;

// Counting Sort for a particular digit place

void countSort(vector<int>& arr, int place){

    int n = arr.size();

    vector<int> output(n);

    int count[10] = {0};

    // Store frequency of digits

    for(int i = 0; i < n; i++){

        int digit = (arr[i] / place) % 10;

        count[digit]++;
    }

    // Prefix sum

    for(int i = 1; i < 10; i++){

        count[i] += count[i - 1];
    }

    // Build output array

    for(int i = n - 1; i >= 0; i--){

        int digit = (arr[i] / place) % 10;

        output[count[digit] - 1] = arr[i];

        count[digit]--;
    }

    // Copy sorted values back to original array

    for(int i = 0; i < n; i++){

        arr[i] = output[i];
    }
}

int main(){

    int n;

    cout<<"Enter the size: ";
    cin>>n;

    vector<int> arr(n);

    cout<<"Enter the elements: ";

    for(int i = 0; i < n; i++){

        cin>>arr[i];
    }

    // Find maximum element

    int maxi = *max_element(arr.begin(), arr.end());

    // Radix Sort

    for(int place = 1; maxi / place > 0; place *= 10){

        countSort(arr, place);
    }

    cout<<"Sorted array:\n";

    for(int i = 0; i < n; i++){

        cout<<arr[i]<<" ";
    }

    return 0;
}