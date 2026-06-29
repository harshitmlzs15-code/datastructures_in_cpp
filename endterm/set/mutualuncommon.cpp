#include <bits/stdc++.h>
using namespace std;

int main(){
        int a[5] = {2,3,1,4,12};
        int b[6] = {10, 14, 4, 12, 2, 7};

        set<int>s1;
        set<int>s2;
        set<int>q;
        set<int>r;

        for(auto x: a){
            s1.insert(x);
        }

        for(auto x: b){
            s2.insert(x);
        }

        set_difference(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(q, q.begin()));
        set_difference(s2.begin(), s2.end(), s1.begin(), s1.end(), inserter(r, r.begin()));

            cout<<q.size()*r.size();
    
  
 return 0;
}