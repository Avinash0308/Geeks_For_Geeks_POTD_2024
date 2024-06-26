#include<bits/stdc++.h>
using namespace std;

class Solution {

  public:
    int findMinCost(string x, string y, int costX, int costY) {
        // Your code goes here
        int m = x.size(), n = y.size();
        int L[m + 1][n + 1]; 
        int i, j; 
      
        /* Following steps build L[m+1][n+1] in bottom up fashion. Note  
          that L[i][j] contains length of LCS of X[0..i-1] and Y[0..j-1] */
        for (i = 0; i <= m; i++) { 
            for (j = 0; j <= n; j++) { 
                if (i == 0 || j == 0) 
                    L[i][j] = 0; 
      
                else if (x[i - 1] == y[j - 1]) 
                    L[i][j] = L[i - 1][j - 1] + 1; 
      
                else
                    L[i][j] = max(L[i - 1][j], L[i][j - 1]); 
            } 
        } 
        return (m-L[m][n])*costX + (n-L[m][n])*costY;
    }
};

int main(){
    return 0;
}