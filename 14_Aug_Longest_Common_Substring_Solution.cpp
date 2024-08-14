#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int longestCommonSubstr(string str1, string str2) {
        // your code here
        int n = str1.size(),m = str2.size();
        int ans = 0;
        vector<vector<int>> dp(n+1,vector<int>(m+1,0));
        for(int i = 0; i<n; i++){
            for(int j = 0; j<m; j++){
                if(str1[i] == str2[j]){
                    dp[i+1][j+1] = dp[i][j] + 1;
                }
                ans = max(ans,dp[i+1][j+1]);
            }
        }
        return ans;
    }
};

int main(){
    return 0;
}