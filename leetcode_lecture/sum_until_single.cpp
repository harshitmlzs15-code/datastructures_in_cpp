// #include <iostream>
// using namespace std;

// int sums( int x){
//     int sum = 0, temp, rem;
//     temp = x;
//     while(temp>0){
//         rem = temp%10;
//         sum+=rem;
//         temp/=10;
//     }
//     if(sum>=10){
//         temp = sum;
//         sum = 0;
//           while(temp>0){
//           rem = temp%10;
//           sum+=rem;   
//     }
//     return sum;
// }
//     else
//         return sum;
// }
// int main(){
//   int number;
//   cout<<"input a number"<<endl;
//   cin>>number;
//   cout<<sums(number)<<endl;

//  return 0;
// }

#include <iostream>
#include <cmath> // Included to use the abs() function for negative numbers
using namespace std;

// Renamed for clarity
int getSingleDigitSum(int x) {
    // Convert negative numbers to positive so the math works
    int temp = abs(x);

    // Keep summing digits as long as the number is 10 or greater
    while (temp >= 10) {
        int current_sum = 0; // Reset sum for this specific round

        // Extract and sum the digits of the current number
        while (temp > 0) {
            int rem = temp % 10;
            current_sum += rem;
            temp /= 10;
        }

        // Update temp to be the new sum, so the outer loop can check it
        temp = current_sum;
    }

    // Once temp is less than 10, the outer loop finishes, and we return it
    return temp;
}

int main() {
    int number;
    cout << "Input a number:" << endl;
    cin >> number;
    
    cout << "The single-digit sum is: " << getSingleDigitSum(number) << endl;

    return 0;
}