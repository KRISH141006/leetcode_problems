#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findGCD(vector<int>& nums) {
        // int min = *min_element(nums.begin(),nums.end());
        // int max = *max_element(nums.begin(),nums.end());
        int min_num = INT_MAX,max_num = INT_MIN;
        for(int i=0;i<nums.size();i++){
            min_num = min(min_num,nums[i]);
            max_num = max(max_num,nums[i]);
        }
        return gcd(min_num,max_num);
    }
    int gcd(int n1,int n2){
       return (n2==0)?n1:gcd(n2,n1%n2);
    }
};

int main() {
    cout<<endl;
    Solution s;
    vector<int> nums = {2,5,6,9,10};
    cout<<s.findGCD(nums);
    return 0;
}
