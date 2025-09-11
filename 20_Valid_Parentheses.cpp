/*
    if flag1 is one and other flag2 or 3 gets one then first it should be zero then and then 1 should be zero 
*/

#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    bool isValid(string s){
        if (s.size() < 2) return false;
        int flag1=0,flag2=0,flag3=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='{') flag1++;
            else if(s[i]=='(') flag2++;
            else if(s[i]=='[') flag3++;
            else if(s[i]=='}') flag1--;
            else if(s[i]==')') flag2--;
            else if(s[i]==']' ) flag3--;
        }
        if(!(flag1==0 && flag2==0 && flag3==0)) return false;
        
        string slast="";
        for(int i = 0;i<s.length();i++){
           if(s[i]=='{' || s[i]=='(' || s[i]=='[') slast+=s[i];
           else if((s[i]=='}'&&slast[slast.length()-1]=='{') || (s[i]==')'&&slast[slast.length()-1]=='(') 
           || (s[i]==']'&&slast[slast.length()-1]=='['))
                slast.erase(slast.length()-1);
            else return false;
        }
        if(slast.empty())
        return true;
        else return false;
    }    
};
int main(){
    Solution s;
    string str = "[([]])";
    if(s.isValid(str)) cout<<"TRUE";
    else cout<<"FALSE";
    return 0;
}