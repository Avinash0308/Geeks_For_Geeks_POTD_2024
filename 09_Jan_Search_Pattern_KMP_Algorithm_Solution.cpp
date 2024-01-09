#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
        vector <int> search(string pat, string txt)
        {
            //code here
            int n = txt.size(), m = pat.size();
            vector<int> lps(m);
            vector<int> ans;
            int len = 0;
            int i = 1;
            while(i<m){
                if(pat[i] == pat[len]) {
                    len++;
                    lps[i] = len;
                    i++;
                }
                else if(len != 0) len = lps[len-1];
                else{
                    i++;
                }
            }
            int j = 0;
            i = 0;
            while((n-i) >= (m-j)){
                if(pat[j] == txt[i]){
                    j++,i++;
                }
                if(j == m){
                    ans.push_back(i-j+1);
                    j = lps[j-1];
                }
                else if(i<n && pat[j] != txt[i]){
                    if(j!=0) j= lps[j-1];
                    else i++;
                }
            }
            return ans;
        }
     
};