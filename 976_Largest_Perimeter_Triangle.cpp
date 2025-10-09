#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        int size=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=size-1;i>1;i--){
            if(nums[i-2]+nums[i-1]>nums[i]){
                return nums[i-2]+nums[i-1]+nums[i];
            }
        }   
        return 0;
    }
};

int main() {
    Solution s;
    vector<int> nums = {3,4,9,12,15};
    cout<<s.largestPerimeter(nums);
    return 0;
}
