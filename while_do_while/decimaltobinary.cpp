// #include <iostream>
// using namespace std;

// int main(){
//   int number, binary = 0, remainder = 0, place = 1;
//   cout<< "enter a number to convert: "<<endl;
//   cin>>number;
//   while(number > 0){
//     remainder = number&1; /* it is as similar as number % 2; basically number will be
//     converted to binary then it will perform bitwise and with one. */
//     binary = binary + remainder * place;
//     place = place * 10;
//     number>>=1; /* its similar to number/= 2 but uses bitwise right shift */
//   }
//   cout<< binary<<endl;
//  return 0;
// }
#include <iostream>
using namespace std;

int main(){
  int n, sum = 0, rem = 0, mul = 1;
  cin>>n;
  while(n>0){
    rem = n%2;
    sum = sum + rem*mul;
    mul*=10;
    n = n/2;
  }
  cout<<sum<<endl;
 return 0;
}