#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to search a given number in row-column sorted matrix.
    bool searchRowMatrix(vector<vector<int>> &mat, int x) {
        // code here
        int n = mat.size(), m = mat[0].size();
        for(int i = 0; i<n; i++){
            if(mat[i][0] > x || mat[i][m-1] < x) continue;
            int ind = lower_bound(mat[i].begin(), mat[i].end(), x) - mat[i].begin();
            if(mat[i][ind] == x) return true;
        }
        return false;
    }
};
int main(){
    return 0;
}