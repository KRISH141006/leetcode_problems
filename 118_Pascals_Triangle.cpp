#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
       vector<vector<int>> triangle = {{1}};
       for(int i=1;i<numRows;i++){
            vector<int> triangleRow;
            for(int j=0;j<=i;j++){
                if(j==0 || j==i) triangleRow.push_back(1);
                else{
                    triangleRow.push_back(triangle[i-1][j-1] + triangle[i-1][j]); 
                }
            }
            triangle.push_back(triangleRow);
       }
       return triangle;
    }
};

int main() {
    Solution s;
    int n = 5;
    vector<vector<int>> triangle = s.generate(n);
    for(int i=0;i<n;i++){
        for(int j=0;j<triangle[i].size();j++){
            cout<<triangle[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
