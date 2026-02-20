#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5 - i; j++) {
            cout << "  ";
        }
            for (int m = 1; m <= i; m++) {
                 cout << m<<" ";                
        }
        for (int m = i-1; m >= 1; m--) {
                 cout << m<<" "; 
        }
        cout << endl;
    }
}