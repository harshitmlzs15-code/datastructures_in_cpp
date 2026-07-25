#include <bits/stdc++.h>
using namespace std;

int main(){
    string s = "abc";
    stack<char> st;
    for(int i = 0; i < s.size(); i++){
        st.push(s[i]); //push operations
    }
    char ch;
    string res;
    while(!st.empty()) {
    ch = st.top();
    st.pop(); //this is important otherwise infinite loop will occur
    res.push_back(ch);
    }
    cout<<res;
 return 0;
}