#include <iostream>
using namespace std;

void square(int m){
   m+= 10; 
}
void squared(int &m){
     m+=10;
}

int main(){
    int n, m;
    cin>>n>>m;
   cout << "entered n: " << n << endl;
square(n);
cout << "after pass by value: " << n << endl;    // n unchanged
squared(n);
cout << "after pass by reference: " << n << endl; // n changed ✅

cout << "entered m: " << m << endl;
square(m);
cout << "after pass by value: " << m << endl;    // m unchanged
squared(m);
cout << "after pass by reference: " << m << endl; // m changed ✅
 return 0;
}