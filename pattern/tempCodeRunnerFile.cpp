#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5 - i; j++) {
            cout << "  ";
        }
        for (int m = 1; m <= i; m++) {
                 cout << "* ";
        }
        for (int j = 1; j <=i-1; j++) {
            cout << "* ";     
        }
        for (int j = 1; j <= 5 - i; j++) {
            cout << "  ";     
        }
           
        cout << endl;
    } 
        
}
//hardwork pays off but easy method tha isse
