#User function Template for python3
class Solution:
    
    # Note that the size of the array is n-1
    def missingNumber(self, n, arr):
        
        # code here
        ans = (n*(n+1))//2
        for i in arr:
            ans = ans - i
        return ans
