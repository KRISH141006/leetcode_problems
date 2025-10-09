#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        bool onlySpace = true;

        for(int i=0;i<s.length();i++){
            if(s[i] != ' ') onlySpace = false;
        }

        if(onlySpace) return true;

        s = validString(s);

        for(int i=0;i<s.length()/2;i++){
            if(s[i] != s[s.length()-i-1]) return false;
        }

        return true;
    }
    // easiest approach 
    // bool isPalindrome(string s) {
    //     int st = 0,end=s.length()-1;

    //     while(st<=end){
    //         if(!isalnum(s[st])){
    //             st++;
    //             continue;
    //         } 
    //         if(!isalnum(s[end])){
    //             end--;
    //             continue;
    //         } 
    //         if(tolower(s[st] != tolower(s[end]))) return false;
    //         else{
    //             st++;
    //             end--;
    //         }
    //     }
    //     return true;
    // }
    string validString(string s) {

        for(int i=0;i<s.length();i++){
            bool flag = false;
            if(!isalnum(s[i])){
                s.erase(s.begin()+i);
                flag = true;
            }
            s[i] = tolower(s[i]);
            if(flag) i--;
        }
        return s;
    }    
};

int main() {
    Solution s;
    string str = "  ";
    cout<<s.isPalindrome(str)<<endl;
    return 0;
}
