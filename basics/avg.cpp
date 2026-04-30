#include <iostream>
#include <string>
using namespace std;
int main() {
   float a, b, c, d, e, avg;
   cout << "enter the value of a: ";
   cin >> a;   
   cout << "enter the value of b: ";
   cin >> b;      
   cout << "enter the value of c: ";
   cin >> c;
   cout << "enter the value of d: ";
   cin >> d;   
   cout << "enter the value of e: ";
   cin >> e;
   avg = (a + b + c + d + e) / 5;
   cout << "avg is " << avg << endl;
   return 0;
}