#include <iostream>
using namespace std;
void sum(int a, int b){
 cout<<a+b<<endl;
}
int sumz(int a, int b, int c){
return a+b+c;
}
int main(){
 sum(5, 10);
cout<<sumz(2, 3, 4)<<endl;
 return 0;
}