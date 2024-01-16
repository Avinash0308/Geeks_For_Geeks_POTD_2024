#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int numberSequence(int m, int n){
        // code here
        if(n == 0) return 1;
        int ans = 0;
        for(int i = 0; i<m; i++){
            int val = numberSequence((m-i)/2,n-1);
            ans += val;
            if(!val) break;
        }
        return ans;
    }
};