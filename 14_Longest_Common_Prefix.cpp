/*
old mistake
    i=0
    pre = f
    j=1
    f==strs[1][i]
    f==strs[2][i]
    i=1
    pre = fl
    j=2
    pre[1]==strs[2][i]
    i=2
    pre=flo
    j=3
    pre[2]==strs[3][i] -->wrong j=i+1

*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution{
public :
    string longestCommonPrefix(vector<string>& strs){
        if(strs.empty()) return "";   

        if(strs.size()==1) return strs[0];

        for(int i=0;i<strs.size();i++){
            if(strs[i]=="") return "";
        }
        string pre="";
        for(int i=0;i<strs[i].size();i++){
            pre += strs[0][i];
            for(int j=1;j<strs.size();j++){
                if(pre[i]!=strs[j][i]){
                    pre.erase(pre.length()-1);
                    return pre;
                }
            }
        }
        return pre;
    }      
};
int main(){
    Solution s;
    vector<string> strs = {"flower","flow","flight"};
    cout<<s.longestCommonPrefix(strs)<<endl;
    return 0;
}