#include <bits/stdc++.h>
using namespace std;

int main(){
    unordered_set<int> a = {2,3,1,5};
    unordered_set<int> b = {2,9,1,5};
    unordered_set<int> c;
    for(auto num: a){  //works for ordered too
        if (b.count(num)){
            c.insert(num);
        }
    }

    for(auto nu: c){
        cout<<nu<<" ";
    }
    cout<<endl;
    set<int>result;
    set<int>h = {7,3,5,5,7,0,8,5,4,3};
    set<int>t = {7,9,8,5,2,1,2,6,0,4};

    set_intersection(h.begin(), h.end(), t.begin(), t.end(), inserter(result, result.begin()));

    for(auto nu: result){
        cout<<nu<<" ";
    }

 return 0;
}