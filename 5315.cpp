#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    if (((n%5 == 0) || (n%3 == 0)) && (n%15 != 0)) {
        cout << "number is divisble by 3 or 5 but not 15" << endl;
    } else if (((n%5 == 0) && (n%3 == 0)) && (n%15 == 0)) 
        cout << n <<" is divisible by 3, 5 and 15" << endl;
    else {
        cout << n <<" is not divisible by 3 or 5" << endl;
    }
}