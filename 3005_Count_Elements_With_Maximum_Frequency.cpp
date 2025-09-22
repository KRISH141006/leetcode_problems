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
    int maxFrequencyElements(vector<int>& nums) {
        vector<int> frequency(100,0);
        for(int i=0;i<nums.size();i++){
            frequency[nums[i]]++;
        }
        // printVector(frequency);
        int maxF = *max_element(frequency.begin(),frequency.end()),ans=0;
        for(int i=0;i<frequency.size();i++){
            if(frequency[i]==maxF){
                ans+=maxF;
            }
        }
        return ans;
    }
};

int main() {
    Solution s;
    vector<int> nums = {1,2,2,3,1,4};
    s.maxFrequencyElements(nums);
    return 0;
}

