#include<bits/stdc++.h>
using namespace std;
class Solution{
  public:
    void swapElements(int arr[], int n){
        
        // Your code here
        for(int i = 2; i<n; i++){
            swap(arr[i],arr[i-2]);
        }
    }
};