#include <bits/stdc++.h>
using namespace std;

class NumArray {
public:
    vector<int> prefixSum;
    NumArray(vector<int>& nums) {
        prefixSum = {nums[0]};

        for(int i=1;i<nums.size();i++){
            prefixSum.push_back(prefixSum[i-1]+nums[i]);
        }
    }

    int sumRange(int left, int right) {
        if(left==0){
            return prefixSum[right];
        }

        return prefixSum[right] - prefixSum[left-1];
    }
};
/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */

int main() {
    vector<int> nums = {-2, 0, 3, -5, 2, -1 };
    NumArray *obj = new NumArray(nums);
    int param_1 = obj->sumRange(0,2);
    int param_2 = obj->sumRange(2,5);
    int param_3 = obj->sumRange(0,5);

    cout<<"param_1 = "<<param_1<<endl; 
    cout<<"param_2 = "<<param_2<<endl; 
    cout<<"param_3 = "<<param_3<<endl; 
    
    return 0;
}
