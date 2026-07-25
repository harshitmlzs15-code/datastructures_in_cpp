#include <bits/stdc++.h>
using namespace std;

int main(){
    string s = "abbaca";
    stack<char>st;
    string res;
    for(int i = 0; i<s.length(); i++){
        if(st.empty()){
        st.push(s[i]);
        continue;
        } 
        else if(st.top() == s[i] ){
            st.pop();
            continue;
        }
        else{
            st.push(s[i]);
        }
    }
        while(!st.empty()){
            res.push_back(st.top());
            st.pop();
        }
        reverse(res.begin(), res.end());
    cout<<res;
 return 0;
}