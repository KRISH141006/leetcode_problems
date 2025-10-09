#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    long long splitArray(vector<int>& nums){
        int ans = INT_MAX;
        bool found=0;
        for(int i=0;i<nums.size()-1;i++){
            vector<int> subArray1(nums.begin(),nums.begin()+i+1);
            vector<int> subArray2(nums.begin()+i+1,nums.end());
            if(isIncreasing(subArray1)&& isDecreasing(subArray2)){
                found = 1;
                int diff = abs(accumulate(subArray1.begin(),subArray1.end(),0ll)-accumulate(subArray2.begin(),subArray2.end(),0ll));
                ans = min(ans,diff);
            }
        }
        return (found?ans:-1);
    }
    bool isIncreasing(vector<int>& arr) {
        for (int i = 1; i < arr.size(); i++)
            if (arr[i] <= arr[i-1]) return false; 
        return true;    
    }

    bool isDecreasing(vector<int>& arr) {
        for (int i = 1; i < arr.size(); i++)
            if (arr[i] >= arr[i-1]) return false; 
        return true;
    }

};
int main(){
    Solution s;
    vector<int> nums = {1,3,2};
    cout<<s.splitArray(nums);
    return 0;
}