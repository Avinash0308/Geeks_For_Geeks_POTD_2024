#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int kthMissing(vector<int> &arr, int k) {
        // Your code goes here
        int prev = 1;
        for(int i = 0; i<arr.size(); i++){
            if(k <= arr[i]-prev) return prev + k -1;
            k -= (arr[i]-prev);
            prev = arr[i]+1;
        }
        return prev + k -1;
    }
};

int main(){
    return 0;
}