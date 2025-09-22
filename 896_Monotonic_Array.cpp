#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        if(nums.size()==1) return true;
        int diff = nums[0] - nums[1];
        for(int i=1;i<nums.size()-1;i++){
            int tempDiff = nums[i]-nums[i+1]; 
            if(tempDiff == 0) {
                continue;
            }
            else if((diff<0 && tempDiff<0)||diff>0 && tempDiff>0) {
                diff = tempDiff;
                continue;
            }
            else return false;
        }
        return true;
    }

    bool bFAisMonotonic(vector<int>& nums) {
        vector<int> org_nums = nums;
        sort(nums.begin(),nums.end());
        if(org_nums==nums) return true;
        reverse(nums.begin(),nums.end());
        return (nums==org_nums);
    }
};

int main() {
    Solution s;
    vector<int> nums = {1,2,2,3};
    cout<<s.isMonotonic(nums);
    return 0;
}
