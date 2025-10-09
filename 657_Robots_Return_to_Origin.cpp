#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool judgeCircle(string moves) {
        int ud = 0,rl = 0;
        for(int i=0;i<moves.length();i++){
            if(moves[i]=='U') ud++; 
            else if(moves[i]=='D') ud--; 
            else if(moves[i]=='R') rl++; 
            else rl--; 
        }
        return (ud==0 && rl==0);
    }
};

int main() {
    Solution s;
    string moves = "UDUDRLRL";
    s.judgeCircle(moves);
    return 0;
}
