#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to rotate matrix anticlockwise by 90 degrees.
    void rotateby90(vector<vector<int>>& mat) {
        // code here
        for(int i=0;i<mat.size();++i)
        {
            reverse(mat[i].begin(),mat[i].end());
        }
        
        for(int i=0;i<mat.size();++i)
        {
            for(int j=i;j<mat[0].size();++j)
            {
                swap(mat[i][j],mat[j][i]);
            }
        }
    }
};
int main(){
    return 0;
}