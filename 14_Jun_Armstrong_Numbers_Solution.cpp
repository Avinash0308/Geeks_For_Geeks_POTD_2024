#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string armstrongNumber(int n) {
        // code here
        int val = n;
        int sum = 0;
        while(val){
            int c = val%10;
            val/=10;
            sum += (c*c*c);
        }
        if(sum == n) return "true";
        else return "false";
    }
};

int main(){
    return 0;
}