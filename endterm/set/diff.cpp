#include <bits/stdc++.h>
using namespace std;

int main(){
    // unordered
    unordered_set<int>h = {7,3,5,5,7,0,8,5,4,3};
    unordered_set<int>t = {7,9,8,5,2,1,2,6,0,4};
     unordered_set<int>diff;
     for(auto v: h){
        if(!t.count(v)){
            diff.insert(v);
        }
     }

  for(auto v: diff){
    cout<<v<<" ";
  }

  //ordered set
//     set<int>h = {7,3,5,5,7,0,8,5,4,3};
//     set<int>t = {7,9,8,5,2,1,2,6,0,4};
//     set<int>p;
//   set_difference(h.begin(), h.end(), t.begin(), t.end(), inserter(p, p.begin()));
//   for(auto v: p ){
//     cout<<v<<" ";
//   }
//  return 0;
}