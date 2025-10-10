#include <bits/stdc++.h>
using namespace std;
void printVector(vector<int> vec){
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;
}
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int> prefSum = prefixSum(nums);
        printVector(prefSum);

        if(sum(1,nums.size()-1,prefSum)==0) return 0;
        if(sum(0,nums.size()-2,prefSum)==0) return nums.size()-1;

        for(int i=1;i<nums.size()-1;i++){
            int leftSum = 0,rightSum = 0;

            leftSum = sum(0,i-1,prefSum);
            rightSum = sum(i+1,nums.size()-1,prefSum);

            if(leftSum == rightSum) return i;
        }

        return -1;
    }
    vector<int> prefixSum(vector<int> nums){
        vector<int> prefSum = {nums[0]};
        for(int i=1;i<nums.size();i++){
            prefSum.push_back(nums[i]+prefSum[i-1]);
        }
        return prefSum;
    }
    int sum(int left,int right,vector<int> prefSum){
        
        if(left==0) return prefSum[right];

        return prefSum[right] - prefSum[left-1];
    }
};

int main() {
    Solution s;
    vector<int> nums = {2,1,-1};
    cout<<s.pivotIndex(nums)<<endl;
    
    return 0;
}
