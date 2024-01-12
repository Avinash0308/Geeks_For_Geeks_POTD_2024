#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    
    // Function to reverse first k elements of a queue.
    queue<int> modifyQueue(queue<int> q, int k) {
        // add code here.
        stack<int> s;
        for(int i = 0; i<k; i++){
            int val = q.front();
            q.pop();
            s.push(val);
        }
        while(!s.empty())  {q.push(s.top()); s.pop();}
        int n = q.size();
        for(int i = 0; i<n-k; i++){
            int val = q.front();
            q.pop();
            q.push(val);
        }
        return q;
    }
};