#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> intersectionWithDuplicates(vector<int>& a, vector<int>& b) {
        // code here
        unordered_map<int,int> mp;
        for(auto i:a) mp[i]++;
        vector<int> ans;
        for(auto i:b){
            if(mp.count(i)){
                ans.push_back(i);
                mp.erase(i);
            }
        }
        return ans;
    }
};

int main(){
    return 0;
}