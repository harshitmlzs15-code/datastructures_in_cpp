#include <bits/stdc++.h>
using namespace std;

int main(){
  vector<int>arr = {2,3,5,-4, 6, 2, -8, 9};
  stack<int>st;
  for( int v: arr){
    if(st.empty()){
            st.push(v);
    }
    else{
        if ((st.top() >= 0 && v >= 0) || (st.top() < 0 && v < 0)){
            st.push(v);
        }
        else{
            st.pop();
            continue;
        }
    }
  }
 vector<int>output;

 while(!st.empty()){
    output.push_back(st.top());
    st.pop();
 }
 reverse(output.begin(), output.end());
 for(int v: output){
    cout<<v<<" ";
 }
 return 0;
}