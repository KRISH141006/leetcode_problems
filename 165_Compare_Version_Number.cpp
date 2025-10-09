#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int compareVersion(string version1, string version2) {
        vector<string> sv1,sv2;
        sv1 = splitString(version1);
        sv2 = splitString(version2);

        return 0;
    }
    vector<string> splitString(string s){
        vector<string> result;
        string temp = "";
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '.'){
                result.push_back(temp);
                temp = "";
            } else {
                temp += s[i];
            }
        }
        result.push_back(temp);
        return result;
    }
};

int main() {
    Solution s;
    string version1 = "1.2", version2 = "1.10";
    cout<<s.compareVersion(version1,version2);
    return 0;
}
