#include <iostream>
#include <climits>
using namespace std;

int main(){
    int a[] = {1, 3, 50, 10, 2, 5, 6};
    int n = sizeof(a) / sizeof(a[0]); 
    int mx = INT_MIN;
    for (int i = 0; i < n; i++){
        if(mx < a[i]){
            mx = a[i];
        }
    }
    int kx = INT_MIN;
    for (int i = 0; i < n; i++){
        if(a[i] > kx && a[i] != mx){
            kx = a[i];
        }
    }
    cout << "Second largest is: " << kx << endl; // Output: 10
    return 0;
}