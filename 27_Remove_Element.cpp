#include<bits/stdc++.h>
using namespace std;
void printVector(vector<int> vec,int size);

class Solution{
public :
    int removeElement(vector<int>& nums, int val){
        vector<int> vec;
        for(int i =0;i<nums.size();i++){
            if(nums[i]==val) continue;
            else vec.push_back(nums[i]);
        }
        nums = vec;
        return vec.size();
    }
};
void printVector(vector<int> vec,int size){
    for(int i=0;i<size;i++){
        cout<<vec[i]<<"  ";
    }
    cout<<endl;
}
int main(){
    Solution s;
    vector<int> nums = {3,2,2,3};
    int val = 3;
    int k = s.removeElement(nums,val);
    printVector(nums,k);
    
    return 0;
}