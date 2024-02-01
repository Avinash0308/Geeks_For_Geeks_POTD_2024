#include<bits/stdc++.h>
using namespace std;
class Solution
{
  public:
    //Function to check if a string is Pangram or not.
    bool checkPangram (string s) {
        // your code here
        vector<int> v(256);
        int count = 0;
        for(auto c:s){
            if(c == ' ' || c == ' ') continue;
            v[(int)c] = 1;
        }
        for(int i = 0; i<26; i++){
            if(!v[i+97] && !v[i+65]) return false;
        }
        return true;
    }

};