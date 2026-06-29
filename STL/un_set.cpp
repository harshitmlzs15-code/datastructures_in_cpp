#include <bits/stdc++.h>
using namespace std;
// O(1) me insertion, deletion and search
// the output is not sorted nor in the same order as input
int main(){
  unordered_set<int>hi;
  hi.insert(56);
  hi.insert(46);
  hi.insert(96);
  hi.insert(36);
  hi.insert(1);

  //traversal
  for(auto it = hi.begin(); it!= hi.end(); it++){
    cout<<*it<<" ";
  }
  
//   unordered multiset
cout<<endl;
    unordered_multiset<int>h;
  h.insert(90);
  h.insert(36);
  h.insert(90);
  h.insert(35);
  h.insert(10);

 for(auto it = h.begin(); it!= h.end(); it++){
    cout<<*it<<" ";
  }
 return 0;
}