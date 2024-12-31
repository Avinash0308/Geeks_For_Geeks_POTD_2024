#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:

    // Function to return length of longest subsequence of consecutive integers.
    int longestConsecutive(vector<int>& arr) {
        // Your code here
        int ans = 0;
        unordered_map<int,int> mp;
        for(auto i:arr) mp[i]++;
        for(auto i:arr){
            int val = i;
            int res = 0;
            while(mp.count(val)){
                res++;
                mp.erase(val);
                val--;
            }
            val = i+1;
            while(mp.count(val)){
                res++;
                mp.erase(val);
                val++;
            }
            ans = max(ans,res);
        }
        return ans;
    }
};

int main(){
    return 0;
}