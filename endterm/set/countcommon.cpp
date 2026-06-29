#include <bits/stdc++.h>
using namespace std;

int main(){
    string s1 = "Quickbrownfox";
    string s2 = "Learnfromlearnys";

    set<char>v1;
    for (auto ch: s1){
        v1.insert(ch);
    }
    set<char>v2;
    for (auto ch: s2){
        v2.insert(ch);
    }

     set<char>result;
        set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), inserter(result, result.begin()));

    for (auto ch: result){
           cout<<ch<<" ";
        
    }

        cout<<result.size();

 return 0;
}