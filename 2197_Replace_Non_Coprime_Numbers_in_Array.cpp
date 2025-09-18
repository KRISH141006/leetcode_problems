#include<bits/stdc++.h>
#include <numeric>
using namespace std;
void printVector(vector<int> vec){
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<"  ";
    }
    cout<<endl;
}
class Solution{
public :
    vector<int> replaceNonCoprimes(vector<int> nums) {
        bool flag = 0;
        if(nums.size()==1)return nums;
        for(int i=0;i<nums.size()-1;i++){
            cout<<"vector before : ";
            printVector(nums);
            cout<<i<<" Checking "<<nums[i]<<" "<<nums[i+1]<<endl;
            if(!(std::gcd(nums[i],nums[i+1])==1)){
                cout<<"gcd is not 1"<<endl;
                int lcmNum = std::lcm(nums[i],nums[i+1]);
                nums.erase(nums.begin()+i);
                nums.erase(nums.begin()+i);
                nums.insert(nums.begin()+i,lcmNum);
                if(i<1)
                    i--;
                else i-=2;
                
            }
            cout<<"vector after : ";
            printVector(nums);
        }
        return nums;
    }
    // int gcd(int a, int b) {
    // while(b != 0) {
    //     int t = b;
    //     b = a % b;
    //     a = t;
    // }
    //     return a;
    // }

    // int lcm(int a, int b) {
    //     return (a / gcd(a, b)) * b;
    // }
};
int main(){
    Solution s;
    vector<int> nums = {6,4,3,2,7,6,2};
    nums = s.replaceNonCoprimes(nums);
    cout<<"final vector : ";
    printVector(nums);
    cout<<endl;
    return 0;
}