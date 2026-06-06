#include<bits/stdc++.h>
using namespace std;

bool search(vector<vector<int>>& matrix,int target ){
    // Input: matrix = [[1,2,4,8],[10,11,12,13],[14,20,30,40]], target = 10
    for(int r=0; r<matrix.size();r++){
        for(int c=0; c<matrix[r].size();c++){
            if(matrix[r][c]==target) return true ;
        }
    }
    return false;
}
int main(){
    vector<vector<int>> matrix = {{1,2,4,8},{10,11,12,13},{14,20,30,40}};
    int target = 10;
    int result = search(matrix, target);
    cout << result << endl;
}