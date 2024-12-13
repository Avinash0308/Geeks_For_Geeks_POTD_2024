#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int findMin(vector<int>& arr) {
        // complete the function here
        int ans = INT_MAX;
        for(auto i:arr) ans = min(ans,i);
        return ans;
    }
};
int main(){
    return 0;
}