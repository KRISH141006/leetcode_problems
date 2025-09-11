#include<iostream>
#include<algorithm>
using namespace std;

class Solution{
public :
    string convertToBase7(int num){
        bool flag=0;
        string ans="";
        if(num<0){
            flag = 1;
            num = abs(num);
        } 
        int i=0;
        while(num>0){
            int rem = num % 7;
            ans += rem + '0';
            num/=7;
        }

        reverse(ans.begin(),ans.end());

        if(flag==1) ans.insert(ans.begin()+0,'-');

        return ans;
    }
};
int main(){
    Solution s;
    cout<<s.convertToBase7(14);
    return 0;
}