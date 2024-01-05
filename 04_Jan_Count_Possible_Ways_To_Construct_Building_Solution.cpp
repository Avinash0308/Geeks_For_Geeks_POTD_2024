#include<bits/stdc++.h>
using namespace std;
class Solution{
    int mod = 1e9+7;
	public:
	long long int solve(int ind, int N, vector<vector<long long int>> &v, int last){
	    if(ind > N) return 1;
	    if(v[ind][last] != -1) return v[ind][last];
	    if(last == 0){
	        v[ind][last] = (solve(ind+1,N,v,1) + ((v[ind][1]==-1)?solve(ind+1,N,v,0):v[ind][1]))%mod;
	    }
	    else{
	        v[ind][last] = solve(ind+1,N,v,0)%mod;
	    }
	    return v[ind][last];
	}
	int TotalWays(int N)
	{
	    // Code here
	    vector<vector<long long int>> v(N+1,vector<long long int> (2,-1));
	    long long int ans = solve(1,N,v,0);
	    return (ans*ans)%mod;
	}
};