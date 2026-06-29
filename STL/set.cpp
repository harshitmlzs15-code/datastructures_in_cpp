#include <iostream>
#include <set>
using namespace std;

// unique, ascending(sorted)

class Person{
    public:
    string name;
    int age;

    bool operator < (const Person &other) const{
            return age<other.age;
    }
};


int main(){
  // for reverse(descending) order set<int, greater<int> > s;
  set<int>s;
  s.insert(40);
  s.insert(39);
   s.insert(49);
  s.insert(89);
   s.insert(60);
  s.insert(39);
    //iteraton
  for(auto it = s.begin(); it!= s.end(); it++){
    cout<<*it<<" ";
  }
int n;
cin>>n;
  //m1: find
    if(s.find(n)!=s.end()){
        cout<<"present\n";
    }
    else{
        cout<<"absent\n";
    }

    //m2 : count function for finding an element
    if(s.count(84)){
        cout<<"present\n";
    }
    else
    cout<<"not present\n";
     // m3:  cout<<s.count(78)<<" "; // 0 = false 1 = true

    set<Person>x;

    Person p1;
    p1.age = 18;
    p1.name = "harshit";

    Person p2;
    p2.age = 30;
    p2.name = "srajan";

    Person p3;
    p3.age = 23;
    p3.name = "shiva";

        x.insert(p1);
        x.insert(p2);
        x.insert(p3);
    
    for(auto it = x.begin(); it!=x.end(); it++){
        cout<<it->name<<" "<<it->age<<" "<<endl;
    }

    multiset<int>sy;
    sy.insert(30);
    sy.insert(39);
    sy.insert(80);
    sy.insert(90);
    sy.insert(30);

 return 0;
}