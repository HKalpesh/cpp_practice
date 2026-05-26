#include<bits/stdc++.h>
using namespace std;
bool isvalidsudoku(vector<vector<string>> board){
    unordered_set<string> row[9],col[9],box[9];
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            string num= board[i][j];
            if(num!="."){
                if(row[i].count(num) || col[j].count(num) || box[i/3*3+j/3].count(num)){
                    return false;
                }
                row[i].insert(num);
                col[j].insert(num);
                box[i/3*3+j/3].insert(num);
            }
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