#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long first,second,third;
        first = second = third = LLONG_MIN;

        for(int i=0;i<nums.size();i++){
            int curr = nums[i];
            if(first == curr || second == curr || third == curr) continue;
            if(first<curr){
                third = second;
                second = first;
                first = curr;
            } else if(second<curr){
                third = second;
                second = curr;
            } else if(third<curr){
                third = curr;
            }
        }   

        return third == LONG_MIN ? first : third;
    }
};

int main() {
    Solution s;
    vector<int> nums = {2,3,1};
    cout<<s.thirdMax(nums);
    return 0;
}
