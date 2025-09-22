#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr){
        sort(arr.begin(),arr.end());
        int diff = arr[0] - arr[1];
        for(int i=1;i<arr.size()-1;i++){
            if(arr[i]-arr[i+1]!=diff)
                return false;
        }
        return true;
    }
};

int main() {
    Solution s;
    vector<int> nums = {3,5,1};
    cout<<endl;
    cout<<s.canMakeArithmeticProgression(nums);
    return 0;
}
