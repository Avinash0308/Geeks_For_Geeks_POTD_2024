#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int smallestSubstring(string S) {
        // Code here
        int zero = -1, one = -1, two = -1, ans = INT_MAX;
        int n = S.size();
        for(int i = 0; i<n; i++){
            if(S[i] == '0') zero = i;
            else if(S[i] == '1') one = i;
            else two = i;
            if(zero != -1 && one != -1 && two != -1){
                int lower_ind = min({zero,one,two});
                int upper_ind = max({zero,one,two});
                ans = min(ans,upper_ind-lower_ind+1);
            }
        }
        if(ans == INT_MAX) return -1;
        else return ans;
    }
};