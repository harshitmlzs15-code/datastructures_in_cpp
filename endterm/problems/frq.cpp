#include <bits/stdc++.h>
using namespace std;

int main(){
    set<int>v = {5,10,15,20,25};
    int sum;
    if(v.count(15)){
        cout<<"present ";
    }
    else{
        cout<<"not present ";
    }
    v.erase(20);
    sum = accumulate(v.begin(), v.end(), 0);

    cout<<sum<<" ";
 return 0;
}