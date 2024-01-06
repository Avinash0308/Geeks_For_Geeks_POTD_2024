#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
	int sumOfPowers(int a, int b){
	    // Code here
	    vector<int> v(b+1);
	    for(int i = 2; i<=b; i++){
	        bool found = false;
	        for(int j = 2; j*j<=i; j++){
	            if(i%j == 0){
	                v[i] = v[i/j] + 1;
	                found = true;
	                break;
	            }
	        }
	        if(!found)v[i] = 1;
	    }
	    int ans = 0;
	    for(int i = a; i<=b; i++){
	        ans += v[i];
	    }
	    return ans;
	}
};