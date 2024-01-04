#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int singleElement(int arr[] ,int N) {
        // code here
        int ans = 0;
        for(int i = 31; i>=0; i--){
            int one = 0;
            for(int j = 0; j<N; j++){
                if(arr[j] & (1<<i)) one++;
            }
            if(one%3) ans |= 1<<i;
        }
        return ans;
    }
};