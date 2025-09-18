#include <bits/stdc++.h>
using namespace std;

class Solution{
public :
    int removeDuplicates(vector<int>& nums){
        if(nums.size()==1) return 1;
        if(nums.size()==2) {
            if(nums[0]==nums[1]) return 1;
            else return 2;
        }
        int k=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[k-1]){
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
};
int main(){
    Solution s;
    vector<int> nums = {0,1,1,1,2,2,2,2,3,3,3,4,5,6};
    vector<int> *pnums = &nums;
    int k = s.removeDuplicates(*pnums);
    cout<<'\n';
    for(int i=0;i<k;i++)
        cout<<nums[i]<<'\n';
    return 0;
}