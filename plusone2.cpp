#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int length = digits.size();
        bool flag=1;
        if(digits[length-1]!=9){
            digits[length-1]++;
            return digits;
        }
        else{
            for(int i=length-1;i>=0;i--){
                if(flag==1&&digits[i]==9){
                    digits[i]=0;
                    flag=1;
                }
                else if(flag==1&digits[i]!=9){
                    digits[i]++;
                    return digits;
                }
            }
            digits.insert(digits.begin(),1);
            return digits;
        }
        
        
    }
};
int main(){

    Solution s;
    vector<int> vec = {9,9,9,9,9,9,9,9,9};
    vector<int> ret_vec = s.plusOne(vec);

    for(int i=0;i<ret_vec.size();i++){
        cout<<ret_vec[i]<<endl;
    }
    return 0;
}