#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string toLowerCase(string s) {
        for(int i=0;i<s.length();i++){
            if(s[i]>=65 && s[i]<=90){
                s[i] += 32;
            }
        }
        return s;
    }
};

int main() {
    Solution s;
    cout<<s.toLowerCase("HEllo");
    return 0;
}
