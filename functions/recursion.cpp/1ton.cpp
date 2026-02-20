#include <iostream>
using namespace std;
void iton(int x, int y){
    if(x>y) return;
    cout<<x<<endl;
    iton(x+1, y);
}

int main(){
    int n;
    cin>>n;
    iton(1, n);

 return 0;
}