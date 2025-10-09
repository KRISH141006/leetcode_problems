#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string triangleType(vector<int>& nums) {
        int sum = 0;
        if(nums[0]==nums[1] && nums[1]==nums[2]) return "equilateral";
        else{
            if(nums[0]+nums[1]>nums[2] && nums[1]+nums[2]>nums[0] && nums[0]+nums[2]>nums[1]){
                if(nums[0]==nums[1] || nums[1]==nums[2] || nums[0]==nums[2]) return "isosceles";
                else return "scalene";
            }
            else return "none";
        }
    }
};

int main() {
    Solution s;
    vector<int> nums = {3,3,3};
    s.triangleType(nums);
    return 0;
}
