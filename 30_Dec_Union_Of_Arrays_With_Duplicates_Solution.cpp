#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to return the count of number of elements in union of two arrays.
    int findUnion(vector<int>& a, vector<int>& b) {
        // code here
        unordered_map<int,int> mp;
        int ans = 0;
        for(auto i:a){
            if(mp.count(i)) continue;
            ans++;
            mp[i]++;
        }
        for(auto i:b){
            if(mp.count(i)) continue;
            ans++;
            mp[i]++;
        }
        return ans;
    }
};

int main(){
    return 0;
}