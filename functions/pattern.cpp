#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
for(int x = 1; x<=n;x++){
    for(int j = x; j>=1; j--){
        cout<<j;
    }
    cout<<endl;
}
}
