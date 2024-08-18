#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool canSplit(vector<int>& arr) {
        // code here
        int a = 0, b = 0, i = 0, j = arr.size()-1;
        while(i<=j){
            if(a<=b){
                a += arr[i];
                i++;
            }
            else{
                b += arr[j];
                j--;
            }
        }
        return a == b;
    }
};

int main(){
    return 0;
}