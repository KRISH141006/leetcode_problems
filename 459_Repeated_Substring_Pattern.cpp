#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    bool repeatedSubstringPattern(string s) {
        int len = s.length();
        for(int i=1;i<len;i++){
            if(len%i==0){
                string subStr="";
                cout<<i<<endl;
                for(int j=0;j<i;j++){
                    subStr += s[j];
                }
                cout<<subStr<<endl;
                string str = "";
                for(int k=0;k<len;k++){
                    str+=subStr[k % subStr.length()];
                }
                cout<<str<<endl;
                if(str==s) return true;
            }
        }
        return false;
    }
    
};
int main(){
    Solution s;
    string str = "abaababaab";
    cout<<s.repeatedSubstringPattern(str)<<endl;
    return 0;
}