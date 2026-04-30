#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int sum=0, rem=0;
    for(int i=0; n!=0; i++){
        rem= n%10;
        sum = sum + rem;
        n=n/10;
    }
    cout << sum<< endl;
    return 0;
}
// long long n;
// int i;
// cin>>n;
// if(n==0){
//     cout<<"1";
// }
// for(i=0;n>0;i++){
//     n=n/10;
// }
// cout<<i<<endl;
// }

