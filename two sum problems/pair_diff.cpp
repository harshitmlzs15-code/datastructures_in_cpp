#include <bits/stdc++.h>
using namespace std;

vector<int> diff(vector<int>& nums, int target) {
    vector<int> ans;

    int start = 0;
    int end = 1;

    while (end < nums.size()) {
        int d = nums[end] - nums[start];

        if (start == end) {
            end++;
        }
        else if (d == target) {
            ans.push_back(start);
            ans.push_back(end);
            return ans;
        }
        else if (d < target) {
            end++;
        }
        else {
            start++;
        }
    }

    return ans;
}

int main(){
    int n, target;
    cin>>n;
    vector<int>v(n);
    cout<<"enter "<<n<<" values: "<<endl;
    for(int i = 0; i<n; i++){
        cin>>v[i];
    }
    cout<<"enter target ";
    cin>>target;
    sort(v.begin(), v.end());
    
    vector<int>output = diff(v, target);
    for(int i = 0; i<output.size()-1; i++){
        cout<<output[i]<<" ";
    }
    
 return 0;
}