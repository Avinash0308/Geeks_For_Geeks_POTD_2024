#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        // Code here.
        vector<int> v(k);
        int  n = nums.size();
        if(n%2) return 0;
        for(int i= 0; i<n; i++){
            v[nums[i]%k]++;
        }
        for(int i = 0; i<=k/2; i++){
            if(i == 0){
                if(v[i]%2) return false;
            }
            else{
                if(v[i] != v[k-i]) return false;
            }
        }
        return true;
    }
};