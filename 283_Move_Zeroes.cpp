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
    void moveZeroes(vector<int>& nums) {
        int count = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                cout<<"0 found at index "<<i<<endl;
                nums.erase(nums.begin()+i);
                count++;        
                i--;       
            }
        }
        printVector(nums);
        cout<<count<<endl;
        for(int i=0;i<count;i++){
            nums.push_back(0);
        }
    }
};

int main() {
    Solution s;
    vector<int> nums = {0,0,1};
    s.moveZeroes(nums);
    printVector(nums);
    return 0;
}
