#include <bits/stdc++.h>
using namespace std;

vector<int> next_smaller(vector<int> height) {
    int n = height.size();
    vector<int> ans(n);
    stack<int> s;

    for (int i = n - 1; i >= 0; i--) {

        while (!s.empty() && height[s.top()] >= height[i]) {
            s.pop();
        }

        if (s.empty()) {
            ans[i] = n;
        }
        else {
            ans[i] = s.top();
        }

        s.push(i);
    }

    return ans;
}

vector<int> prev_smaller(vector<int> height) {
    int n = height.size();
    vector<int> ans(n);
    stack<int> s;

    for (int i = 0; i < n; i++) {

        while (!s.empty() && height[s.top()] >= height[i]) {
            s.pop();
        }

        if (s.empty()) {
            ans[i] = -1;
        }
        else {
            ans[i] = s.top();
        }

        s.push(i);
    }

    return ans;
}

int main() {

    vector<int> height{2, 3, 4, 2, 6, 5, 4, 5, 3};

    vector<int> right = next_smaller(height);
    vector<int> left = prev_smaller(height);

    int n = height.size();
    int maxArea = 0;

    for (int i = 0; i < n; i++) {

        int width = right[i] - left[i] - 1;

        int area = height[i] * width;

        maxArea = max(maxArea, area);
    }

    cout << maxArea;

    return 0;
}