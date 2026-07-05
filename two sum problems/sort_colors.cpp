// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int arr[6] = {2,0,2,1,1,0};
//     int start = 0;
//     int end = 5;

//     while(start<=end){
//         int end;
//         if(arr[start]>arr[end]){
//             int temp = arr[end];
//             arr[end] = arr[start];
//             arr[start] = temp;
//             start ++;
//             end --;
//         }
//        else if(arr[start]<arr[end]){
//             end--;

//        }
//         else{
//             int temp = arr[end-1];
//             arr[end-1] = arr[start];
//             arr[start] = temp;
//             end --;
//         }
//     }
//     for(int i = 0; i<6; i++){
//         cout<<arr[i]<<" ";
//     }
  
//  return 0;
// }