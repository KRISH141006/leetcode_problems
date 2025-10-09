#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> powerset;
    vector<int> set;
    vector<vector<int>> subsets(vector<int>& nums) {
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
        getset(indx+1,nums);
    }
};

int main() {
    Solution s;
    vector<int> nums = {1,2,3};
    vector<vector<int>> subset = s.subsets(nums);
    for(int i=0;i<subset.size();i++){
        cout<<"[ ";
        for(int j=0;j<subset[i].size();j++){
            cout<<subset[i][j]<<" ";
        }
        cout<<"]";
        cout<<endl;
    }
    return 0;
}
