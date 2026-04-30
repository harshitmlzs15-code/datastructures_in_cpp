#include <iostream>
using namespace std;
int main() {
   float area=0, pm=0, l, b;
   cout << "enter the value of length: ";
   cin >> l;   
   cout << "enter the value of breadth: ";
   cin >> b;      
    area = l * b;
    pm = 2 * (l + b);
   cout << "area is " << area << endl;
   cout << "perimeter is " << pm << endl;
   if (area > pm) {
       cout << "area is greater than perimeter" << endl;
   } else if (pm > area) {
       cout << "perimeter is greater than area" << endl;
   } else {
       cout << "area and perimeter are equal" << endl;
   }
   return 0;
}