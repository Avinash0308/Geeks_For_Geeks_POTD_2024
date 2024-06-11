#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    long long solve(long long int a, long long int b, long long int x, long long int y, long long int sum, vector<int> &arr, vector<int> &brr, long long int n){
        int cut = a - x;
        priority_queue<long long int> pq;
        for(int i = 0; i<n; i++){
            if(arr[i] >= brr[i]){
                pq.push(arr[i]-brr[i]);
            }
            if(pq.size() > cut) pq.pop();
        }
        while(!pq.empty()){
            sum -= pq.top();
            pq.pop();
        }
        return sum;
    }
    long long maxTip(int n, int x, int y, vector<int> &arr, vector<int> &brr) {
        // code here
        long long int a = 0, b = 0, sum = 0, equal = 0;
        for(int i = 0; i<n; i++){
            if(arr[i] > brr[i]){
                a++;
                sum += arr[i];
            }
            else if(arr[i] == brr[i]){
                equal++;
                sum += arr[i];
                a++, b++;
            }
            else{
                b++;
                sum += brr[i];
            }
        }
        if(a - equal <= x ) a -= equal;
        else b -= equal;
        if(a <= x && b <= y) return sum;
        if(a > x) return solve(a,b,x,y,sum,arr,brr,n);
        else return solve(b,a,y,x,sum,brr,arr,n);
    }
};

int main(){
    return 0;
}