#include <bits/stdc++.h>
using namespace std;

// void segregate( int *arr, int start, int end){
//     while(start<end){
//         if( arr[start] == 1 && arr[end]==0){
//             int temp = arr[end];
//             arr[end] = arr[start];
//             arr[start] = temp;
//         }
//         start++;
//         end--;
//     }
// }
void segregate(int *arr, int start, int end) {
    while (start < end) {
        if (arr[start] == 0) {
            start++;
        }
        else if (arr[end] == 1) {
            end--;
        }
        else {
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;

            start++;
            end--;
        }
    }
}


int main(){
  int arr[6] = {1,0,1,0,1,0};
//   approach 1
//   int count0 = 0;
//   int count1 = 0;
//   for(int i = 0; i<6; i++){
//     if(arr[i] == 0) count0++;
//     else count1++;
//   }
//   cout<<count0<<" "<<count1<<" "<<endl;
//   for(int i = 0; i<count0; i++){
//     arr[i] = 0;
//   }
//   for(int i = count0; i<6; i++){
//     arr[i] = 1;
//   }
//   for(int i = 0; i<6; i++){
//     cout<<arr[i];
//   }

// approach 2: two pointer o(n) space o(1)

int start = 0;
int end = 5;
 segregate(arr, 0, 5);

 for(int i = 0; i<6; i++){
     cout<<arr[i]<<endl;
 }


  
 return 0;
}