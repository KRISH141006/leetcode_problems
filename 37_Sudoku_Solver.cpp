#include <bits/stdc++.h>
using namespace std;
void printSudoku(vector<vector<char>> board){
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
}
class Solution {
public:
    void solveSudoku(vector<vector<char>>& board) {
        
    }
};

int main() {
    Solution s;
    vector<vector<char>> board = {
            {'5','3','.','.','7','.','.','.','.'},
            {'6','.','.','1','9','5','.','.','.'},
            {'.','9','8','.','.','.','.','6','.'},
            {'8','.','.','.','.','.','.','3','.'},
            {'4','.','.','8','.','3','.','.','1'},
            {'7','.','.','.','2','.','.','.','6'},
            {'.','6','.','.','.','.','2','8','.'},
            {'.','.','.','4','1','9','.','.','5'},
            {'.','.','.','.','8','.','.','7','9'}
        };
        s.solveSudoku(board);
        printSudoku(board);
    return 0;
}
