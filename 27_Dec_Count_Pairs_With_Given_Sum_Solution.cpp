#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        // Code here
        int n  = arr.size();
        int ans = 0;
    unordered_map<int,int> mp;
    for(int i =0; i<n; i++){
        mp[arr[i]]++;
    }
    for(auto i:mp){
        if(target-i.first >= i.first && mp.count(target-i.first)){
            if(target-i.first == i.first){
                ans += (i.second*(i.second-1))/2;
            }
            else{
                ans += i.second*mp[target-i.first];
            }
        }
    }
    return ans;
    }
};
int main(){
    return 0;
}