#include <iostream>
#include <list>
using namespace std;
//dll se form hua hai..
int main(){
  list<int>l1;
  l1.push_back(50);
  l1.push_back(56);
  l1.push_back(90);
  l1.push_back(89);
  l1.push_back(30); // adds at back
  l1.push_front(69); // adds at front
  l1.pop_front(); // deletes the first element
  cout<<l1.size()<<endl; //tells the size of list
  cout<<l1.front()<<endl;  //shows the first element
  cout<<l1.back()<<endl; // shows the last element
  cout<<l1.empty()<<endl; // 0 for non empty, 1 for empty

  //printing the whole list
  for(auto it = l1.begin() ;it!= l1.end(); it++){
    cout<<*it<<" ";
  }
  cout<<endl;
   //printing the whole list in reverse
  for(auto it = l1.rbegin() ;it!= l1.rend(); it++){
    cout<<*it<<" ";
  }
 return 0;
}