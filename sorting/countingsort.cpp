#include <iostream>
using namespace std;

int maxvalue(vector<int> &arr) {
    int maxVal = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxVal = maxvalue(arr);

    vector<int> count(maxVal + 1, 0);

    // frequency
    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
    }

    // prefix sum
    for (int i = 1; i <= maxVal; i++) {
        count[i] += count[i - 1];
    }

    vector<int> b(n);

    // build sorted array (stable)
    for (int i = n - 1; i >= 0; i--) {
        b[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }

    // output
    for (int i = 0; i < n; i++) {
        cout << b[i] << " ";
    }

    return 0;
}