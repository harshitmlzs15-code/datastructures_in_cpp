#include <bits/stdc++.h>
using namespace std;
int main() {
//class se form hua hai;
    pair<string, int> p;

    p.first = "harshit";
    p.second = 18;
    // m2 is make_pair("harshit", 18);
    cout << p.first << endl;
    cout << p.second << endl;

    pair<string, pair<int, float> >h;
    h.first = "shiva";
    h.second.first= 20;
    h.second.second = 68;

    cout << h.first << endl;
    cout << h.second.first << endl;
    cout << h.second.second << endl;
    return 0;
}