#include<bits/stdc++.h>
using namespace std;
bool isvalidsudoku(vector<vector<string>>& board){
    for(int row=0;row<9;row++){
        unordered_set<string> seen;
        for(int i =0;i<9;i++){
            if(board[row][i]==".") continue;
            
            if(seen.count(board[row][i])) return false;
            seen.insert(board[row][i]);
        }
    }
    for(int col=0;col<9;col++){
        unordered_set<string> seen;
        for(int i =0;i<9;i++){
            if(board[i][col]==".") continue;
            
            if(seen.count(board[i][col])) return false;
            seen.insert(board[i][col]);
        }
    }
    
    for(int box=0;box<9;box++){
        unordered_set<string> seen;
        // i represents the 9 cells inside the current 3x3 box
        for(int i=0;i<9;i++){
            int row = (box / 3) * 3 + (i / 3);
            int col = (box % 3) * 3 + (i % 3);
            
            if(board[row][col]==".") continue;
            
            if(seen.count(board[row][col])) return false;
            seen.insert(board[row][col]);
        }
    }
    return true;
}
int main(){
    vector<vector<string>> board = {
        {"5","3",".",".","7",".",".",".","."},
        {"6",".",".","1","9","5",".",".","."},
        {".","9","8",".",".",".",".","6","."},
        {"8",".",".",".","6",".",".",".","3"},
        {"4",".",".","8",".","3",".",".","1"},
        {"7",".",".",".","2",".",".",".","6"},
        {".","6",".",".",".",".",".",".","8"},
        {".",".",".","4","1","9",".",".","."},
        {".",".",".",".","8",".",".",".","9"}
    };
    cout<< boolalpha<<isvalidsudoku(board)<< endl;
    return 0;
}