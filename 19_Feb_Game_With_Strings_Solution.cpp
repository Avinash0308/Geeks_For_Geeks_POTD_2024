#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int minValue(string s, int k){
        // code here
        int n = s.size();
        vector<int> count(26);
        for(int i = 0; i<n; i++){
            count[s[i]-'a']++;
        }
        priority_queue<pair<int,int>> p;
        for(int i = 0; i<26; i++){
            if(count[i]) p.push({count[i],i});
        }
        while(k--){
            int val = p.top().first;
            int ind = p.top().second;
            p.pop();
            if(val>1) p.push({val-1,ind});
        }
        int ans = 0;
        while(!(p.empty())){
            int val = p.top().first;
            p.pop();
            ans += val*val;
        }
        return ans;
    }
};