#include <bits/stdc++.h>
using namespace std;

int main(){
    string st = "(aa(bdc))p(de)";
    stack<char>s;
    vector<int>store;
    int count = 0;
        for(char ch: st){
            if(ch == '('){
                count++;
                s.push(count);
                store.push_back(count);
            }
            if(ch == ')'){
                store.push_back(s.top());
                s.pop();
            }
        }
        for(int ch: store){
            cout<<ch<<" ";
        }
 return 0;
}