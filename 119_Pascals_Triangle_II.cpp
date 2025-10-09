#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> triangle = {{1}};
        vector<int> triangleRow = {1};
        for(int i=1;i<=rowIndex;i++){
            triangleRow.clear();
            for(int j=0;j<=i;j++){
                if(j==0 || j==i) triangleRow.push_back(1);
                else{
                    triangleRow.push_back(triangle[i-1][j-1] + triangle[i-1][j]); 
                }
            }
            triangle.push_back(triangleRow);
       }
        return triangleRow;
    }
};

int main() {
    Solution s;
    vector<int> pascalRow = s.getRow(5);
    for(int i=0;i<pascalRow.size();i++){
        cout<<pascalRow[i]<<" ";
    }
    return 0;
}
