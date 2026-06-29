#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v1 = {1,2,2,3,5,6,1,8};
    map<int, int, greater<int>>m1;
    for(auto num: v1){
        m1[num]+= 1;
    }
    for(auto num1: m1){
        cout<<num1.first<<" "<<num1.second<<endl;
    }

  
 return 0;
}