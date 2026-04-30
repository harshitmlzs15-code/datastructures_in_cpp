#include <iostream>
using namespace std;

int main(){
    int n;
    int count = 0; // 1. Variable to count factors

    cout << "enter n: ";
    cin >> n;

    // 2. Loop to find how many numbers divide n
    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            count++; // If 'i' divides 'n', increase the count
        }
    }

    // 3. Check the total count after the loop finishes
    if(count == 2){
        cout << "prime" << endl;
    }
    else if (count > 2){
        cout << "composite" << endl;
    }
    else {
        // This handles the case for '1', which is neither prime nor composite
        cout << "Neither prime nor composite" << endl; 
    }

    return 0; // 4. Return 0 should be at the very end
}