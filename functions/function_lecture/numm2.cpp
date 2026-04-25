#include <iostream>
using namespace std;

int factorial(int x){
int fact = 1;
int ans = 1;
if (x == 0 || x == 1) return 1;
while(fact<=x){
    ans*=fact;
    fact++;
}
return ans;
}
bool prime (int z){
    int n = 2;
    if(z<2) return false;
    else{
        while(n<=z/2){ //(n*n <= z )
            if(z%n == 0){
                return false;
            }
            n++;
        }
        return true;
    }
}
int main(){
int a, b;
cin>>a>>b;
cout<<factorial(a)<<endl;
cout<<factorial(b)<<endl;
cout<<prime(a)<<endl; // this print only 0, or 1
//to print true or false use boolalpha
cout<<boolalpha<<prime(b)<<endl;
cout<<prime(a-b)<<endl;
 return 0;
}