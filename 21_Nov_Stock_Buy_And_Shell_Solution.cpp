#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        // code here
        int ans = 0, n = prices.size();
        int prev = prices[0];
        for(int i = 1; i<n; i++){
            if(prev < prices[i]){
                ans += prices[i] - prev;
            }
            prev = prices[i];
        }
        return ans;
    }
};
int main(){
  return 0;
}
