class Solution:
    ##Complete this function
    #Function to find the sum of contiguous subarray with maximum sum.
    def maxSubArraySum(self,arr):
        ##Your code here
        cur = 0
        maxy = -10000001
        for i in arr:
            cur = cur + i
            if maxy < cur:
                maxy = cur
            if cur < 0:
                cur = 0
                
        return maxy
