#include <bits/stdc++.h>
using namespace std;

int main() {

    unordered_set<int> s1 = {1, 12, 3, 14};

    vector<int> v1(s1.begin(), s1.end());

    sort(v1.begin(), v1.end());   // ascending
    for(auto e : v1) {
        cout << e << " ";
    }
    sort(v1.begin(), v1.end(), greater<int>());
    for(auto e : v1) {
        cout << e << " ";
    }

    return 0;
}