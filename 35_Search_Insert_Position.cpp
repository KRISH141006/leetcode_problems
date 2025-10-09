#include <bits/stdc++.h>
using namespace std;
void printVector(vector<int> nums,int front,int rear){
    for(int i=front;i<=rear;i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
}
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
       return search(nums,0,nums.size()-1,target);
    }
    int search(vector<int> nums,int front,int rear,int target){
        cout<<"front = "<<front<<",rear = "<<rear<<endl;
        printVector(nums,front,rear);
        if(front<=rear){
            int mid = front + (rear - front)/2;            
            cout<<"mid = "<<mid<<endl;
            if(target==nums[mid]){
                return mid;
            }
            else if(target>nums[mid]){
                return search(nums,mid+1,rear,target);
            }
            else if(target<nums[mid]){
                return search(nums,front,mid-1,target);
            }
        }
        else return front;
    }
};

int main() {
    Solution s;
    vector<int> nums = {1,2,3,4,5,6,7,8,9};
    int target = 8;
    cout<<s.searchInsert(nums,target)<<endl;
    return 0;
}
