#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int>store {2,1,3,5,0,6};
    stack<int>s;
    vector<int>ans;
    for(int v : store){
        if(s.empty()){
            s.push(v);
        }
        else if (s.top()>v){
            s.push(v);
        }
        else{
            s.push(s.top());
        }
    }
    while(!s.empty()){
        ans.push_back(s.top());
        s.pop();
    }
    reverse(ans.begin(), ans.end());

    for(int v: ans){
        cout<<v<<" ";
    }
 return 0;
}