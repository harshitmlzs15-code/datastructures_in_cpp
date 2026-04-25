#include <iostream>
using namespace std;
//problem 1009
int main() {
// code to find the complement of a number
int digit, sum=0,rem=0, mul =1;
cin>>digit;
int n = digit;

if (digit == 0) {
    cout << "Complement of 0 is undefined without fixed bit-width\n";
    return 0;
}

 //decimal to binary 
while(n>0){
    rem = n%2;
    sum = sum + rem*mul;
    mul*=10;
    n/=2;
}
cout<<"binary value of "<<digit<<" is: "<<sum<<endl;

// binary complement
rem = 0;
int sums = 0;
mul = 1;
n = sum;
while(n>0){
    rem = n%10;
    if(rem == 0)   sums = sums + 1*mul;
    else  sums = sums + 0*mul;
    mul*=10;
    n/=10;
}
cout<<"binary complement of "<<digit<<" is: "<<sums<<endl;

// binary to decimal
n = sums;
rem = 0; mul = 1;
int comp = 0;

while(n>0){
    rem = n%10;
    comp = comp + rem*mul;
    mul*=2;
    n/=10;
}
cout<<"the complement of "<<digit<<" is: "<<comp<<endl;
}


// Your code is algorithmically optimal. The only room for improvement is replacing the decimal-binary-decimal conversion dance with direct bitwise ops — same complexity, far fewer operations.