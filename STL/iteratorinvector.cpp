// v.begin() : first element
// v.end() : postn next to last elemtn
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    vector<int>v = {4,6,8,10};
    for(auto it = v.begin(); it!= v.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    // reverse
    for(auto it = v.rbegin(); it!= v.rend(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    // traditional for loop
    // sorting in vertor asc
    sort(v.begin(), v.begin());
    for(int i = 0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

     // sorting in vertor desc
    vector<int>b = {4,2,8,11};
    sort(b.begin(), b.end(), greater<int>()); //sort(v.rbegin(), v.rbegin());
    for(int i = 0; i<b.size(); i++){
        cout<<b[i]<<" ";
    }


    // searching in vector // ascending sorted
    cout<<binary_search(v.begin(), v.end(), 4)<<endl;

    //indexfind

    cout<<find(v.begin(), v.end(), 4) - v.begin()<<endl;

    // count max min 
    // lower b
 return 0;
}