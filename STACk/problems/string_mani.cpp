#include <bits/stdc++.h>
using namespace std;

int main(){
  vector<string> arr = {"ab", "ac", "da", "da", "ac","db", "ea"};
  stack<string>s;
  for( string v: arr){
    if(s.empty()){
        s.push(v);
    }
    else{
        if(s.top() == v){
            s.pop();
            continue;
        }
        else{
            s.push(v);
        }
    }
  }
  vector<string> output;
  while(!s.empty()){
    output.push_back(s.top());
    s.pop();
  }
  reverse(output.begin(), output.end());
  for( string v: output){
    cout<<v<<" ";
  }
 return 0;
}