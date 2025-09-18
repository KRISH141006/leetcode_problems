#include<iostream>
#include<algorithm>
using namespace std;

class Solution{
public :
    int sumBase(int n, int k){
        string ans = "",base = "";
        int sum=0;
        switch(k){
            case 2  :  base += "01";
            case 3  :  base += "012";
            case 4  :  base += "0123";
            case 5  :  base += "01234";
            case 6  :  base += "012345";
            case 7  :  base += "0123456";
            case 8  :  base += "01234567";
            case 9  :  base += "012345678";
            case 10 :  base += "0123456789";
        }
        for(int i=0;n>0;i++){
            ans += base[n%k];
            n/=k;
        }
        // cout<<ans<<endl;
        reverse(ans.begin(),ans.end());
        for(int i=0;i<ans.length();i++){
            sum += ans[i] - '0';
        }
        return sum;
    }
};
int main(){
    Solution s;
    cout<<s.sumBase(34,6)<<endl;
    return 0;
}