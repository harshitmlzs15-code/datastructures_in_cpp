// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int arr[5];

//     for (int i = 0; i < 5; i++)
//         cin >> arr[i];

//     for (int i = 0; i < 5; i++) {
//         bool found = false;

//         for (int j = i - 1; j >= 0; j--) {
//             if (arr[j] > arr[i]) {
//                 cout << "Previous greater of " << arr[i]
//                      << " is " << arr[j] << endl;
//                 found = true;
//                 break;
//             }
//         }

//         if (!found)
//             cout << "Previous greater of " << arr[i]
//                  << " is -1" << endl;
//     }
// }

// #include <bits/stdc++.h>
// using namespace std;
// // next greater
// int main() {
//     int arr[6] = {1,2,5,3,9,10};

    
//     for(int i = 0; i<6; i++){
//             bool present = false;
//         for(int j = i+1; j<6; j++){
//             if(arr[i]<arr[j]){
//                 cout<<arr[j]<<" ";
//                 present = true;
//                 break;
//             }
//         }
//         if(!present){
//             cout<<-1<<" ";
//         }
//     }
// }

#include <bits/stdc++.h>
using namespace std;

vector<int> prev_greater(const vector<int> &arr)
{
    stack<int> s;
    vector<int> res(arr.size());

    s.push(arr[0]);
    res[0] = -1;

    for (int i = 1; i < arr.size(); i++)
    {
        while (!s.empty() && s.top() <= arr[i])
        {
            s.pop();
        }

        if (s.empty())
        {
            res[i] = -1;
        }
        else
        {
            res[i] = s.top();
        }

        s.push(arr[i]);
    }

    return res;
}
vector<int> prev_smaller(const vector<int> &arr){
    stack <int> min;
    vector<int> res(arr.size());
    min.push(arr[0]);
    res[0] = -1;

    for(int i = 1; i<arr.size(); i++){
        while(!min.empty() && min.top()>= arr[i]){
            min.pop();
        }
        if(min.empty()){
            res[i] = -1;
        }
        else{
            res[i] = min.top();
        }
        min.push(arr[i]);
    }
    return res;
}

vector<int> next_smaller(vector<int> &arr){
    stack<int>s;
    vector<int>res(arr.size());
    s.push(arr[arr.size()-1]);
    res[0] = -1;
    for(int i = arr.size()-1; i>= 0; i--){
        while(!s.empty() && s.top()>=arr[i]){
            s.pop();
        }
        if(s.empty()){
            res[i] = -1;
            s.push(arr[i]);
        }
        else{
            res[i] = s.top();
            s.push(arr[i]);
        }
    }
    return res;
}

vector<int> next_greater(vector<int> &arr){
    stack<int>s;
    vector<int>res(arr.size());
    s.push(arr[arr.size()-1]);
    res[0] = -1;
    for(int i = arr.size()-1; i>= 0; i--){
        while(!s.empty() && s.top()<=arr[i]){
            s.pop();
        }
        if(s.empty()){
            res[i] = -1;
            s.push(arr[i]);
        }
        else{
            res[i] = s.top();
            s.push(arr[i]);
        }
    }
    return res;
}
int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter the elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> ans = next_greater(arr);
    cout << "next greater Elements:\n";

    for (int x : ans)
    {
        cout << x << " ";
    }
    cout << endl;


    vector<int> ans1 = next_smaller(arr);
    cout << "next smaller Elements:\n";

    for (int x : ans1)
    {
        cout << x << " ";
    }
    cout << endl;

    vector<int> ans2 = prev_smaller(arr);
    cout << "previous smaller Elements:\n";

    for (int x : ans2)
    {
        cout << x << " ";
    }
    cout << endl;

    vector<int> ans3 = prev_greater(arr);
    cout << "previous greater Elements:\n";

    for (int x : ans3)
    {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}