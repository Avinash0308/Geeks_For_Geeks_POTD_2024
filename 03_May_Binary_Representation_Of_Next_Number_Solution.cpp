#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string binaryNextNumber(string s) {
        // code here.
        int n = s.size();
        int i = n-1;
        while(i>=0 && s[i] == '1'){
            s[i] = '0';
            i--;
        }
        if(i>=0){
            s[i] = '1';
        }
        else{
            s = "1" + s;
        }
        reverse(s.begin(),s.end());
        i = s.size()-1;
        while(i>0 && s[i] == '0'){ s.pop_back();i--;}
        reverse(s.begin(),s.end());
        return s;
    }
};

int main(){
    return 0;
}