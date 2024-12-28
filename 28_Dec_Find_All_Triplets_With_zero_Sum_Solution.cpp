#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<vector<int>> findTriplets(vector<int> &arr) {
        // Code here
        unordered_map<int, vector<vector<int>>> mp;
        int n = arr.size();
        for(int i = 0; i<n; i++){
            for(int j = i+1; j<n; j++){
                mp[arr[i]+arr[j]].push_back({i, j});
            }
        }
        vector<vector<int>> ans;
        for(int i = 0; i<n; i++){
            for(auto j:mp[-arr[i]]){
                if(j[0] > i){
                    ans.push_back({i, j[0], j[1]});
                }
            }
        }
        return ans;
    }
};
int main(){
    return 0;
}