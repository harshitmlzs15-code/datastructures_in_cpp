#include <bits/stdc++.h>
using namespace std;

int main(){
  stack<int>st;
  vector<int>a;
  st.push(4);
  st.push(3);
  st.push(2);
  st.push(1);
  st.push(8);

  while(!st.empty()){
    a.push_back(st.top());
    st.pop();
  }
  st.push(2);
  for(int i = a.size()-1; i>=0; i--){
    st.push(a[i]);
  }

   while(!st.empty()){
    cout<<st.top()<<" "<<endl;
    st.pop();
  }

 return 0;
}