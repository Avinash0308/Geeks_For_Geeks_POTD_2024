#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to find the smallest positive number missing from the array.
    int missingNumber(vector<int> &arr) {
        // Your code here
        sort(arr.begin(),arr.end());
        int cur = 1;
        for(auto i:arr){
            if(cur > i) continue;
            if(cur == i) cur++;
            else return cur;
        }
        return cur;
    }
};

int main(){
    return 0;
}