#include <bits/stdc++.h>
using namespace std;

int main(){
    //map<type1, type2>variable name;
    //stores data in key value pairs make_pair is used for pairs
    map<int, int>m;
    m.insert(make_pair(4, 6));
    m.insert(make_pair(3, 9));
    m.insert(make_pair(1, 0));
    m.insert(make_pair(2, 9));
    m.insert(make_pair(2, 7)); //this won't print duplicate key
    

        // iteration :
        for(auto it = m.begin(); it!=m.end(); it++){
            cout << it->first<< " "<<it->second<<endl;
        }
 return 0;
}