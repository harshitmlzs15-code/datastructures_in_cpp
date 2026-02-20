 #include <iostream>
using namespace std;
int main() {
    float age, ex, bs, hra, da, ta, gs;
    gs = 0;
    da = 0;
    hra = 0, bs = 0;
    ta = 0;
    bs = 12000;
    cout << "age: ";
    cin >> age;
    cout << endl << "ex: ";
    cin >> ex;
    if (age<20) 
    {
        cout<<endl<< "you aren't elligible";
    }
    else if (ex >= 12 && age >= 30 && ex<age)
    {
        da = bs / 100 * 6;
        hra = bs / 100 * 20;
        ta = bs / 100 * 5;
        gs = da + hra + bs + ta;
        cout << endl << gs << endl;
    }
    else if (ex < 12 && ex >= 7 && age < 30 && age >= 27 && ex<age)
    {
        da = bs / 10 * 4;
        hra = bs / 100 * 18;
        ta = bs / 100 * 3;
        gs = da + hra + bs + ta;
        cout << endl << gs << endl;

    }
    else if (ex < 7 && age >= 20)
    {
        da = bs / 100 * 2;
        hra = bs / 100 * 10;
        ta = bs / 100 * 1;
        gs = da + hra + bs + ta;
        cout << endl << gs << endl;
    }
       
      else if  (ex < 12 && ex >= 7 || age < 30 && age >= 27 && ex<age)
    {
        da = bs / 10 * 3.5;
        hra = bs / 100 * 18;
        ta = bs / 100 * 3.2;
        gs = da + hra + bs + ta;
        cout << endl << gs << endl;
    }
    else 
    {
     cout << endl << "invalid input"<<endl;
    }
    return 0;
}
