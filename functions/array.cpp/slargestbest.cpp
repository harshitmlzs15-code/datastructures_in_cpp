#include <iostream>
#include <vector>
#include <climits>
using namespace std;

void findSecondLargest(vector<int>& a) {
    int n = a.size();
    if (n < 2) {
        cout << "No second largest element\n";
        return;
    }

    int largest = INT_MIN;
    int second = INT_MIN;
    bool foundSecond = false; // The fix

    for (int i = 0; i < n; i++) {
        if (a[i] > largest) {
            second = largest;
            largest = a[i];
            if (second != INT_MIN) foundSecond = true; 
        }
        else if (a[i] > second && a[i] != largest) {
            second = a[i];
            foundSecond = true;
        }
    }
    if (!foundSecond)
        cout << "No second largest element\n";
    else
        cout << "Second largest is: " << second;
}