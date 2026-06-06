#include<bits/stdc++.h>
using namespace std;
bool search(vector<vector<int>>& matrix , int target){
    for(int i=0;i<matrix.size();i++){
        // vector<vector<int>> matrix;
        if(matrix[i][0]<=target && matrix[i][matrix[i].size()-1]>=target) {
            // The target falls within the range of this row, so we search for it here.
            return binary_search(matrix[i].begin(), matrix[i].end(), target);
        }
    }
    return false ;
}
int main(){
    vector<vector<int>> matrix = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int target = 13;
    int result = search(matrix, target);
    cout <<boolalpha << result << endl;
}