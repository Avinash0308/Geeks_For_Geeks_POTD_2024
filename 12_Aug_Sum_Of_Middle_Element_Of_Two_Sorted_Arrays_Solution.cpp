#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int SumofMiddleElements(vector<int> &arr1, vector<int> &arr2) {
        // code here
        int n = arr1.size();
        int a = 0, b = n;
        while(a<=b){
            int mid = (a+b)/2;
            int mid2 = n-mid;
            int w = INT_MIN, x = INT_MIN, y = INT_MAX, z = INT_MAX;
            if(mid < n) y = arr1[mid];
            if(mid < n) z = arr2[mid2];
            if(mid-1 >= 0) w = arr1[mid-1];
            if(mid2-1 >= 0) x = arr2[mid2-1];
            if(w <= z && x <= y) return min(y,z) + max(w,x);
            else if(w > z) b = mid-1;
            else a = mid+1;
        }
        return -1;
    }
};

int main(){
    return 0;
}