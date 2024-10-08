#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int pairsum(vector<int> &arr) {
        // code here
        int n = arr.size();
        int a = INT_MIN, b = INT_MIN;
        for(int i = 0; i<n; i++){
            if(a <= arr[i]){
                b = a;
                a = arr[i];
            }
            else if(b <= arr[i]){
                b = arr[i];
            }
        }
        return a + b;
    }
};
int main(){
return 0;
}
