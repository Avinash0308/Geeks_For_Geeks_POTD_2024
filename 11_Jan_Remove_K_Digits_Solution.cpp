#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    string removeKdigits(string S, int K) {
        stack<int> s;
        int n = S.size();
        for(int i = 0; i<n; i++){
            int val = S[i]-'0';
            while(!s.empty() && K && s.top() > val){
                s.pop();
                K--;
            }
            if(val || !s.empty())s.push(val);
        }
        while(!s.empty() && K){
            s.pop();
            K--;
        }
        if(s.empty()) return "0";
        string ans;
        while(!s.empty()){
            ans.push_back(char(s.top()+48));
            s.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};