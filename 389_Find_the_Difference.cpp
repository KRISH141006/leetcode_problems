#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    char findTheDifference(string s, string t){
        bool flag=0;
        long int sum_s=0,sum_t=0;
        for(int i=0;i<s.length();i++){
            sum_s +=s[i];
            sum_t +=t[i];
        }
        sum_t += t[t.length()-1];

        return char(sum_t-sum_s);
    }
};
int main(){
    Solution str;
    string s = "abcd", t = "abcde";
    cout<<str.findTheDifference(s,t);
    return 0;
}