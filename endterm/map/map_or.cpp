#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int>vec = {1,2,2,3,5,6,1,8};
    unordered_map<int, int> mymap;

    for(auto num: vec){
        mymap[num] += 1;
    }

    for(auto num: mymap){
        cout<< num.first<<" "<<num.second<<endl;
    }
  
 return 0;
}