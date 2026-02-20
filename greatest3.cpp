#include <iostream>
using namespace std;
int main() {
   int a, b, c;
   cout << "enter 1st number: ";
   cin >> a;
    cout << "enter 2nd number: ";
   cin >> b;
    cout << "enter 3rd number: ";
   cin >> c;
   if (a<0 || b<0 || c<0) 
       cout << "invalid input" << endl;
    else if (a>c && a>b) 
    {
       cout << a << " is greatest" << endl;
    } else if (b>c && b>a) 
    {
       cout << b << " is greatest" << endl;
    } 
    else if (c>a && c>b) 
       cout << c << " is greatest" << endl;
       else if (b==a && b>c)
        {
         cout << a << " and " << b << " are greatest" << endl;
     }
      else if (a==c && a>b)
       {
         cout << a << " and " << c << " are greatest" << endl;
     } 
     else if (b==c && b>a) 
     {
         cout << b << " and " << c << " are greatest" << endl;
    }
     else
      {
       cout << "all are equal" << endl;
     }
      
   return 0;
}