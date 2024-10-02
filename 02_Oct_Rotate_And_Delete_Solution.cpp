#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int rotateDelete(vector<int> &arr) 
    {
        int n= arr.size();
        int base_no = (((n-2)/4)*4)+2;
        int base_value = (base_no/2)-(base_no/4-1);
        return arr[(base_value+(n-base_no)%2)-1];
    }
};

int main(){
    return 0;
}