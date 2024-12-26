#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        // code here
        unordered_map<int,int> mp;
        for(auto i:arr) mp[i]++;
        for(auto i:mp){
            if(mp.count(target-i.first) != 0){
                if(i.first == target-i.first){
                    if(mp[i.first] >= 2) return true;
                }
                else return true;
            }
        }
        return false;
    }
};

int main(){
    return 0;
}