#include<bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
    //Function to find minimum number of pages.
      int cs(vector<int> &arr, int p){
        int stud=1;
        long long pageStud=0;
        for (int i=0;i<arr.size();i++){
            if (pageStud + arr[i] <= p){
                pageStud+=arr[i];
            }else{
                stud+=1;
                pageStud=arr[i];
            }
        }
        return stud;
    } 
    int findPages(vector<int> &arr, int k) {
        // code here
        int n=arr.size();
        if (k>n) return -1;
        int low=*max_element(arr.begin(),arr.end());
        int high=accumulate(arr.begin(),arr.end(),0);
        while (low<=high){
            int mid=(low+high)/2;
            int stud=cs(arr,mid);
            if (stud>k) low=mid+1;
            else high=mid-1;
        }
        return low;
    }
};

int main(){
    return 0;
}