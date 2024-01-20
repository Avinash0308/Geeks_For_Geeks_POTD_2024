#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<int>> kTop(vector<int> &arr, int N, int K)
    {
        // code here
        unordered_map<int, int> freq;
        unordered_map<int, int> indx;
        vector<vector<int>> ans;
        vector<int> topk;
        for (int i = 0; i < N; i++)
        {
            freq[arr[i]]++;
            int j;
            if (indx.count(arr[i]) == 0 || indx[arr[i]] >= topk.size())
            {
                j = topk.size();
                topk.push_back(arr[i]);
            }
            else
            {
                j = indx[arr[i]];
            }
            while (j > 0 && ((freq[topk[j - 1]] < freq[arr[i]]) || (freq[topk[j - 1]] == freq[arr[i]] && topk[j - 1] > arr[i])))
            {
                swap(topk[j - 1], topk[j]);
                indx[topk[j]]++;
                j--;
            }
            indx[arr[i]] = j;
            while (topk.size() > K)
            {
                topk.pop_back();
            }
            ans.push_back(topk);
        }
        return ans;
    }
};