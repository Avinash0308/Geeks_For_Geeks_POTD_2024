#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int countFreq(vector<int>& arr, int target) {
        // code here
        int ans = 0;
        for(auto i:arr) ans += (i == target);
        return ans;
    }
};
int main(){
    return 0;
}