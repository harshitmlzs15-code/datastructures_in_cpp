#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr{8, 6, 4, 7, 4, 9, 10, 8, 12};
    vector<int> ans(arr.size());
    stack<int> s;

    for (int i = 0; i < arr.size(); i++) {

        while (!s.empty() && s.top() <= arr[i]) {
            s.pop();
        }

        if (s.empty()) {
            ans[i] = -1;   // FIX
        }
        else {
            ans[i] = s.top();
        }

        s.push(arr[i]);
    }

    for (int x : ans) {
        cout << x << " ";
    }
}