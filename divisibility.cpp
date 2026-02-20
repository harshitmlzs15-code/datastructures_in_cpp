#include <iostream>
using namespace std;
int main() {
   int a, b, c;
   cout << "enter a number: ";
   cin >> a>>b>>c;
   if (a+b>c && b+c>a && c+a>b) {
       cout << a<<b<<c << " can be sides of a triangle" << endl;
   }
    else {
       cout << a<<b<<c << " cannot be sides of a triangle" << endl;
    }   
   return 0;
}