#include <iostream>
using namespace std;

bool isarmstrong(int value){
    int count = 0;
    int temp = value;
    // for digit count
    if (temp == 0) 
    count = 1;
    else{
    while(temp>0){
        count++;
        temp = temp/10;
    }

}
temp = value;
int answer = 0; 
  for(int i = 0; i<count; i++) {
    int mul = 1;
    int rem = value%10;
        int j = count;
        while(j>0){
            mul = mul*rem;
            j -- ;
        }
    answer+=mul;
    value = value/10;
  }
if(answer==temp){ return true;
}
else {
    return false;
}
}
int main(){
    int value;
    cout<<"enter a value: ";
    cin>>value;
    cout<<(isarmstrong(value)?"armstrong":"not armstrong")<<endl;
 return 0;
}