
#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

class Solution{
public :
    int findComplement(int num) {
        string ans="";
        int com_num=0;
        
        while(num>0){
            int r = num % 2;
            if(r==1)
            ans += '0';
            else ans+='1';
            num/=2;
        }
        cout<<ans<<endl;
        reverse(ans.begin(),ans.end());
        int k=0;
        for(int i=ans.length()-1;i>=0;i--){
            com_num += pow(2,k) * (ans[i] - '0');
            k++;
        }
        return com_num;
    }

    // int findComplement(int num) {
    //     string ans=inBinary(num);
        
    //     for(int i=0;i<ans.length();i++){
    //         if(ans[i]=='0') ans[i]='1';
    //         else ans[i]='0';
    //     }

    //     int decimal = 0;
    //     int k=0;
    //     for(int i=ans.length()-1;i>=0;i--){
    //         decimal += (ans[i]-'0') * pow(2,k);
    //         k++;
    //     }
    //     return decimal;
    // }
    // string inBinary(int num){
    //     int r=0;
    //     string ans = "";
    //     int i=0;
    //     while(num>0){    
    //         r = num%2;
    //         if(r==1) ans +='1';
    //         else ans += '0';
    //         num/=2;
    //         i++;
    //     }
    //     reverse(ans.begin(),ans.end());
    //     return ans;
    // }
};
int main(){
    Solution s;
    cout<<s.findComplement(6)<<endl;
    return 0;
}
