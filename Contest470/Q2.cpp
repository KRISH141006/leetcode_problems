#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n = 0;
        bool allzeroes = true;
        for(int val : nums){
            n = n ^ val;
            if(val != 0) allzeroes = false;
        }
        if(allzeroes) return 0;
        return n == 0 ? nums.size() - 1 : nums.size();
    }
};
int main(){
    Solution s;
    vector<int> nums = {7,6,1,9};
    cout<<s.longestSubsequence(nums)<<endl;
    return 0;
}