 #include <iostream>
 #include <set>
 using namespace std;
 
 int main(){

    multiset<int>sy;
    sy.insert(30);
    sy.insert(39);
    sy.insert(80);
    sy.insert(90);
    sy.insert(30);

    for(auto it = sy.begin(); it!=sy.end(); it++){
        cout<<*it<<endl;
    }
    cout<<endl;

    sy.erase(30); // saare same no ek saath delete
for(auto it = sy.begin(); it!=sy.end(); it++){
        cout<<*it<<endl;
    }
  return 0;
 }
 
