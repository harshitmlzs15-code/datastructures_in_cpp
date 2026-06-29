#include <iostream>
#include <set>
using namespace std;

int main() {

    set<int> s = {10,20,30};

    if(s.find(20) != s.end())
        cout << "Found\n";

    cout << s.count(10);

    return 0;
}