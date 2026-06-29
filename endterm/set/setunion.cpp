#include <bits/stdc++.h>
using namespace std;

int main(){
unordered_set<int>a = {1,4,5,8};
unordered_set<int>b = {2,4,3,6};
set<int>r;
// set_union(a.begin(), a.end(), b.begin(), b.end(), inserter(r, r.begin()));

// for(int val: r){
//   cout<<val<<" ";
// }

unordered_set<int> p = a;
p.insert(b.begin(), b.end());

cout<<endl;
for(int vale: p){
  cout<<vale<<" ";
}
}