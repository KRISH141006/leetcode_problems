#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int indx = s.length()-1,count = 0; 
        bool startflag = false;
        while(indx>=0){
            cout<<indx<<" "<<count<<endl;
            if(s[indx]==' '){
                if(startflag) break;
            }
            else{
                startflag = 1;
                count++;
            }
            indx--;
        }
        return count;
    }
};

int main() {
    Solution s;
    string str = "h";
    cout<<s.lengthOfLastWord(str)<<endl;
    return 0;
}
