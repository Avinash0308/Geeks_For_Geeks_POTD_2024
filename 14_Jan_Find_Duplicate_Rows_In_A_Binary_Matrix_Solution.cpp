#include<bits/stdc++.h>
using namespace std;
class Solution
{   
    public:
    vector<int> repeatedRows(vector<vector<int>> &matrix, int M, int N) 
    { 
        // Your code here
        vector<int> ans;
        unordered_map<string,int> m;
        for(int i = 0; i<M; i++){
            string cur;
            for(int j = 0; j<N; j++){
                if(matrix[i][j]) cur += "1";
                else cur += "0";
            }
            if(m.count(cur) != 0) ans.push_back(i);
            m[cur] = 1;
        }
        return ans;
    } 
};