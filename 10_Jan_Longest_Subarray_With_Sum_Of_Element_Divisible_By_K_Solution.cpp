#include<bits/stdc++.h>
using namespace std;
class Solution{
public:	
	int longSubarrWthSumDivByK(int arr[], int n, int k)
	{
	    // Complete the function
	   vector<int> v(k,-1);
	   int ans = 0;
	   int sum = 0;
	   for(int i = 0; i<n; i++){
	       sum += arr[i];
	       int mod;
	       if(sum < 0) mod = (k + (sum%k))%k;
	       else mod = sum%k;
	       if(mod == 0) ans = i+1;
	       else if(v[mod] != -1) ans = max(ans,i-v[mod]);
	       else v[mod] = i;
	   }
	   return ans;
	}  
};