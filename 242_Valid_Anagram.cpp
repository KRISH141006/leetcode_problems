#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        vector<int> s1(26,0),s2(26,0);
        for(int i=0;i<s.length();i++){
            s1[s[i]-'a']++;
            s2[t[i]-'a']++;
        }
        return s1==s2;
    }
};
int main(){
    Solution k;
    string s = "rat", t = "car";
    cout<<k.isAnagram(s,t)<<endl;
    return 0;
}