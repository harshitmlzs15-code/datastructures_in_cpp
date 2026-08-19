#include <bits/stdc++.h>
using namespace std;

int main(){
    char arr[5] = {'h', 'e', 'l', 'l', 'o'};
    stack<char>st;
    string res;
    for(char ch: arr){
        st.push(ch);
    }
    while(!st.empty()){
        res += st.top();
        st.pop();
    }
  cout<<res;
 return 0;
}