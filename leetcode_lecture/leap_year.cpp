// #include <iostream>
// using namespace std;

// int main(){
//   int year;
//   cout<<"enter a year to check whether it's a leap year or not"<<endl;
//   cin>>year;

//   if(year%400 == 0){
//     cout<<" it's a leap year"<<endl;
//     return 0;
//   }
//   else if ( year%4 == 0 && year%100 != 0){
//        cout<<" it's a leap year"<<endl;
//   }
//   else
//      cout<<" it's not leap year"<<endl;
//  return 0;
// }

#include <iostream>
using namespace std;

int main() {
    int year;
    cout << "Enter a year to check whether it's a leap year or not: ";
    cin >> year;

    if (year <= 0) {
        cout << "Please enter a valid positive year." << endl;
        return 1;
    }

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        cout << "It's a leap year." << endl;
    else
        cout << "It's not a leap year." << endl;

    return 0;
}