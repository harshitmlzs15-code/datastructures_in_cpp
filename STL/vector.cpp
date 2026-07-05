#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v(5, 3);
    v.push_back(4); // add element in vector
    for(int it: v){
        cout<<it<<" ";
    }
    cout<<endl;

    // remove last element from vector
    v.pop_back(); // 0(1)
    // for(int it: v){
    //     cout<<it<<" ";
    // }

    v.clear(); //removes all the elements
    // for(int it: v){
    //     cout<<it<<" ";
    // }


    // remove mid 
     vector<int>ve(5, 3);
     ve.erase(v.begin() + 2);  // 0(n)
     ve.insert(v.begin()+1, 69);
     for(int it: ve){
        cout<<it<<" ";
    }

    // size and capacity
    // size: total filled space: element present
    // capacity: amount of element vector can hold

    // front, back, at, empty

    cout<<endl<<ve.front(); //first element
    cout<<endl<<ve.back(); //last element
    cout<<endl<<v.empty(); // is vector empty 0: false, 1: true
    cout<<endl<<ve.at(2); // element at index


    // we can copy one vector to another  a = arr format
  
 return 0;
}