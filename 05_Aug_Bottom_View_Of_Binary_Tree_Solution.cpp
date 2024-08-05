#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left, *right;
};

class Solution {
  public:
    vector <int> bottomView(Node *root) {
        // Your Code Here
        unordered_map<int,int> mp;
        int low = INT_MAX, high = INT_MIN;
        queue<pair<Node*,int>> q;
        q.push({root,0});
        while(!q.empty()){
            Node* cur = q.front().first;
            int ind = q.front().second;
            mp[ind] = cur->data;
            low = min(low,ind);
            high = max(high,ind);
            
            q.pop();
            if(cur->left) q.push({cur->left,ind-1});
            if(cur->right) q.push({cur->right,ind+1});
        }
        vector<int> ans(high-low+1);
        for(int i = low; i<=high; i++){
            ans[i-low] = mp[i];
        }
        return ans;
    }
};

int main(){
    return 0;
}