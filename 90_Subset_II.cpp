#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> powerset;
    vector<int> set;
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        getset(0,nums);       
        return powerset;    
    }
    void getset(int indx,vector<int>& nums){
        if(indx==nums.size()){
            powerset.push_back(set);
            return;
        }
        set.push_back(nums[indx]);
        getset(indx+1,nums);

        set.pop_back();
        int i = indx+1;
        while((i<nums.size()) &&(nums[i]==nums[i-1])) i++;
        getset(i,nums);
    }
};

int main() {
    Solution s;
    vector<int> nums = {1,2,2};
    vector<vector<int>> subset = s.subsetsWithDup(nums);
    for(int i=0;i<subset.size();i++){
        for(int j=0;j<subset[i].size();j++){
            cout<<subset[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
