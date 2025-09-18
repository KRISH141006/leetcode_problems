#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    bool isPaindrome(string n){
        for(int i=0;i<n.length()/2;i++){
            if(!(n[i]==n[n.length()-i-1])) 
            return false;
        }
        return true;
    }
    string reducing_n(string n){
        if(n.length()==1 && n[0] == '0') return "0";
        else if(n.length()>1){
            for(int i=n.length()-1;i>=0;i--){
                if(n[i]=='0') n[i]='9';
                else if(n[i]!='0') {
                    n[i]=n[i]-'0'-1+'0';
                    break;
                }
            }
            while(n[0]=='0'){
                n.erase(0,1);
            }
            return n;
        }
    }
    string increasing_n(string n){
        int flag=0;
        for(int i=n.length()-1;i>=0;i--){
            if(n[i]=='9'){
                n[i]='0';
                flag=1;
            }
            
        } 
    }
    string nearestPalindromic(string n){
        int below_n,above_n;

    }

};
int main(){
    Solution s;
    // cout<<s.isPaindrome("")<<endl;
    cout<<s.reducing_n("10000");
    return 0;
}