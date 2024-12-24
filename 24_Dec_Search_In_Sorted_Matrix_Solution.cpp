#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to search a given number in row-column sorted matrix.
    bool searchMatrix(vector<vector<int>> &mat, int x) {
        // code here
        int n = mat.size(), m = mat[0].size();
        int low = 0, high = n*m - 1;
        while(low<=high){
            int mid = (low+high)/2;
            int val = mat[mid/m][mid%m];
            if(val == x) return true;
            else if(val > x) high = mid-1;
            else low = mid+1;
        }
        return false;
    }
};

int main(){
    return 0;
}