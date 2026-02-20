#include <iostream>
using namespace std;
int main() {
    for (int i = 65; i <= 69; i++) {
        for (int j = 1; j <= 69-i; j++) {
            cout<<"  ";
        }
            for (int m = 65; m <= i; m++) {
                 cout<<char(m)<<" ";                
            
        }
        cout << endl;
    }
}