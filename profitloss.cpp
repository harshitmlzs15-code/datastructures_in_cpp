#include <iostream>
#include <string>
using namespace std;
int main() {
   float cp, sp;
   cout << "enter the cost price: ";
   cin >> cp;   
   cout << "enter the selling price: ";
   cin >> sp;      
    if (sp > cp) {
         cout << "profit is: " << sp-cp << endl;
    } else if (cp > sp) {
         cout << "loss is: " << cp - sp << endl;
    } else {
         cout << "no profit no loss" << endl;
    }
   return 0;
}