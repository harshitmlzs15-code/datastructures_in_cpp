// valid paranthesis :
// logic: the most recent opened paranthesis should be the most recent paranthesis to be closed and no opening paranthesis should be left at the end..

#include <bits/stdc++.h>
using namespace std;

bool validparent(string st){
    stack<char>s;
    for(int i = 0; i<st.size(); i++){
        if(st[i] == '(' || st[i] == '[' || st[i] == '{'){
            s.push(st[i]);
        }
       else if (!s.empty() &&  ((s.top() == '[' && st[i] == ']') ||
     (s.top() == '{' && st[i] == '}') ||
     (s.top() == '(' && st[i] == ')'))) {
    s.pop();
     }
    else if (isalpha(st[i])){
        continue;
    }
else {
    return false;
}
}
    if(s.empty()){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    string st;
    cout<<"enter string"<<endl;
    cin >> st;
    // char sm = '(', sq = '[', cur = '{';


//     for(int i = 0; i<st.size(); i++){
//         if(st[i] == sm || st[i] == sq || st[i] == cur){
//             s.push(st[i]);
//         }
//        else if (!s.empty() &&  ((s.top() == sq && st[i] == ']') ||
//      (s.top() == cur && st[i] == '}') ||
//      (s.top() == sm && st[i] == ')'))) {
//     s.pop();
// }
// else {
//     cout << "invalid parenthesis";
//     return 0;
// }
// }

//     if(s.size() == 0){
//         cout<<"valid parenthesis";
//     }
//     else{
//         cout<<"invalid parenthesis";
//     }
  
if (validparent(st)){
    cout<<"valid parenthesis";
}
else{
    cout<<"invalid parenthesis";
}
 return 0;
}


//This is how I would rate your progress:

// ✅ Used a stack correctly.
// ✅ Handled empty-stack cases safely.
// ✅ Returned early on invalid input.
// ✅ Encapsulated the logic into a function.
// ✅ Time complexity: O(n)
// ✅ Space complexity: O(n)

// That's the standard solution for the Valid Parentheses problem.
// There are two different pieces of information:

// Count → "How many opening brackets are still unmatched?"
// Order → "Which opening bracket should be closed next?"

// Counters solve (1).

// Stacks solve (1) + (2).

// That's why balanced-parentheses is one of the classic examples of a stack problem.