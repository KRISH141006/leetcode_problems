#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> sum = {nums[0]};
        for(int i=1;i<nums.size();i++){
            sum.push_back(nums[i]+sum[i-1]);
        }
        return sum;
    }
};

int main() {
    Solution s;
    vector<int> nums = {1,2,3,4};
    nums = s.runningSum(nums);
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    return 0;
}
