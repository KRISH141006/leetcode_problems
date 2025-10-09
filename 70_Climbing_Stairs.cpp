#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        int n1 = 1, n2 = 2,ans = 0;
        if(n==1) return n1;
        else if(n==2) return n2;
        for(int i=2;i<n;i++){
            ans = n1 + n2;
            n1 = n2;
            n2 = ans;
        }
        return ans;
    }
};

int main() {
    Solution s;
    cout<<s.climbStairs(5);
    return 0;
}
/*
1 - 1 - 1
2 - 1+1,2 - 2
3 - 1+1+1,1+2,2+1 - 3
4 - 1+1+1+1,1+1+2,1+2+1,2+1+1,2+2 - 5
5 - 1+1+1+1+1,1+1+1+2,1+1+2+1,1+2+1+1,2+1+1+1,1+2+2,2+1+2,2+2+1 - 8
6 - 1+1+1+1+1+1,1+1+1+1+2,1+1+1+2+1,1+1+2+1+1,1+2+1+1+1,2+1+1+1+1,1+1+2+2,1+2+2+1,2+2+1+1,1+2+1+2,2+1+2+1,2+1+1+2,2+2+2 - 13
*/