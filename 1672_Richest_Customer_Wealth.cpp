#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int sum = 0;
        int maxSum = 0;
        for(int i=0;i<accounts.size();i++){
            sum = accumulate(accounts[i].begin(),accounts[i].end(),0);
            maxSum = max(maxSum,sum);
        }
        return maxSum;
    }
};

int main() {
    Solution s;
    vector<vector<int>> accounts = {{1,5},{7,3},{3,5}};
    cout<<s.maximumWealth(accounts);
    return 0;
}
